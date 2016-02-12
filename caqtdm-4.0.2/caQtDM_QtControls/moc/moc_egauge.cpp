/****************************************************************************
** Meta object code from reading C++ file 'egauge.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/egauge.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'egauge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EAbstractGauge_t {
    QByteArrayData data[32];
    char stringdata0[359];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EAbstractGauge_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EAbstractGauge_t qt_meta_stringdata_EAbstractGauge = {
    {
QT_MOC_LITERAL(0, 0, 14), // "EAbstractGauge"
QT_MOC_LITERAL(1, 15, 8), // "setValue"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "minValue"
QT_MOC_LITERAL(4, 34, 8), // "maxValue"
QT_MOC_LITERAL(5, 43, 13), // "displayLimits"
QT_MOC_LITERAL(6, 57, 11), // "displayLims"
QT_MOC_LITERAL(7, 69, 9), // "highError"
QT_MOC_LITERAL(8, 79, 8), // "lowError"
QT_MOC_LITERAL(9, 88, 10), // "lowWarning"
QT_MOC_LITERAL(10, 99, 11), // "highWarning"
QT_MOC_LITERAL(11, 111, 11), // "alarmLimits"
QT_MOC_LITERAL(12, 123, 9), // "alarmLims"
QT_MOC_LITERAL(13, 133, 5), // "value"
QT_MOC_LITERAL(14, 139, 9), // "reference"
QT_MOC_LITERAL(15, 149, 12), // "scaleEnabled"
QT_MOC_LITERAL(16, 162, 16), // "referenceEnabled"
QT_MOC_LITERAL(17, 179, 9), // "colorMode"
QT_MOC_LITERAL(18, 189, 9), // "ColorMode"
QT_MOC_LITERAL(19, 199, 13), // "externalScale"
QT_MOC_LITERAL(20, 213, 16), // "logarithmicScale"
QT_MOC_LITERAL(21, 230, 11), // "valueFormat"
QT_MOC_LITERAL(22, 242, 13), // "numMajorTicks"
QT_MOC_LITERAL(23, 256, 13), // "numMinorTicks"
QT_MOC_LITERAL(24, 270, 14), // "Channel_Limits"
QT_MOC_LITERAL(25, 285, 11), // "User_Limits"
QT_MOC_LITERAL(26, 297, 14), // "Channel_Alarms"
QT_MOC_LITERAL(27, 312, 11), // "User_Alarms"
QT_MOC_LITERAL(28, 324, 4), // "None"
QT_MOC_LITERAL(29, 329, 8), // "GRADIENT"
QT_MOC_LITERAL(30, 338, 8), // "COLORBAR"
QT_MOC_LITERAL(31, 347, 11) // "SINGLECOLOR"

    },
    "EAbstractGauge\0setValue\0\0minValue\0"
    "maxValue\0displayLimits\0displayLims\0"
    "highError\0lowError\0lowWarning\0highWarning\0"
    "alarmLimits\0alarmLims\0value\0reference\0"
    "scaleEnabled\0referenceEnabled\0colorMode\0"
    "ColorMode\0externalScale\0logarithmicScale\0"
    "valueFormat\0numMajorTicks\0numMinorTicks\0"
    "Channel_Limits\0User_Limits\0Channel_Alarms\0"
    "User_Alarms\0None\0GRADIENT\0COLORBAR\0"
    "SINGLECOLOR"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EAbstractGauge[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
      18,   30, // properties
       3,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       1,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // properties: name, type, flags
       3, QMetaType::Double, 0x00095103,
       4, QMetaType::Double, 0x00095103,
       5, 0x80000000 | 6, 0x0009510b,
       7, QMetaType::Double, 0x00095103,
       8, QMetaType::Double, 0x00095103,
       9, QMetaType::Double, 0x00095103,
      10, QMetaType::Double, 0x00095103,
      11, 0x80000000 | 12, 0x0009510b,
      13, QMetaType::Double, 0x00095103,
      14, QMetaType::Double, 0x00095103,
      15, QMetaType::Bool, 0x00095103,
      16, QMetaType::Bool, 0x00095103,
      17, 0x80000000 | 18, 0x0009510b,
      19, QMetaType::Bool, 0x00095103,
      20, QMetaType::Bool, 0x00095103,
      21, QMetaType::QString, 0x00095103,
      22, QMetaType::Int, 0x00095103,
      23, QMetaType::Int, 0x00095103,

 // enums: name, flags, count, data
       6, 0x0,    2,   96,
      12, 0x0,    3,  100,
      18, 0x0,    3,  106,

 // enum data: key, value
      24, uint(EAbstractGauge::Channel_Limits),
      25, uint(EAbstractGauge::User_Limits),
      26, uint(EAbstractGauge::Channel_Alarms),
      27, uint(EAbstractGauge::User_Alarms),
      28, uint(EAbstractGauge::None),
      29, uint(EAbstractGauge::GRADIENT),
      30, uint(EAbstractGauge::COLORBAR),
      31, uint(EAbstractGauge::SINGLECOLOR),

       0        // eod
};

void EAbstractGauge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EAbstractGauge *_t = static_cast<EAbstractGauge *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        EAbstractGauge *_t = static_cast<EAbstractGauge *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->minValue(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->maxValue(); break;
        case 2: *reinterpret_cast< displayLims*>(_v) = _t->getDisplayLimits(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->highError(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->lowError(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->lowWarning(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->highWarning(); break;
        case 7: *reinterpret_cast< alarmLims*>(_v) = _t->getAlarmLimits(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->value(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->reference(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isScaleEnabled(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isReferenceEnabled(); break;
        case 12: *reinterpret_cast< ColorMode*>(_v) = _t->colorMode(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->externalScale(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->logarithmicScale(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->valueFormat(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->numMajorTicks(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->numMinorTicks(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        EAbstractGauge *_t = static_cast<EAbstractGauge *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinValue(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setMaxValue(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setDisplayLimits(*reinterpret_cast< displayLims*>(_v)); break;
        case 3: _t->setHighError(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setLowError(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setLowWarning(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setHighWarning(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setAlarmLimits(*reinterpret_cast< alarmLims*>(_v)); break;
        case 8: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setReference(*reinterpret_cast< double*>(_v)); break;
        case 10: _t->setScaleEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setReferenceEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setColorMode(*reinterpret_cast< ColorMode*>(_v)); break;
        case 13: _t->setExternalScale(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setLogarithmicScale(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setValueFormat(*reinterpret_cast< QString*>(_v)); break;
        case 16: _t->setNumMajorTicks(*reinterpret_cast< int*>(_v)); break;
        case 17: _t->setNumMinorTicks(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject EAbstractGauge::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EAbstractGauge.data,
      qt_meta_data_EAbstractGauge,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EAbstractGauge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EAbstractGauge::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EAbstractGauge.stringdata0))
        return static_cast<void*>(const_cast< EAbstractGauge*>(this));
    return QWidget::qt_metacast(_clname);
}

int EAbstractGauge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 18;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 18;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
