/****************************************************************************
** Meta object code from reading C++ file 'caclock.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/caclock.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caclock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_caClock[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       7,   34, // properties
       3,   55, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   27,    8,    8, 0x0a,
      46,    8,    8,    8, 0x08,
      66,    8,    8,    8, 0x08,

 // properties: name, type, flags
      90,   82, 0x0a095003,
     107,   98, 0x0009510b,
     127,  116, 0x0009510b,
     145,  138, 0x43095103,
     160,  155, 0x01095103,
     178,  138, 0x43095103,
     197,  189, 0x0009510b,

 // enums: name, flags, count, data
     116, 0x0,    2,   67,
      98, 0x0,    2,   71,
     189, 0x0,    2,   75,

 // enum data: key, value
     207, uint(caClock::Normal),
     214, uint(caClock::Fast),
     219, uint(caClock::InternalTime),
     232, uint(caClock::ReceiveTime),
     244, uint(caClock::Static),
     251, uint(caClock::Alarm),

       0        // eod
};

static const char qt_meta_stringdata_caClock[] = {
    "caClock\0\0updateTime(QTime)\0run\0"
    "runClock(bool)\0setClockTime(QTime)\0"
    "myCurrentTime()\0QString\0channel\0"
    "TimeType\0timeType\0UpdateRate\0updateRate\0"
    "QColor\0baseColor\0bool\0scaleDefaultColor\0"
    "scaleColor\0colMode\0colorMode\0Normal\0"
    "Fast\0InternalTime\0ReceiveTime\0Static\0"
    "Alarm\0"
};

void caClock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        caClock *_t = static_cast<caClock *>(_o);
        switch (_id) {
        case 0: _t->updateTime((*reinterpret_cast< QTime(*)>(_a[1]))); break;
        case 1: _t->runClock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setClockTime((*reinterpret_cast< QTime(*)>(_a[1]))); break;
        case 3: _t->myCurrentTime(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData caClock::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject caClock::staticMetaObject = {
    { &QwtAnalogClock::staticMetaObject, qt_meta_stringdata_caClock,
      qt_meta_data_caClock, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &caClock::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *caClock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *caClock::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_caClock))
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
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getPV(); break;
        case 1: *reinterpret_cast< TimeType*>(_v) = getTimeType(); break;
        case 2: *reinterpret_cast< UpdateRate*>(_v) = getUpdateRate(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = getBaseColor(); break;
        case 4: *reinterpret_cast< bool*>(_v) = getScaleDefaultColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = getScaleColor(); break;
        case 6: *reinterpret_cast< colMode*>(_v) = getColorMode(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPV(*reinterpret_cast< QString*>(_v)); break;
        case 1: setTimeType(*reinterpret_cast< TimeType*>(_v)); break;
        case 2: setUpdateRate(*reinterpret_cast< UpdateRate*>(_v)); break;
        case 3: setBaseColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: setScaleDefaultColor(*reinterpret_cast< bool*>(_v)); break;
        case 5: setScaleColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
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
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
