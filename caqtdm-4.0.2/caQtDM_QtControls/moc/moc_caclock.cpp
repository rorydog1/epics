/****************************************************************************
** Meta object code from reading C++ file 'caclock.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/caclock.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caclock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caClock_t {
    QByteArrayData data[23];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caClock_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caClock_t qt_meta_stringdata_caClock = {
    {
QT_MOC_LITERAL(0, 0, 7), // "caClock"
QT_MOC_LITERAL(1, 8, 10), // "updateTime"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "runClock"
QT_MOC_LITERAL(4, 29, 3), // "run"
QT_MOC_LITERAL(5, 33, 12), // "setClockTime"
QT_MOC_LITERAL(6, 46, 13), // "myCurrentTime"
QT_MOC_LITERAL(7, 60, 7), // "channel"
QT_MOC_LITERAL(8, 68, 8), // "timeType"
QT_MOC_LITERAL(9, 77, 8), // "TimeType"
QT_MOC_LITERAL(10, 86, 10), // "updateRate"
QT_MOC_LITERAL(11, 97, 10), // "UpdateRate"
QT_MOC_LITERAL(12, 108, 9), // "baseColor"
QT_MOC_LITERAL(13, 118, 17), // "scaleDefaultColor"
QT_MOC_LITERAL(14, 136, 10), // "scaleColor"
QT_MOC_LITERAL(15, 147, 9), // "colorMode"
QT_MOC_LITERAL(16, 157, 7), // "colMode"
QT_MOC_LITERAL(17, 165, 6), // "Normal"
QT_MOC_LITERAL(18, 172, 4), // "Fast"
QT_MOC_LITERAL(19, 177, 12), // "InternalTime"
QT_MOC_LITERAL(20, 190, 11), // "ReceiveTime"
QT_MOC_LITERAL(21, 202, 6), // "Static"
QT_MOC_LITERAL(22, 209, 5) // "Alarm"

    },
    "caClock\0updateTime\0\0runClock\0run\0"
    "setClockTime\0myCurrentTime\0channel\0"
    "timeType\0TimeType\0updateRate\0UpdateRate\0"
    "baseColor\0scaleDefaultColor\0scaleColor\0"
    "colorMode\0colMode\0Normal\0Fast\0"
    "InternalTime\0ReceiveTime\0Static\0Alarm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caClock[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       7,   44, // properties
       3,   65, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   37,    2, 0x0a /* Public */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QTime,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QTime,    2,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00095003,
       8, 0x80000000 | 9, 0x0009510b,
      10, 0x80000000 | 11, 0x0009510b,
      12, QMetaType::QColor, 0x00095103,
      13, QMetaType::Bool, 0x00095103,
      14, QMetaType::QColor, 0x00095103,
      15, 0x80000000 | 16, 0x0009510b,

 // enums: name, flags, count, data
      11, 0x0,    2,   77,
       9, 0x0,    2,   81,
      16, 0x0,    2,   85,

 // enum data: key, value
      17, uint(caClock::Normal),
      18, uint(caClock::Fast),
      19, uint(caClock::InternalTime),
      20, uint(caClock::ReceiveTime),
      21, uint(caClock::Static),
      22, uint(caClock::Alarm),

       0        // eod
};

void caClock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caClock *_t = static_cast<caClock *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTime((*reinterpret_cast< QTime(*)>(_a[1]))); break;
        case 1: _t->runClock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setClockTime((*reinterpret_cast< QTime(*)>(_a[1]))); break;
        case 3: _t->myCurrentTime(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (caClock::*_t)(QTime );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&caClock::updateTime)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        caClock *_t = static_cast<caClock *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPV(); break;
        case 1: *reinterpret_cast< TimeType*>(_v) = _t->getTimeType(); break;
        case 2: *reinterpret_cast< UpdateRate*>(_v) = _t->getUpdateRate(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBaseColor(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getScaleDefaultColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getScaleColor(); break;
        case 6: *reinterpret_cast< colMode*>(_v) = _t->getColorMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caClock *_t = static_cast<caClock *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPV(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTimeType(*reinterpret_cast< TimeType*>(_v)); break;
        case 2: _t->setUpdateRate(*reinterpret_cast< UpdateRate*>(_v)); break;
        case 3: _t->setBaseColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setScaleDefaultColor(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setScaleColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject caClock::staticMetaObject = {
    { &QwtAnalogClock::staticMetaObject, qt_meta_stringdata_caClock.data,
      qt_meta_data_caClock,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caClock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caClock::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caClock.stringdata0))
        return static_cast<void*>(const_cast< caClock*>(this));
    return QwtAnalogClock::qt_metacast(_clname);
}

int caClock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtAnalogClock::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void caClock::updateTime(QTime _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
