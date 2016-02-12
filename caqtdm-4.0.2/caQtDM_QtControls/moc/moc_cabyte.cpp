/****************************************************************************
** Meta object code from reading C++ file 'cabyte.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cabyte.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cabyte.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caByte_t {
    QByteArrayData data[16];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caByte_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caByte_t qt_meta_stringdata_caByte = {
    {
QT_MOC_LITERAL(0, 0, 6), // "caByte"
QT_MOC_LITERAL(1, 7, 7), // "channel"
QT_MOC_LITERAL(2, 15, 9), // "direction"
QT_MOC_LITERAL(3, 25, 9), // "Direction"
QT_MOC_LITERAL(4, 35, 8), // "startBit"
QT_MOC_LITERAL(5, 44, 6), // "endBit"
QT_MOC_LITERAL(6, 51, 9), // "colorMode"
QT_MOC_LITERAL(7, 61, 7), // "colMode"
QT_MOC_LITERAL(8, 69, 10), // "foreground"
QT_MOC_LITERAL(9, 80, 10), // "background"
QT_MOC_LITERAL(10, 91, 6), // "Static"
QT_MOC_LITERAL(11, 98, 5), // "Alarm"
QT_MOC_LITERAL(12, 104, 2), // "Up"
QT_MOC_LITERAL(13, 107, 4), // "Down"
QT_MOC_LITERAL(14, 112, 4), // "Left"
QT_MOC_LITERAL(15, 117, 5) // "Right"

    },
    "caByte\0channel\0direction\0Direction\0"
    "startBit\0endBit\0colorMode\0colMode\0"
    "foreground\0background\0Static\0Alarm\0"
    "Up\0Down\0Left\0Right"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caByte[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       2,   35, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, 0x80000000 | 3, 0x0009510b,
       4, QMetaType::Int, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       6, 0x80000000 | 7, 0x0009510b,
       8, QMetaType::QColor, 0x00095003,
       9, QMetaType::QColor, 0x00095003,

 // enums: name, flags, count, data
       7, 0x0,    2,   43,
       3, 0x0,    4,   47,

 // enum data: key, value
      10, uint(caByte::Static),
      11, uint(caByte::Alarm),
      12, uint(caByte::Up),
      13, uint(caByte::Down),
      14, uint(caByte::Left),
      15, uint(caByte::Right),

       0        // eod
};

void caByte::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caByte *_t = static_cast<caByte *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPV(); break;
        case 1: *reinterpret_cast< Direction*>(_v) = _t->getDirection(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getStartBit(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getEndBit(); break;
        case 4: *reinterpret_cast< colMode*>(_v) = _t->getColorMode(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getTrueColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->getFalseColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caByte *_t = static_cast<caByte *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPV(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDirection(*reinterpret_cast< Direction*>(_v)); break;
        case 2: _t->setStartBit(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setEndBit(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 5: _t->setTrueColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setFalseColor(*reinterpret_cast< QColor*>(_v)); break;
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

const QMetaObject caByte::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_caByte.data,
      qt_meta_data_caByte,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caByte::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caByte::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caByte.stringdata0))
        return static_cast<void*>(const_cast< caByte*>(this));
    return QWidget::qt_metacast(_clname);
}

int caByte::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
