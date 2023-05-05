#include "CustomPlayer.h"
#include <iostream>

CustomPlayer::CustomPlayer(int index, QThreadPool* threadPool) : Processing(index, threadPool) {
}

void CustomPlayer::buildParameters(Parameters::Handler& parameters) {
}

void CustomPlayer::connectModules(const Modules* modules) {
  connect(modules->vision(),
          &Vision::sendFrame,
          this,
          &CustomPlayer::receiveFrame,
          Qt::DirectConnection);

  connect(modules->vision(),
          &Vision::sendField,
          this,
          &CustomPlayer::receiveField,
          Qt::DirectConnection);
}

void CustomPlayer::init(const Modules* modules) {
}

void CustomPlayer::update() {
  shared->field.extract_to(field);
  if (auto f = shared->frame.get_optional_and_reset()) {
    if (auto it = f->allies().findById(index()); it != f->allies().end()) {
      robot = *it;
    }
    frame.emplace(*f);
  }
}

//=================================================================================================
//  A implementação própria do CustomPlayer inicia aqui

/*
Abaixo, as variáveis globais criadas. Optou-se por não criá-las como membros da classe
CustomPlayer a fim de permitir a flexibilidade de uso do mesmo header CustomPlayer.h para outras
implementações
*/
bool debug = false;
short int dir, bdir, ace_going_around = 0, wall_ball = 0;
int ace_id = 1, ace_behaviour = 0;
double safety_dist = 15, prediction_time = 2.5, vel_ang, old_vel_ang = 10, angGB;
Point ball_pos = {}, ball_vel = {}, enemy_goal_center = {}, future_ball_pos = {}, behind_ball = {};

/*
- debug : Flag que ativa as mensagens no terminal para auxílio na depuração do código
true (ativa), ou false (desativa)

- dir : Sentido de ataque
-1 (direita->esquerda), ou +1 (esquerda->direita)

- bdir : Sentido de ultrapassagem da bola
-1 (esquerda->direita), ou +1 (direita->esquerda)

- ace_going_around : Ultrapassagem da bola
-1 (por baixo), 0 (decisão não tomada), ou +1 (por cima)

- wall_ball : Paredes próximas da bola (obs.: considera a linha do gol como parede)
-1 (paredes inferiores), 0 (nenhuma parede), ou +1 (paredes superiores)

- ace_id : Identificador do jogador Ás

- ace_behaviour : Comportamento do jogador Ás

- safety_dist : Distância de segurança para não encostar na bola

- prediction_time : Tempo no futuro da previsão

- vel_ang : Ângulo do vetor velocidade da bola

- old_vel_ang : Ângulo do vetor velocidade da bola registrado anteriormente

- angGB : Ângulo do vetor com origem no centro do gol e extremidade na bola

- ball_pos : Posição da bola

- ball_vel : Vetor velocidade da bola

- enemy_goal_center : Centro do gol inimigo

- future_ball_pos : Posição da bola no futuro previsto

- behind_ball : Local onde o Ás deve se posicionar para chutar a bola
*/

// Comando para parar o jogador
VSSMotion::Stop halt;
VSSRobotCommand cmd_halt(halt);

// Comando para girar o jogador no sentido anti-horário
VSSMotion::Spin acw(8, true);
VSSRobotCommand cmd_acw(acw);

// Comando para girar o jogador rapidamente no sentido anti-horário
VSSMotion::Spin fast_acw(20, true);
VSSRobotCommand cmd_fast_acw(fast_acw);

// Comando para girar o jogador rapidamente no sentido horário
VSSMotion::Spin fast_cw(20, false);
VSSRobotCommand cmd_fast_cw(fast_cw);

//------------------------------------------------------------------------
// Funções auxiliares

// Calcula o ângulo formado pelo vetor com origem em p1 e extremidade em p2
double angle_for_points(Point p1, Point p2) {
  double rx = p2.x() - p1.x();
  double ry = p2.y() - p1.y();
  return std::atan2(ry, rx);
}

