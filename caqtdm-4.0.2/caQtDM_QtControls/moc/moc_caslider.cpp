/****************************************************************************
** Meta object code from reading C++ file 'caslider.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/caslider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_caSlider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
      12,   24, // properties
       4,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   10,    9,    9, 0x0a,
      39,    9,    9,    9, 0x08,

 // properties: name, type, flags
      66,   50, 0x0009410b,
      86,   78, 0x0a095003,
     104,   94, 0x0009510b,
     121,  114, 0x43095103,
     132,  114, 0x43095103,
     151,  143, 0x0009510b,
     172,  161, 0x0009510b,
     190,  183, 0x06095103,
     199,  183, 0x06095103,
     208,  183, 0x06095103,
      10,  183, 0x06095003,
     233,  223, 0x0009510b,

 // enums: name, flags, count, data
     223, 0x0,    2,   76,
      94, 0x0,    4,   80,
     143, 0x0,    3,   88,
     161, 0x0,    2,   94,

 // enum data: key, value
     243, uint(caSlider::on_top),
     250, uint(caSlider::as_is),
     256, uint(caSlider::Up),
     259, uint(caSlider::Down),
     264, uint(caSlider::Left),
     269, uint(caSlider::Right),
     275, uint(caSlider::Default),
     283, uint(caSlider::Static),
     290, uint(caSlider::Alarm),
     296, uint(caSlider::Channel),
     304, uint(caSlider::User),

       0        // eod
};

static const char qt_meta_stringdata_caSlider[] = {
    "caSlider\0\0value\0setSliderValue(double)\0"
    "repeater()\0Qt::Orientation\0orientation\0"
    "QString\0channel\0Direction\0direction\0"
    "QColor\0foreground\0background\0colMode\0"
    "colorMode\0SourceMode\0limitsMode\0double\0"
    "maxValue\0minValue\0incrementValue\0"
    "Elevation\0elevation\0on_top\0as_is\0Up\0"
    "Down\0Left\0Right\0Default\0Static\0Alarm\0"
    "Channel\0User\0"
};

void caSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        caSlider *_t = static_cast<caSlider *>(_o);
        switch (_id) {
        case 0: _t->setSliderValue((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 1: _t->repeater(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData caSlider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject caSlider::staticMetaObject = {
    { &QwtSlider::staticMetaObject, qt_meta_stringdata_caSlider,
      qt_meta_data_caSlider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &caSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *caSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *caSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_caSlider))
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
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = orientation(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getPV(); break;
        case 2: *reinterpret_cast< Direction*>(_v) = getDirection(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = getForeground(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = getBackground(); break;
        case 5: *reinterpret_cast< colMode*>(_v) = getColorMode(); break;
        case 6: *reinterpret_cast< SourceMode*>(_v) = getLimitsMode(); break;
        case 7: *reinterpret_cast< double*>(_v) = getMaxValue(); break;
        case 8: *reinterpret_cast< double*>(_v) = getMinValue(); break;
        case 9: *reinterpret_cast< double*>(_v) = getIncrementValue(); break;
        case 10: *reinterpret_cast< double*>(_v) = getSliderValue(); break;
        case 11: *reinterpret_cast< Elevation*>(_v) = getElevation(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: setPV(*reinterpret_cast< QString*>(_v)); break;
        case 2: setDirection(*reinterpret_cast< Direction*>(_v)); break;
        case 3: setForeground(*reinterpret_cast< QColor*>(_v)); break;
        case 4: setBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 5: setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 6: setLimitsMode(*reinterpret_cast< SourceMode*>(_v)); break;
        case 7: setMaxValue(*reinterpret_cast< double*>(_v)); break;
        case 8: setMinValue(*reinterpret_cast< double*>(_v)); break;
        case 9: setIncrementValue(*reinterpret_cast< double*>(_v)); break;
        case 10: setSliderValue(*reinterpret_cast< double*>(_v)); break;
        case 11: setElevation(*reinterpret_cast< Elevation*>(_v)); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
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