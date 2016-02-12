/****************************************************************************
** Meta object code from reading C++ file 'cabytecontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cabytecontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cabytecontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caByteController_t {
    QByteArrayData data[26];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caByteController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caByteController_t qt_meta_stringdata_caByteController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "caByteController"
QT_MOC_LITERAL(1, 17, 7), // "clicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "bit"
QT_MOC_LITERAL(4, 30, 7), // "channel"
QT_MOC_LITERAL(5, 38, 9), // "direction"
QT_MOC_LITERAL(6, 48, 9), // "Direction"
QT_MOC_LITERAL(7, 58, 8), // "startBit"
QT_MOC_LITERAL(8, 67, 6), // "endBit"
QT_MOC_LITERAL(9, 74, 9), // "colorMode"
QT_MOC_LITERAL(10, 84, 7), // "colMode"
QT_MOC_LITERAL(11, 92, 10), // "foreground"
QT_MOC_LITERAL(12, 103, 10), // "background"
QT_MOC_LITERAL(13, 114, 9), // "textColor"
QT_MOC_LITERAL(14, 124, 13), // "fontScaleMode"
QT_MOC_LITERAL(15, 138, 22), // "EPushButton::ScaleMode"
QT_MOC_LITERAL(16, 161, 9), // "elevation"
QT_MOC_LITERAL(17, 171, 9), // "Elevation"
QT_MOC_LITERAL(18, 181, 6), // "on_top"
QT_MOC_LITERAL(19, 188, 5), // "as_is"
QT_MOC_LITERAL(20, 194, 6), // "Static"
QT_MOC_LITERAL(21, 201, 5), // "Alarm"
QT_MOC_LITERAL(22, 207, 2), // "Up"
QT_MOC_LITERAL(23, 210, 4), // "Down"
QT_MOC_LITERAL(24, 215, 4), // "Left"
QT_MOC_LITERAL(25, 220, 5) // "Right"

    },
    "caByteController\0clicked\0\0bit\0channel\0"
    "direction\0Direction\0startBit\0endBit\0"
    "colorMode\0colMode\0foreground\0background\0"
    "textColor\0fontScaleMode\0EPushButton::ScaleMode\0"
    "elevation\0Elevation\0on_top\0as_is\0"
    "Static\0Alarm\0Up\0Down\0Left\0Right"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caByteController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      10,   22, // properties
       3,   52, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00095003,
       5, 0x80000000 | 6, 0x0009510b,
       7, QMetaType::Int, 0x00095103,
       8, QMetaType::Int, 0x00095103,
       9, 0x80000000 | 10, 0x0009510b,
      11, QMetaType::QColor, 0x00095003,
      12, QMetaType::QColor, 0x00095003,
      13, QMetaType::QColor, 0x00095103,
      14, 0x80000000 | 15, 0x0009500b,
      16, 0x80000000 | 17, 0x0009510b,

 // enums: name, flags, count, data
      17, 0x0,    2,   64,
      10, 0x0,    2,   68,
       6, 0x0,    4,   72,

 // enum data: key, value
      18, uint(caByteController::on_top),
      19, uint(caByteController::as_is),
      20, uint(caByteController::Static),
      21, uint(caByteController::Alarm),
      22, uint(caByteController::Up),
      23, uint(caByteController::Down),
      24, uint(caByteController::Left),
      25, uint(caByteController::Right),

       0        // eod
};

void caByteController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caByteController *_t = static_cast<caByteController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (caByteController::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&caByteController::clicked)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        caByteController *_t = static_cast<caByteController *>(_o);
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
        case 7: *reinterpret_cast< QColor*>(_v) = _t->getTextColor(); break;
        case 8: *reinterpret_cast< EPushButton::ScaleMode*>(_v) = _t->fontScaleMode(); break;
        case 9: *reinterpret_cast< Elevation*>(_v) = _t->getElevation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caByteController *_t = static_cast<caByteController *>(_o);
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
        case 7: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 8: _t->setFontScaleModeL(*reinterpret_cast< EPushButton::ScaleMode*>(_v)); break;
        case 9: _t->setElevation(*reinterpret_cast< Elevation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_caByteController[] = {
        &EPushButton::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject caByteController::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_caByteController.data,
      qt_meta_data_caByteController,  qt_static_metacall, qt_meta_extradata_caByteController, Q_NULLPTR}
};


const QMetaObject *caByteController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caByteController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caByteController.stringdata0))
        return static_cast<void*>(const_cast< caByteController*>(this));
    return QWidget::qt_metacast(_clname);
}

int caByteController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void caByteController::clicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