// Envia o jogador para uma determinada posição
void CustomPlayer::move_player_to_pos(std::optional<Robot> player, Point pos) {
  VSSMotion::GoToPoint move_to_pos(pos);
  VSSRobotCommand cmd_move_to_pos(move_to_pos);
  emit sendCommand(vssNavigation.run(*player, cmd_move_to_pos));
}

// Instrui o jogador a seguir determinado percurso
// Nesse caso, foi escolhido um arco de circunferência que evita encostar na bola
void CustomPlayer::follow_track(Point player_pos) {

  double ang0 = angle_for_points(ball_pos, player_pos); // Direção do jogador em relação a bola
  double step = 0.8 * bdir; // Incremento do ângulo para contornar a bola

  // Se a decisão do contorno ainda não foi tomada, caso esteja do lado de cima e houver espaço,
  // ou não houver espaço do para baixo, o contorno ocorre por cima, do contrário, por baixo
  if (ace_going_around == 0) {
    if ((ang0 >= 0 && field->max().y() - player_pos.y() > safety_dist) ||
        (player_pos.y() - field->min().y() <= safety_dist)) {
      ace_going_around = 1;
    } else {
      ace_going_around = -1;
    }
  }

  // Varia o ângulo no sentido horário ou anti-horário
  if (ace_going_around == 1) {
    ang0 += step;
    if (debug)
      std::cout << "Up\n";
  } else if (ace_going_around == -1) {
    ang0 -= step;
    if (debug)
      std::cout << "Down\n";
  }

  if (debug)
    std::cout << ang0 << "\n";

  // Determina a próxima posição que o jogador deve tomar
  Point pos(safety_dist * cos(ang0) + ball_pos.x(), safety_dist * sin(ang0) + ball_pos.y());
  move_player_to_pos(robot, pos);
}

// Verifica se dois vetores tem direções próximas
bool same_dir(double ang1, double ang2) {

  // Seus ângulos devem ser aproxidamente iguais ou suplementares
  return (abs(ang1 - ang2) <= 0.1) || (abs(abs(ang1 - ang2) - PI) <= 0.1);
}

// Verifica se um objeto está se aproximando do alvo
bool getting_closer(Point obj, Point target, Point obj_vel) {

  // Se o vetor alvo->objeto tiver alguma componente com mesmo sentido que a componente da
  // velocidade, ou se a velocidade for nula, então o objeto não está se aproximando do alvo
  if ((obj.x() - target.x()) * obj_vel.x() > 0 || (obj.y() - target.y()) * obj_vel.y() > 0 ||
      (obj_vel.x() == 0 && obj_vel.y() == 0)) {
    return false;
  }
  return true;
}

