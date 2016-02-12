/****************************************************************************
** Meta object code from reading C++ file 'caslider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/caslider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caSlider_t {
    QByteArrayData data[32];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caSlider_t qt_meta_stringdata_caSlider = {
    {
QT_MOC_LITERAL(0, 0, 8), // "caSlider"
QT_MOC_LITERAL(1, 9, 14), // "setSliderValue"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "value"
QT_MOC_LITERAL(4, 31, 8), // "repeater"
QT_MOC_LITERAL(5, 40, 11), // "orientation"
QT_MOC_LITERAL(6, 52, 15), // "Qt::Orientation"
QT_MOC_LITERAL(7, 68, 7), // "channel"
QT_MOC_LITERAL(8, 76, 9), // "direction"
QT_MOC_LITERAL(9, 86, 9), // "Direction"
QT_MOC_LITERAL(10, 96, 10), // "foreground"
QT_MOC_LITERAL(11, 107, 10), // "background"
QT_MOC_LITERAL(12, 118, 9), // "colorMode"
QT_MOC_LITERAL(13, 128, 7), // "colMode"
QT_MOC_LITERAL(14, 136, 10), // "limitsMode"
QT_MOC_LITERAL(15, 147, 10), // "SourceMode"
QT_MOC_LITERAL(16, 158, 8), // "maxValue"
QT_MOC_LITERAL(17, 167, 8), // "minValue"
QT_MOC_LITERAL(18, 176, 14), // "incrementValue"
QT_MOC_LITERAL(19, 191, 9), // "elevation"
QT_MOC_LITERAL(20, 201, 9), // "Elevation"
QT_MOC_LITERAL(21, 211, 6), // "on_top"
QT_MOC_LITERAL(22, 218, 5), // "as_is"
QT_MOC_LITERAL(23, 224, 2), // "Up"
QT_MOC_LITERAL(24, 227, 4), // "Down"
QT_MOC_LITERAL(25, 232, 4), // "Left"
QT_MOC_LITERAL(26, 237, 5), // "Right"
QT_MOC_LITERAL(27, 243, 7), // "Default"
QT_MOC_LITERAL(28, 251, 6), // "Static"
QT_MOC_LITERAL(29, 258, 5), // "Alarm"
QT_MOC_LITERAL(30, 264, 7), // "Channel"
QT_MOC_LITERAL(31, 272, 4) // "User"

    },
    "caSlider\0setSliderValue\0\0value\0repeater\0"
    "orientation\0Qt::Orientation\0channel\0"
    "direction\0Direction\0foreground\0"
    "background\0colorMode\0colMode\0limitsMode\0"
    "SourceMode\0maxValue\0minValue\0"
    "incrementValue\0elevation\0Elevation\0"
    "on_top\0as_is\0Up\0Down\0Left\0Right\0Default\0"
    "Static\0Alarm\0Channel\0User"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caSlider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
      12,   28, // properties
       4,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0009410b,
       7, QMetaType::QString, 0x00095003,
       8, 0x80000000 | 9, 0x0009510b,
      10, QMetaType::QColor, 0x00095103,
      11, QMetaType::QColor, 0x00095103,
      12, 0x80000000 | 13, 0x0009510b,
      14, 0x80000000 | 15, 0x0009510b,
      16, QMetaType::Double, 0x00095103,
      17, QMetaType::Double, 0x00095103,
      18, QMetaType::Double, 0x00095103,
       3, QMetaType::Double, 0x00095003,
      19, 0x80000000 | 20, 0x0009510b,

 // enums: name, flags, count, data
      20, 0x0,    2,   80,
       9, 0x0,    4,   84,
      13, 0x0,    3,   92,
      15, 0x0,    2,   98,

 // enum data: key, value
      21, uint(caSlider::on_top),
      22, uint(caSlider::as_is),
      23, uint(caSlider::Up),
      24, uint(caSlider::Down),
      25, uint(caSlider::Left),
      26, uint(caSlider::Right),
      27, uint(caSlider::Default),
      28, uint(caSlider::Static),
      29, uint(caSlider::Alarm),
      30, uint(caSlider::Channel),
      31, uint(caSlider::User),

       0        // eod
};

void caSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caSlider *_t = static_cast<caSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSliderValue((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 1: _t->repeater(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        caSlider *_t = static_cast<caSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getPV(); break;
        case 2: *reinterpret_cast< Direction*>(_v) = _t->getDirection(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getForeground(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getBackground(); break;
        case 5: *reinterpret_cast< colMode*>(_v) = _t->getColorMode(); break;
        case 6: *reinterpret_cast< SourceMode*>(_v) = _t->getLimitsMode(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->getMaxValue(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->getMinValue(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->getIncrementValue(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->getSliderValue(); break;
        case 11: *reinterpret_cast< Elevation*>(_v) = _t->getElevation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caSlider *_t = static_cast<caSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: _t->setPV(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDirection(*reinterpret_cast< Direction*>(_v)); break;
        case 3: _t->setForeground(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 6: _t->setLimitsMode(*reinterpret_cast< SourceMode*>(_v)); break;
        case 7: _t->setMaxValue(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setMinValue(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setIncrementValue(*reinterpret_cast< double*>(_v)); break;
        case 10: _t->setSliderValue(*reinterpret_cast< double*>(_v)); break;
        case 11: _t->setElevation(*reinterpret_cast< Elevation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject caSlider::staticMetaObject = {
    { &QwtSlider::staticMetaObject, qt_meta_stringdata_caSlider.data,
      qt_meta_data_caSlider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caSlider.stringdata0))
        return static_cast<void*>(const_cast< caSlider*>(this));
    return QwtSlider::qt_metacast(_clname);
}

int caSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
