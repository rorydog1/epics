/****************************************************************************
** Meta object code from reading C++ file 'cameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caMeter_t {
    QByteArrayData data[30];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caMeter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caMeter_t qt_meta_stringdata_caMeter = {
    {
QT_MOC_LITERAL(0, 0, 7), // "caMeter"
QT_MOC_LITERAL(1, 8, 7), // "channel"
QT_MOC_LITERAL(2, 16, 8), // "maxValue"
QT_MOC_LITERAL(3, 25, 8), // "minValue"
QT_MOC_LITERAL(4, 34, 10), // "limitsMode"
QT_MOC_LITERAL(5, 45, 10), // "SourceMode"
QT_MOC_LITERAL(6, 56, 9), // "baseColor"
QT_MOC_LITERAL(7, 66, 17), // "scaleDefaultColor"
QT_MOC_LITERAL(8, 84, 10), // "scaleColor"
QT_MOC_LITERAL(9, 95, 9), // "colorMode"
QT_MOC_LITERAL(10, 105, 7), // "colMode"
QT_MOC_LITERAL(11, 113, 12), // "scaleEnabled"
QT_MOC_LITERAL(12, 126, 14), // "valueDisplayed"
QT_MOC_LITERAL(13, 141, 9), // "precision"
QT_MOC_LITERAL(14, 151, 13), // "precisionMode"
QT_MOC_LITERAL(15, 165, 10), // "formatType"
QT_MOC_LITERAL(16, 176, 10), // "FormatType"
QT_MOC_LITERAL(17, 187, 12), // "unitsEnabled"
QT_MOC_LITERAL(18, 200, 6), // "Static"
QT_MOC_LITERAL(19, 207, 5), // "Alarm"
QT_MOC_LITERAL(20, 213, 11), // "displayLims"
QT_MOC_LITERAL(21, 225, 14), // "Channel_Limits"
QT_MOC_LITERAL(22, 240, 11), // "User_Limits"
QT_MOC_LITERAL(23, 252, 7), // "Channel"
QT_MOC_LITERAL(24, 260, 4), // "User"
QT_MOC_LITERAL(25, 265, 7), // "decimal"
QT_MOC_LITERAL(26, 273, 11), // "exponential"
QT_MOC_LITERAL(27, 285, 13), // "engr_notation"
QT_MOC_LITERAL(28, 299, 7), // "compact"
QT_MOC_LITERAL(29, 307, 9) // "truncated"

    },
    "caMeter\0channel\0maxValue\0minValue\0"
    "limitsMode\0SourceMode\0baseColor\0"
    "scaleDefaultColor\0scaleColor\0colorMode\0"
    "colMode\0scaleEnabled\0valueDisplayed\0"
    "precision\0precisionMode\0formatType\0"
    "FormatType\0unitsEnabled\0Static\0Alarm\0"
    "displayLims\0Channel_Limits\0User_Limits\0"
    "Channel\0User\0decimal\0exponential\0"
    "engr_notation\0compact\0truncated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caMeter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      14,   14, // properties
       4,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::Double, 0x00095103,
       3, QMetaType::Double, 0x00095103,
       4, 0x80000000 | 5, 0x0009510b,
       6, QMetaType::QColor, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::QColor, 0x00095103,
       9, 0x80000000 | 10, 0x0009510b,
      11, QMetaType::Bool, 0x00095103,
      12, QMetaType::Bool, 0x00095103,
      13, QMetaType::Int, 0x00095103,
      14, 0x80000000 | 5, 0x0009510b,
      15, 0x80000000 | 16, 0x0009510b,
      17, QMetaType::Bool, 0x00095103,

 // enums: name, flags, count, data
      10, 0x0,    2,   72,
      20, 0x0,    2,   76,
       5, 0x0,    2,   80,
      16, 0x0,    5,   84,

 // enum data: key, value
      18, uint(caMeter::Static),
      19, uint(caMeter::Alarm),
      21, uint(caMeter::Channel_Limits),
      22, uint(caMeter::User_Limits),
      23, uint(caMeter::Channel),
      24, uint(caMeter::User),
      25, uint(caMeter::decimal),
      26, uint(caMeter::exponential),
      27, uint(caMeter::engr_notation),
      28, uint(caMeter::compact),
      29, uint(caMeter::truncated),

       0        // eod
};

void caMeter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caMeter *_t = static_cast<caMeter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPV(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getMaxValue(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getMinValue(); break;
        case 3: *reinterpret_cast< SourceMode*>(_v) = _t->getLimitsMode(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getBaseColor(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getScaleDefaultColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->getScaleColor(); break;
        case 7: *reinterpret_cast< colMode*>(_v) = _t->getColorMode(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isScaleEnabled(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isValueDisplayed(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->getPrecision(); break;
        case 11: *reinterpret_cast< SourceMode*>(_v) = _t->getPrecisionMode(); break;
        case 12: *reinterpret_cast< FormatType*>(_v) = _t->getFormatType(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->getUnitsEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caMeter *_t = static_cast<caMeter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPV(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setMaxValue(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setMinValue(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setLimitsMode(*reinterpret_cast< SourceMode*>(_v)); break;
        case 4: _t->setBaseColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setScaleDefaultColor(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setScaleColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 8: _t->setScaleEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setValueDisplayed(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setPrecisionMode(*reinterpret_cast< SourceMode*>(_v)); break;
        case 12: _t->setFormatType(*reinterpret_cast< FormatType*>(_v)); break;
        case 13: _t->setUnitsEnabled(*reinterpret_cast< bool*>(_v)); break;
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

const QMetaObject caMeter::staticMetaObject = {
    { &QwtDial::staticMetaObject, qt_meta_stringdata_caMeter.data,
      qt_meta_data_caMeter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caMeter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caMeter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caMeter.stringdata0))
        return static_cast<void*>(const_cast< caMeter*>(this));
    return QwtDial::qt_metacast(_clname);
}

int caMeter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtDial::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
