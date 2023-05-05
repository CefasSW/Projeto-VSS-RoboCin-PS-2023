/****************************************************************************
** Meta object code from reading C++ file 'GrSimComm.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Modules/Acting/GrSimComm/GrSimComm.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GrSimComm.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGrSimCommENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGrSimCommENDCLASS = QtMocHelpers::stringData(
    "GrSimComm",
    "sendReplacementDatagram",
    "",
    "datagram",
    "receiveRelativeMousePos",
    "Point",
    "position",
    "receiveKeyPress",
    "Qt::Key",
    "key",
    "receiveKeyRelease",
    "receiveCommand",
    "Command",
    "command",
    "receiveFrame",
    "Frame",
    "frame"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGrSimCommENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[10];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[24];
    char stringdata5[6];
    char stringdata6[9];
    char stringdata7[16];
    char stringdata8[8];
    char stringdata9[4];
    char stringdata10[18];
    char stringdata11[15];
    char stringdata12[8];
    char stringdata13[8];
    char stringdata14[13];
    char stringdata15[6];
    char stringdata16[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGrSimCommENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGrSimCommENDCLASS_t qt_meta_stringdata_CLASSGrSimCommENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "GrSimComm"
        QT_MOC_LITERAL(10, 23),  // "sendReplacementDatagram"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 8),  // "datagram"
        QT_MOC_LITERAL(44, 23),  // "receiveRelativeMousePos"
        QT_MOC_LITERAL(68, 5),  // "Point"
        QT_MOC_LITERAL(74, 8),  // "position"
        QT_MOC_LITERAL(83, 15),  // "receiveKeyPress"
        QT_MOC_LITERAL(99, 7),  // "Qt::Key"
        QT_MOC_LITERAL(107, 3),  // "key"
        QT_MOC_LITERAL(111, 17),  // "receiveKeyRelease"
        QT_MOC_LITERAL(129, 14),  // "receiveCommand"
        QT_MOC_LITERAL(144, 7),  // "Command"
        QT_MOC_LITERAL(152, 7),  // "command"
        QT_MOC_LITERAL(160, 12),  // "receiveFrame"
        QT_MOC_LITERAL(173, 5),  // "Frame"
        QT_MOC_LITERAL(179, 5)   // "frame"
    },
    "GrSimComm",
    "sendReplacementDatagram",
    "",
    "datagram",
    "receiveRelativeMousePos",
    "Point",
    "position",
    "receiveKeyPress",
    "Qt::Key",
    "key",
    "receiveKeyRelease",
    "receiveCommand",
    "Command",
    "command",
    "receiveFrame",
    "Frame",
    "frame"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGrSimCommENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   53,    2, 0x08,    3 /* Private */,
       7,    1,   56,    2, 0x08,    5 /* Private */,
      10,    1,   59,    2, 0x08,    7 /* Private */,
      11,    1,   62,    2, 0x08,    9 /* Private */,
      14,    1,   65,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject GrSimComm::staticMetaObject = { {
    QMetaObject::SuperData::link<Acting::staticMetaObject>(),
    qt_meta_stringdata_CLASSGrSimCommENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGrSimCommENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGrSimCommENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GrSimComm, std::true_type>,
        // method 'sendReplacementDatagram'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'receiveRelativeMousePos'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Point &, std::false_type>,
        // method 'receiveKeyPress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::Key, std::false_type>,
        // method 'receiveKeyRelease'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::Key, std::false_type>,
        // method 'receiveCommand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Command &, std::false_type>,
        // method 'receiveFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Frame &, std::false_type>
    >,
    nullptr
} };

void GrSimComm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GrSimComm *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendReplacementDatagram((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->receiveRelativeMousePos((*reinterpret_cast< std::add_pointer_t<Point>>(_a[1]))); break;
        case 2: _t->receiveKeyPress((*reinterpret_cast< std::add_pointer_t<Qt::Key>>(_a[1]))); break;
        case 3: _t->receiveKeyRelease((*reinterpret_cast< std::add_pointer_t<Qt::Key>>(_a[1]))); break;
        case 4: _t->receiveCommand((*reinterpret_cast< std::add_pointer_t<Command>>(_a[1]))); break;
        case 5: _t->receiveFrame((*reinterpret_cast< std::add_pointer_t<Frame>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GrSimComm::*)(const QByteArray & );
            if (_t _q_method = &GrSimComm::sendReplacementDatagram; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *GrSimComm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GrSimComm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGrSimCommENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Acting::qt_metacast(_clname);
}

int GrSimComm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Acting::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void GrSimComm::sendReplacementDatagram(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
