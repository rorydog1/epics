/****************************************************************************
** Meta object code from reading C++ file 'cameter.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cameter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_caMeter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      14,   14, // properties
       4,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      16,    8, 0x0a095003,
      31,   24, 0x06095103,
      40,   24, 0x06095103,
      60,   49, 0x0009510b,
      78,   71, 0x43095103,
      93,   88, 0x01095103,
     111,   71, 0x43095103,
     130,  122, 0x0009510b,
     140,   88, 0x01095103,
     153,   88, 0x01095103,
     172,  168, 0x02095103,
     182,   49, 0x0009510b,
     207,  196, 0x0009510b,
     218,   88, 0x01095103,

 // enums: name, flags, count, data
     122, 0x0,    2,   72,
     231, 0x0,    2,   76,
      49, 0x0,    2,   80,
     196, 0x0,    5,   84,

 // enum data: key, value
     243, uint(caMeter::Static),
     250, uint(caMeter::Alarm),
     256, uint(caMeter::Channel_Limits),
     271, uint(caMeter::User_Limits),
     283, uint(caMeter::Channel),
     291, uint(caMeter::User),
     296, uint(caMeter::decimal),
     304, uint(caMeter::exponential),
     316, uint(caMeter::engr_notation),
     330, uint(caMeter::compact),
     338, uint(caMeter::truncated),

       0        // eod
};

static const char qt_meta_stringdata_caMeter[] = {
    "caMeter\0QString\0channel\0double\0maxValue\0"
    "minValue\0SourceMode\0limitsMode\0QColor\0"
    "baseColor\0bool\0scaleDefaultColor\0"
    "scaleColor\0colMode\0colorMode\0scaleEnabled\0"
    "valueDisplayed\0int\0precision\0precisionMode\0"
    "FormatType\0formatType\0unitsEnabled\0"
    "displayLims\0Static\0Alarm\0Channel_Limits\0"
    "User_Limits\0Channel\0User\0decimal\0"
    "exponential\0engr_notation\0compact\0"
    "truncated\0"
};

void caMeter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData caMeter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject caMeter::staticMetaObject = {
    { &QwtDial::staticMetaObject, qt_meta_stringdata_caMeter,
      qt_meta_data_caMeter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &caMeter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *caMeter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *caMeter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_caMeter))
        return static_cast<void*>(const_cast< caMeter*>(this));
    return QwtDial::qt_metacast(_clname);
}

int caMeter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtDial::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getPV(); break;
        case 1: *reinterpret_cast< double*>(_v) = getMaxValue(); break;
        case 2: *reinterpret_cast< double*>(_v) = getMinValue(); break;
        case 3: *reinterpret_cast< SourceMode*>(_v) = getLimitsMode(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = getBaseColor(); break;
        case 5: *reinterpret_cast< bool*>(_v) = getScaleDefaultColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = getScaleColor(); break;
        case 7: *reinterpret_cast< colMode*>(_v) = getColorMode(); break;
        case 8: *reinterpret_cast< bool*>(_v) = isScaleEnabled(); break;
        case 9: *reinterpret_cast< bool*>(_v) = isValueDisplayed(); break;
        case 10: *reinterpret_cast< int*>(_v) = getPrecision(); break;
        case 11: *reinterpret_cast< SourceMode*>(_v) = getPrecisionMode(); break;
        case 12: *reinterpret_cast< FormatType*>(_v) = getFormatType(); break;
        case 13: *reinterpret_cast< bool*>(_v) = getUnitsEnabled(); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPV(*reinterpret_cast< QString*>(_v)); break;
        case 1: setMaxValue(*reinterpret_cast< double*>(_v)); break;
        case 2: setMinValue(*reinterpret_cast< double*>(_v)); break;
        case 3: setLimitsMode(*reinterpret_cast< SourceMode*>(_v)); break;
        case 4: setBaseColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: setScaleDefaultColor(*reinterpret_cast< bool*>(_v)); break;
        case 6: setScaleColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 8: setScaleEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 9: setValueDisplayed(*reinterpret_cast< bool*>(_v)); break;
        case 10: setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 11: setPrecisionMode(*reinterpret_cast< SourceMode*>(_v)); break;
        case 12: setFormatType(*reinterpret_cast< FormatType*>(_v)); break;
        case 13: setUnitsEnabled(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 14;
    } else if (_c == QMetaObject::ResetProperty) {
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
