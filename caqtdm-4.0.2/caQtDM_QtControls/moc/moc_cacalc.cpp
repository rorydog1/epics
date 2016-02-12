/****************************************************************************
** Meta object code from reading C++ file 'cacalc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cacalc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cacalc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caCalc_t {
    QByteArrayData data[18];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caCalc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caCalc_t qt_meta_stringdata_caCalc = {
    {
QT_MOC_LITERAL(0, 0, 6), // "caCalc"
QT_MOC_LITERAL(1, 7, 10), // "emitSignal"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "setValue"
QT_MOC_LITERAL(4, 28, 5), // "value"
QT_MOC_LITERAL(5, 34, 8), // "variable"
QT_MOC_LITERAL(6, 43, 4), // "calc"
QT_MOC_LITERAL(7, 48, 7), // "channel"
QT_MOC_LITERAL(8, 56, 8), // "channelB"
QT_MOC_LITERAL(9, 65, 8), // "channelC"
QT_MOC_LITERAL(10, 74, 8), // "channelD"
QT_MOC_LITERAL(11, 83, 12), // "initialValue"
QT_MOC_LITERAL(12, 96, 9), // "precision"
QT_MOC_LITERAL(13, 106, 11), // "eventSignal"
QT_MOC_LITERAL(14, 118, 11), // "eventsignal"
QT_MOC_LITERAL(15, 130, 5), // "Never"
QT_MOC_LITERAL(16, 136, 13), // "onFirstChange"
QT_MOC_LITERAL(17, 150, 11) // "onAnyChange"

    },
    "caCalc\0emitSignal\0\0setValue\0value\0"
    "variable\0calc\0channel\0channelB\0channelC\0"
    "channelD\0initialValue\0precision\0"
    "eventSignal\0eventsignal\0Never\0"
    "onFirstChange\0onAnyChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caCalc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       9,   38, // properties
       1,   65, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       1,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    4,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095003,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::Double, 0x00095103,
      12, QMetaType::Int, 0x00095103,
      13, 0x80000000 | 14, 0x0009510b,

 // enums: name, flags, count, data
      14, 0x0,    3,   69,

 // enum data: key, value
      15, uint(caCalc::Never),
      16, uint(caCalc::onFirstChange),
      17, uint(caCalc::onAnyChange),

       0        // eod
};

void caCalc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caCalc *_t = static_cast<caCalc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->emitSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->emitSignal((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (caCalc::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&caCalc::emitSignal)) {
                *result = 0;
            }
        }
        {
            typedef void (caCalc::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&caCalc::emitSignal)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        caCalc *_t = static_cast<caCalc *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getVariable(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getCalc(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getChannelA(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getChannelB(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getChannelC(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getChannelD(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->getInitialValue(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getPrecision(); break;
        case 8: *reinterpret_cast< eventsignal*>(_v) = _t->getEventSignal(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caCalc *_t = static_cast<caCalc *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVariable(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCalc(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setChannelA(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setChannelB(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setChannelC(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setChannelD(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setInitialValue(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setEventSignal(*reinterpret_cast< eventsignal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject caCalc::staticMetaObject = {
    { &ESimpleLabel::staticMetaObject, qt_meta_stringdata_caCalc.data,
      qt_meta_data_caCalc,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caCalc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caCalc::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caCalc.stringdata0))
        return static_cast<void*>(const_cast< caCalc*>(this));
    return ESimpleLabel::qt_metacast(_clname);
}

int caCalc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ESimpleLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void caCalc::emitSignal(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void caCalc::emitSignal(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
