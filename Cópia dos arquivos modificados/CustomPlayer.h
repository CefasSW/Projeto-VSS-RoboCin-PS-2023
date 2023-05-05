#ifndef PROJECT_UNIFICATION_CUSTOMPLAYER_H
#define PROJECT_UNIFICATION_CUSTOMPLAYER_H

#include "Modules/Modules.h"
#include "Modules/Processing/ProcessingUtils/ProcessingUtils.h"

class CustomPlayer : public Processing {
 public:
  CustomPlayer(int index, QThreadPool* threadPool);

 protected:
  void buildParameters(Parameters::Handler& parameters) override;
  void connectModules(const Modules* modules) override;
  void init(const Modules* modules) override;
  void update() override;
  void exec() override;

 private:
  struct Args {};
  Args args;

  struct Shared {
    SharedOptional<Frame> frame;
    SharedOptional<Robot> robot;
    SharedOptional<Field> field;
    SharedValue<QSet<Qt::Key>> keys;
  };
  SharedWrapper<Shared, std::mutex> shared;

  std::optional<Field> field;
  std::optional<Frame> frame;
  std::optional<Robot> robot;

  SSLNavigation sslNavigation;
  VSSNavigation vssNavigation;

  //---------------------------------------------------------------------
  // Novos métodos privados

  void move_player_to_pos(std::optional<Robot> player, Point pos);
  void follow_track(Point player_pos);
  //---------------------------------------------------------------------

 private slots:
  void receiveField(const Field& field);
  void receiveFrame(const Frame& frame);
};

#endif // PROJECT_UNIFICATION_CUSTOMPLAYER_H