// Atualiza a posição que o Ás deve tomar se a bola estiver próxima a alguma parede
// Essa posição deve permitir que o jogador afaste a bola da parede na direção desejada
void update_behind_ball(std::optional<Field> field) {

  // spin_dist é a distância entre o jogador e a bola para que ele comece girar
  // close_dist é a distância mínima para que a bola seja considerada longe da parede
  double posx, posy, spin_dist = 3, close_dist = 9;
  wall_ball = 0; // Inicialmente considera que a bola não está próxima a nenhuma parede

  if (future_ball_pos.y() > 0) {
    // Bola próxima da parede esquerda superior
    if ((future_ball_pos.x() - field->min().x()) < close_dist) {
      behind_ball = {future_ball_pos.x() + spin_dist, future_ball_pos.y() - spin_dist * dir};
      wall_ball = 1;
      if (debug)
        std::cout << "Above, Left\n";

    }
    // Bola próxima da parede superior
    else if ((field->max().y() - future_ball_pos.y()) < close_dist) {
      behind_ball = {future_ball_pos.x() - spin_dist * dir, future_ball_pos.y() - spin_dist};
      wall_ball = 1;
      if (debug)
        std::cout << "Above\n";
    }
    // Bola próxima da parede direita superior
    else if ((field->max().x() - future_ball_pos.x()) < close_dist) {
      behind_ball = {future_ball_pos.x() - spin_dist, future_ball_pos.y() + spin_dist * dir};
      wall_ball = 1;
      if (debug)
        std::cout << "Above, Right\n";
    }
  } else {
    // Bola próxima da parede esquerda inferior
    if ((future_ball_pos.x() - field->min().x()) < close_dist) {
      behind_ball = {future_ball_pos.x() + spin_dist, future_ball_pos.y() + spin_dist * dir};
      wall_ball = -1;
      if (debug)
        std::cout << "Below, Left\n";
    }
    // Bola próxima da parede inferior
    else if ((future_ball_pos.y() - field->min().y()) < close_dist) {
      behind_ball = {future_ball_pos.x() - spin_dist * dir, future_ball_pos.y() + spin_dist};
      wall_ball = -1;
      if (debug)
        std::cout << "Below\n";
    }
    // Bola próxima da parede direita inferior
    else if ((field->max().x() - future_ball_pos.x()) < close_dist) {
      behind_ball = {future_ball_pos.x() - spin_dist, future_ball_pos.y() - spin_dist * dir};
      wall_ball = -1;
      if (debug)
        std::cout << "Below, Right\n";
    }
  }
}

//---------------------------------------------------------------------------------------
// Região principal executada em paralelo pelos robôs (TODO section)

