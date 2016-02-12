/****************************************************************************
** Meta object code from reading C++ file 'caled.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/caled.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caled.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caLed_t {
    QByteArrayData data[11];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caLed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caLed_t qt_meta_stringdata_caLed = {
    {
QT_MOC_LITERAL(0, 0, 5), // "caLed"
QT_MOC_LITERAL(1, 6, 7), // "channel"
QT_MOC_LITERAL(2, 14, 9), // "colorMode"
QT_MOC_LITERAL(3, 24, 7), // "colMode"
QT_MOC_LITERAL(4, 32, 10), // "falseColor"
QT_MOC_LITERAL(5, 43, 9), // "trueColor"
QT_MOC_LITERAL(6, 53, 14), // "undefinedColor"
QT_MOC_LITERAL(7, 68, 9), // "trueValue"
QT_MOC_LITERAL(8, 78, 10), // "falseValue"
QT_MOC_LITERAL(9, 89, 6), // "Static"
QT_MOC_LITERAL(10, 96, 5) // "Alarm"

    },
    "caLed\0channel\0colorMode\0colMode\0"
    "falseColor\0trueColor\0undefinedColor\0"
    "trueValue\0falseValue\0Static\0Alarm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caLed[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       1,   35, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, 0x80000000 | 3, 0x0009510b,
       4, QMetaType::QColor, 0x00095103,
       5, QMetaType::QColor, 0x00095103,
       6, QMetaType::QColor, 0x00095103,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095103,

 // enums: name, flags, count, data
       3, 0x0,    2,   39,

 // enum data: key, value
       9, uint(caLed::Static),
      10, uint(caLed::Alarm),

       0        // eod
};

void caLed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caLed *_t = static_cast<caLed *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPV(); break;
        case 1: *reinterpret_cast< colMode*>(_v) = _t->getColorMode(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getFalseColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getTrueColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getUndefinedColor(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getTrueValue(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getFalseValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caLed *_t = static_cast<caLed *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPV(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 2: _t->setFalseColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setTrueColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setUndefinedColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setTrueValue(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setFalseValue(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject caLed::staticMetaObject = {
    { &ELed::staticMetaObject, qt_meta_stringdata_caLed.data,
      qt_meta_data_caLed,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caLed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caLed::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caLed.stringdata0))
        return static_cast<void*>(const_cast< caLed*>(this));
    return ELed::qt_metacast(_clname);
}

int caLed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ELed::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_END_MOC_NAMESPACE
