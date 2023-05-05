/****************************************************************************
** Meta object code from reading C++ file 'Vision.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AbstractModules/Vision/Vision.h"
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
#error "The header file 'Vision.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVisionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSVisionENDCLASS = QtMocHelpers::stringData(
    "Vision",
    "sendIsYellow",
    "",
    "isYellow",
    "sendField",
    "Field",
    "field",
    "sendFrame",
    "Frame",
    "frame"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVisionENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[7];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[10];
    char stringdata5[6];
    char stringdata6[6];
    char stringdata7[10];
    char stringdata8[6];
    char stringdata9[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVisionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVisionENDCLASS_t qt_meta_stringdata_CLASSVisionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Vision"
        QT_MOC_LITERAL(7, 12),  // "sendIsYellow"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 8),  // "isYellow"
        QT_MOC_LITERAL(30, 9),  // "sendField"
        QT_MOC_LITERAL(40, 5),  // "Field"
        QT_MOC_LITERAL(46, 5),  // "field"
        QT_MOC_LITERAL(52, 9),  // "sendFrame"
        QT_MOC_LITERAL(62, 5),  // "Frame"
        QT_MOC_LITERAL(68, 5)   // "frame"
    },
    "Vision",
    "sendIsYellow",
    "",
    "isYellow",
    "sendField",
    "Field",
    "field",
    "sendFrame",
    "Frame",
    "frame"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVisionENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    1 /* Public */,
       4,    1,   35,    2, 0x06,    3 /* Public */,
       7,    1,   38,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject Vision::staticMetaObject = { {
    QMetaObject::SuperData::link<ModuleBase::staticMetaObject>(),
    qt_meta_stringdata_CLASSVisionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVisionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVisionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Vision, std::true_type>,
        // method 'sendIsYellow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendField'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Field &, std::false_type>,
        // method 'sendFrame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Frame &, std::false_type>
    >,
    nullptr
} };

void Vision::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Vision *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendIsYellow((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->sendField((*reinterpret_cast< std::add_pointer_t<Field>>(_a[1]))); break;
        case 2: _t->sendFrame((*reinterpret_cast< std::add_pointer_t<Frame>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Vision::*)(bool );
            if (_t _q_method = &Vision::sendIsYellow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Vision::*)(const Field & );
            if (_t _q_method = &Vision::sendField; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Vision::*)(const Frame & );
            if (_t _q_method = &Vision::sendFrame; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *Vision::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Vision::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVisionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ModuleBase::qt_metacast(_clname);
}

int Vision::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModuleBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Vision::sendIsYellow(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Vision::sendField(const Field & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Vision::sendFrame(const Frame & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
