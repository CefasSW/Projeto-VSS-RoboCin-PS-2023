/****************************************************************************
** Meta object code from reading C++ file 'TestParameters.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../test/TestParameters/TestParameters.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TestParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTestParametersENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTestParametersENDCLASS = QtMocHelpers::stringData(
    "TestParameters",
    "initTestCase",
    "",
    "init",
    "cleanup",
    "cleanupTestCase",
    "test_ParameterType_eval_WithInvalidParameters_ShouldReturnNullopt",
    "test_ParameterType_eval_WithValidParameters_ShouldWork",
    "test_Text_WithValidParameters_ShouldConstruct",
    "test_Text_WithInvalidParameters_ShouldThrowException",
    "test_File_WithValidParameters_ShouldConstruct",
    "test_File_WithInvalidParameters_ShouldThrowException",
    "test_Directory_WithValidParameters_ShouldConstruct",
    "test_Directory_WithInvalidParameters_ShouldThrowException",
    "test_SpinBox_WithValidParameters_ShouldConstruct",
    "test_SpinBox_WithInvalidParameters_ShouldThrowException",
    "test_DoubleSpinBox_WithValidParameters_ShouldConstruct",
    "test_DoubleSpinBox_WithInvalidParameters_ShouldThrowException",
    "test_MappedAngleInRadiansToDegrees_WithValidParameters_ShouldConstruct",
    "test_MappedAngleInRadiansToDegrees_WithInvalidParameters_ShouldThrowEx"
    "ception",
    "test_Slider_WithValidParameters_ShouldConstruct",
    "test_Slider_WithInvalidParameters_ShouldThrowException",
    "test_CheckBox_WithValidParameters_ShouldConstruct",
    "test_ComboBox_WithValidParameters_ShouldConstruct",
    "test_ComboBox_WithInvalidParameters_ShouldThrowException",
    "test_MappedComboBox_WithValidParameters_ShouldConstruct",
    "test_MappedComboBox_WithInvalidParameters_ShouldThrowException",
    "test_PushButton_WithValidParameters_ShouldConstruct",
    "test_PushButton_WithInvalidParameters_ShouldThrowException",
    "test_ParametersHandler_WithValidParametersShouldConstruct"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTestParametersENDCLASS_t {
    uint offsetsAndSizes[60];
    char stringdata0[15];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[8];
    char stringdata5[16];
    char stringdata6[66];
    char stringdata7[55];
    char stringdata8[46];
    char stringdata9[53];
    char stringdata10[46];
    char stringdata11[53];
    char stringdata12[51];
    char stringdata13[58];
    char stringdata14[49];
    char stringdata15[56];
    char stringdata16[55];
    char stringdata17[62];
    char stringdata18[71];
    char stringdata19[78];
    char stringdata20[48];
    char stringdata21[55];
    char stringdata22[50];
    char stringdata23[50];
    char stringdata24[57];
    char stringdata25[56];
    char stringdata26[63];
    char stringdata27[52];
    char stringdata28[59];
    char stringdata29[58];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTestParametersENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTestParametersENDCLASS_t qt_meta_stringdata_CLASSTestParametersENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "TestParameters"
        QT_MOC_LITERAL(15, 12),  // "initTestCase"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 4),  // "init"
        QT_MOC_LITERAL(34, 7),  // "cleanup"
        QT_MOC_LITERAL(42, 15),  // "cleanupTestCase"
        QT_MOC_LITERAL(58, 65),  // "test_ParameterType_eval_WithI..."
        QT_MOC_LITERAL(124, 54),  // "test_ParameterType_eval_WithV..."
        QT_MOC_LITERAL(179, 45),  // "test_Text_WithValidParameters..."
        QT_MOC_LITERAL(225, 52),  // "test_Text_WithInvalidParamete..."
        QT_MOC_LITERAL(278, 45),  // "test_File_WithValidParameters..."
        QT_MOC_LITERAL(324, 52),  // "test_File_WithInvalidParamete..."
        QT_MOC_LITERAL(377, 50),  // "test_Directory_WithValidParam..."
        QT_MOC_LITERAL(428, 57),  // "test_Directory_WithInvalidPar..."
        QT_MOC_LITERAL(486, 48),  // "test_SpinBox_WithValidParamet..."
        QT_MOC_LITERAL(535, 55),  // "test_SpinBox_WithInvalidParam..."
        QT_MOC_LITERAL(591, 54),  // "test_DoubleSpinBox_WithValidP..."
        QT_MOC_LITERAL(646, 61),  // "test_DoubleSpinBox_WithInvali..."
        QT_MOC_LITERAL(708, 70),  // "test_MappedAngleInRadiansToDe..."
        QT_MOC_LITERAL(779, 77),  // "test_MappedAngleInRadiansToDe..."
        QT_MOC_LITERAL(857, 47),  // "test_Slider_WithValidParamete..."
        QT_MOC_LITERAL(905, 54),  // "test_Slider_WithInvalidParame..."
        QT_MOC_LITERAL(960, 49),  // "test_CheckBox_WithValidParame..."
        QT_MOC_LITERAL(1010, 49),  // "test_ComboBox_WithValidParame..."
        QT_MOC_LITERAL(1060, 56),  // "test_ComboBox_WithInvalidPara..."
        QT_MOC_LITERAL(1117, 55),  // "test_MappedComboBox_WithValid..."
        QT_MOC_LITERAL(1173, 62),  // "test_MappedComboBox_WithInval..."
        QT_MOC_LITERAL(1236, 51),  // "test_PushButton_WithValidPara..."
        QT_MOC_LITERAL(1288, 58),  // "test_PushButton_WithInvalidPa..."
        QT_MOC_LITERAL(1347, 57)   // "test_ParametersHandler_WithVa..."
    },
    "TestParameters",
    "initTestCase",
    "",
    "init",
    "cleanup",
    "cleanupTestCase",
    "test_ParameterType_eval_WithInvalidParameters_ShouldReturnNullopt",
    "test_ParameterType_eval_WithValidParameters_ShouldWork",
    "test_Text_WithValidParameters_ShouldConstruct",
    "test_Text_WithInvalidParameters_ShouldThrowException",
    "test_File_WithValidParameters_ShouldConstruct",
    "test_File_WithInvalidParameters_ShouldThrowException",
    "test_Directory_WithValidParameters_ShouldConstruct",
    "test_Directory_WithInvalidParameters_ShouldThrowException",
    "test_SpinBox_WithValidParameters_ShouldConstruct",
    "test_SpinBox_WithInvalidParameters_ShouldThrowException",
    "test_DoubleSpinBox_WithValidParameters_ShouldConstruct",
    "test_DoubleSpinBox_WithInvalidParameters_ShouldThrowException",
    "test_MappedAngleInRadiansToDegrees_WithValidParameters_ShouldConstruct",
    "test_MappedAngleInRadiansToDegrees_WithInvalidParameters_ShouldThrowEx"
    "ception",
    "test_Slider_WithValidParameters_ShouldConstruct",
    "test_Slider_WithInvalidParameters_ShouldThrowException",
    "test_CheckBox_WithValidParameters_ShouldConstruct",
    "test_ComboBox_WithValidParameters_ShouldConstruct",
    "test_ComboBox_WithInvalidParameters_ShouldThrowException",
    "test_MappedComboBox_WithValidParameters_ShouldConstruct",
    "test_MappedComboBox_WithInvalidParameters_ShouldThrowException",
    "test_PushButton_WithValidParameters_ShouldConstruct",
    "test_PushButton_WithInvalidParameters_ShouldThrowException",
    "test_ParametersHandler_WithValidParametersShouldConstruct"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTestParametersENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  182,    2, 0x08,    1 /* Private */,
       3,    0,  183,    2, 0x08,    2 /* Private */,
       4,    0,  184,    2, 0x08,    3 /* Private */,
       5,    0,  185,    2, 0x08,    4 /* Private */,
       6,    0,  186,    2, 0x08,    5 /* Private */,
       7,    0,  187,    2, 0x08,    6 /* Private */,
       8,    0,  188,    2, 0x08,    7 /* Private */,
       9,    0,  189,    2, 0x08,    8 /* Private */,
      10,    0,  190,    2, 0x08,    9 /* Private */,
      11,    0,  191,    2, 0x08,   10 /* Private */,
      12,    0,  192,    2, 0x08,   11 /* Private */,
      13,    0,  193,    2, 0x08,   12 /* Private */,
      14,    0,  194,    2, 0x08,   13 /* Private */,
      15,    0,  195,    2, 0x08,   14 /* Private */,
      16,    0,  196,    2, 0x08,   15 /* Private */,
      17,    0,  197,    2, 0x08,   16 /* Private */,
      18,    0,  198,    2, 0x08,   17 /* Private */,
      19,    0,  199,    2, 0x08,   18 /* Private */,
      20,    0,  200,    2, 0x08,   19 /* Private */,
      21,    0,  201,    2, 0x08,   20 /* Private */,
      22,    0,  202,    2, 0x08,   21 /* Private */,
      23,    0,  203,    2, 0x08,   22 /* Private */,
      24,    0,  204,    2, 0x08,   23 /* Private */,
      25,    0,  205,    2, 0x08,   24 /* Private */,
      26,    0,  206,    2, 0x08,   25 /* Private */,
      27,    0,  207,    2, 0x08,   26 /* Private */,
      28,    0,  208,    2, 0x08,   27 /* Private */,
      29,    0,  209,    2, 0x08,   28 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TestParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTestParametersENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTestParametersENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTestParametersENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestParameters, std::true_type>,
        // method 'initTestCase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'init'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cleanup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cleanupTestCase'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_ParameterType_eval_WithInvalidParameters_ShouldReturnNullopt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_ParameterType_eval_WithValidParameters_ShouldWork'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_Text_WithValidParameters_ShouldConstruct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_Text_WithInvalidParameters_ShouldThrowException'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_File_WithValidParameters_ShouldConstruct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_File_WithInvalidParameters_ShouldThrowException'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_Directory_WithValidParameters_ShouldConstruct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_Directory_WithInvalidParameters_ShouldThrowException'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_SpinBox_WithValidParameters_ShouldConstruct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_SpinBox_WithInvalidParameters_ShouldThrowException'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_DoubleSpinBox_WithValidParameters_ShouldConstruct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_DoubleSpinBox_WithInvalidParameters_ShouldThrowException'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_MappedAngleInRadiansToDegrees_WithValidParameters_ShouldConstruct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_MappedAngleInRadiansToDegrees_WithInvalidParameters_ShouldThrowException'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_Slider_WithValidParameters_ShouldConstruct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_Slider_WithInvalidParameters_ShouldThrowException'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_CheckBox_WithValidParameters_ShouldConstruct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_ComboBox_WithValidParameters_ShouldConstruct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_ComboBox_WithInvalidParameters_ShouldThrowException'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_MappedComboBox_WithValidParameters_ShouldConstruct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_MappedComboBox_WithInvalidParameters_ShouldThrowException'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_PushButton_WithValidParameters_ShouldConstruct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_PushButton_WithInvalidParameters_ShouldThrowException'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'test_ParametersHandler_WithValidParametersShouldConstruct'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TestParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->init(); break;
        case 2: _t->cleanup(); break;
        case 3: _t->cleanupTestCase(); break;
        case 4: _t->test_ParameterType_eval_WithInvalidParameters_ShouldReturnNullopt(); break;
        case 5: _t->test_ParameterType_eval_WithValidParameters_ShouldWork(); break;
        case 6: _t->test_Text_WithValidParameters_ShouldConstruct(); break;
        case 7: _t->test_Text_WithInvalidParameters_ShouldThrowException(); break;
        case 8: _t->test_File_WithValidParameters_ShouldConstruct(); break;
        case 9: _t->test_File_WithInvalidParameters_ShouldThrowException(); break;
        case 10: _t->test_Directory_WithValidParameters_ShouldConstruct(); break;
        case 11: _t->test_Directory_WithInvalidParameters_ShouldThrowException(); break;
        case 12: _t->test_SpinBox_WithValidParameters_ShouldConstruct(); break;
        case 13: _t->test_SpinBox_WithInvalidParameters_ShouldThrowException(); break;
        case 14: _t->test_DoubleSpinBox_WithValidParameters_ShouldConstruct(); break;
        case 15: _t->test_DoubleSpinBox_WithInvalidParameters_ShouldThrowException(); break;
        case 16: _t->test_MappedAngleInRadiansToDegrees_WithValidParameters_ShouldConstruct(); break;
        case 17: _t->test_MappedAngleInRadiansToDegrees_WithInvalidParameters_ShouldThrowException(); break;
        case 18: _t->test_Slider_WithValidParameters_ShouldConstruct(); break;
        case 19: _t->test_Slider_WithInvalidParameters_ShouldThrowException(); break;
        case 20: _t->test_CheckBox_WithValidParameters_ShouldConstruct(); break;
        case 21: _t->test_ComboBox_WithValidParameters_ShouldConstruct(); break;
        case 22: _t->test_ComboBox_WithInvalidParameters_ShouldThrowException(); break;
        case 23: _t->test_MappedComboBox_WithValidParameters_ShouldConstruct(); break;
        case 24: _t->test_MappedComboBox_WithInvalidParameters_ShouldThrowException(); break;
        case 25: _t->test_PushButton_WithValidParameters_ShouldConstruct(); break;
        case 26: _t->test_PushButton_WithInvalidParameters_ShouldThrowException(); break;
        case 27: _t->test_ParametersHandler_WithValidParametersShouldConstruct(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTestParametersENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }
    return _id;
}
QT_WARNING_POP