void CustomPlayer::exec() {

  // Verifica o reconhecimento do campo, das imagens e do robô
  if (!field || !frame || !robot) {
    return;
  }

  // Variáveis constantemente atualizadas

  Ball ball = frame->ball();            // Bola obtida visualmente
  int player_num = robot->id();         // Identificador do robô que está exectuando este código
  Point player_pos = robot->position(); // Posição do robô que está executando este código

  ball_vel = ball.velocity();
  vel_ang = Geometry2D::angle(ball_vel);
  enemy_goal_center = field->enemyGoalInsideCenter();
  ball_pos = ball.position();
  dir = field->attackDirection().x();
  // (variáveis acima explicadas na seção de variáveis globais)

  // Se houve alteração significativa do ângulo do vetor velocidade da bola, cria nova previsão
  if (abs(vel_ang - old_vel_ang) > 0.05) {
    future_ball_pos = ball_pos + ball_vel * prediction_time;
    angGB = angle_for_points(enemy_goal_center, future_ball_pos);
    behind_ball = {future_ball_pos.x() + safety_dist * cos(angGB),
                   future_ball_pos.y() + safety_dist * sin(angGB)};
    old_vel_ang = vel_ang;
  }
  // Se a bola não estiver se aproximando do ponto previsto, também cria nova previsão
  if (ball.distTo(future_ball_pos) > 6 && !getting_closer(ball_pos, future_ball_pos, ball_vel)) {
    old_vel_ang = 10; // Ângulo incoerente que reseta a previsão
  }

  // Ações exclusivas do jogador Ás
  if (player_num == ace_id) {

    if (debug)
      std::cout << "ace_behaviour = " << ace_behaviour << "\n";

    // Verifica se a bola está próxima de uma parede
    update_behind_ball(field);

    // Define o sentido da movimentação jogador em relação a bola
    bdir = (behind_ball.x() - ball_pos.x()) * dir <= 0 ? 1 : -1;

    // Sempre que o Ás chega até a posição de chute, modifica para o estado de Giro
    if (robot->distTo(behind_ball) < 3.5 && (ace_behaviour == 1 || ace_behaviour == 2)) {
      ace_behaviour = 4;
      ace_going_around = 0;
    }

    // Comportamentos do Ás (conceito próximo a uma Máquina de Estados Finitos)
    switch (ace_behaviour) {

      // Comportamento inicial, nesse caso, apenas muda para o Posicionamento
      // (podem ser implementados outros comportamentos como aguardar passe)
      case 0: ace_behaviour = 1; break;

      // Posicionamento
      case 1:
        // Se a bola está no caminho, mudar para Ultrapassagem
        if (robot->distTo(ball_pos) <= safety_dist && (player_pos.x() - ball_pos.x()) * bdir >= 0) {
          ace_behaviour = 2;
        }
        // Caso contrário, move para posição de chute
        else {
          move_player_to_pos(robot, behind_ball);
          if (debug) {
            std::cout << "behind_ball = " << behind_ball.x() << ", " << behind_ball.y() << "\n";
            std::cout << "ang dif = " << abs(vel_ang - old_vel_ang) << "\n";
          }
        }
        break;

      // Ultrapassagem
      case 2:
        // Se o jogador já estiver distante o suficiente ou do outro lado, encerra a ultrapassagem
        if (robot->distTo(ball_pos) > safety_dist + 5 ||
            (player_pos.x() - ball_pos.x()) * bdir < 0) {
          ace_behaviour = 1;
          ace_going_around = 0;
        }
        // Caso contrário, realiza ultrapassagem
        else {
          follow_track(player_pos);
        }
        break;

      // Chute/Corrida em direção ao gol
      case 3:
        // Move o jogador em direação ao gol inimigo
        move_player_to_pos(robot, enemy_goal_center);

        // Se a bola se distanciar, volta para Posicionamento
        if (robot->distTo(ball_pos) > safety_dist + 5) {
          ace_behaviour = 1;
        }
        break;

      // Giro
      case 4:
        // Se o jogador não estiver na posição correta, volta para Posicionamento
        if (robot->distTo(behind_ball) >= 3.5) {
          ace_behaviour = 1;
        }
        // Se a bola estiver próxima a alguma parede, o giro afasta a bola no sentido desejado
        else if (wall_ball * dir == 1) {
          emit sendCommand(vssNavigation.run(*robot, cmd_fast_cw));
          if (debug)
            std::cout << "Clockwise\n";
        } else if (wall_ball * dir == -1) {
          emit sendCommand(vssNavigation.run(*robot, cmd_fast_acw));
          if (debug)
            std::cout << "AntiClockwise\n";
        }
        // Se o jogador estiver na direção do gol, muda para Espera
        else if (same_dir(robot->angle(), angGB)) {
          emit sendCommand(vssNavigation.run(*robot, cmd_halt));
          ace_behaviour = 5;
        }
        // Caso contrário o jogador continua girando até ajustar
        else {
          emit sendCommand(vssNavigation.run(*robot, cmd_acw));
        }
        break;

      // Espera
      case 5:
        // Se o jogador não estiver na posição correta, volta para Posicionamento
        if (robot->distTo(behind_ball) >= 3.5) {
          ace_behaviour = 1;
        }
        // Se a bola chegar ao ponto previsto, muda para Chute
        else if (ball.distTo(future_ball_pos) <= 6) {
          ace_behaviour = 3;
        }
        if (debug) {
          std::cout << "ball pos = " << ball_pos.x() << "," << ball_pos.y() << "\n";
          std::cout << "future ball pos = " << future_ball_pos.x() << "," << future_ball_pos.y()
                    << "\n";
          std::cout << "behind ball pos = " << behind_ball.x() << "," << behind_ball.y() << "\n";
          std::cout << "dist = " << robot->distTo(behind_ball) << "\n";
        }
        break;
    }
  }
}

//===================================================================================

void CustomPlayer::receiveField(const Field& field) {
  shared->field = field;
}

void CustomPlayer::receiveFrame(const Frame& frame) {
  shared->frame = frame;
  runInParallel();
}

static_block {
  Factory::processing.insert<CustomPlayer>();
};
