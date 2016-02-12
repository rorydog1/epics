/****************************************************************************
** Meta object code from reading C++ file 'caapplynumeric.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/caapplynumeric.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caapplynumeric.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caApplyNumeric_t {
    QByteArrayData data[16];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caApplyNumeric_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caApplyNumeric_t qt_meta_stringdata_caApplyNumeric = {
    {
QT_MOC_LITERAL(0, 0, 14), // "caApplyNumeric"
QT_MOC_LITERAL(1, 15, 7), // "channel"
QT_MOC_LITERAL(2, 23, 10), // "foreground"
QT_MOC_LITERAL(3, 34, 10), // "background"
QT_MOC_LITERAL(4, 45, 13), // "precisionMode"
QT_MOC_LITERAL(5, 59, 10), // "SourceMode"
QT_MOC_LITERAL(6, 70, 11), // "fixedFormat"
QT_MOC_LITERAL(7, 82, 10), // "limitsMode"
QT_MOC_LITERAL(8, 93, 8), // "maxValue"
QT_MOC_LITERAL(9, 102, 8), // "minValue"
QT_MOC_LITERAL(10, 111, 9), // "elevation"
QT_MOC_LITERAL(11, 121, 9), // "Elevation"
QT_MOC_LITERAL(12, 131, 6), // "on_top"
QT_MOC_LITERAL(13, 138, 5), // "as_is"
QT_MOC_LITERAL(14, 144, 7), // "Channel"
QT_MOC_LITERAL(15, 152, 4) // "User"

    },
    "caApplyNumeric\0channel\0foreground\0"
    "background\0precisionMode\0SourceMode\0"
    "fixedFormat\0limitsMode\0maxValue\0"
    "minValue\0elevation\0Elevation\0on_top\0"
    "as_is\0Channel\0User"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caApplyNumeric[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       9,   14, // properties
       2,   41, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QColor, 0x00095103,
       3, QMetaType::QColor, 0x00095103,
       4, 0x80000000 | 5, 0x0009510b,
       6, QMetaType::Bool, 0x00095103,
       7, 0x80000000 | 5, 0x0009510b,
       8, QMetaType::Double, 0x00095103,
       9, QMetaType::Double, 0x00095103,
      10, 0x80000000 | 11, 0x0009510b,

 // enums: name, flags, count, data
      11, 0x0,    2,   49,
       5, 0x0,    2,   53,

 // enum data: key, value
      12, uint(caApplyNumeric::on_top),
      13, uint(caApplyNumeric::as_is),
      14, uint(caApplyNumeric::Channel),
      15, uint(caApplyNumeric::User),

       0        // eod
};

void caApplyNumeric::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caApplyNumeric *_t = static_cast<caApplyNumeric *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPV(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getForeground(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getBackground(); break;
        case 3: *reinterpret_cast< SourceMode*>(_v) = _t->getPrecisionMode(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getFixedFormat(); break;
        case 5: *reinterpret_cast< SourceMode*>(_v) = _t->getLimitsMode(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->getMaxValue(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->getMinValue(); break;
        case 8: *reinterpret_cast< Elevation*>(_v) = _t->getElevation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caApplyNumeric *_t = static_cast<caApplyNumeric *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPV(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setForeground(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setPrecisionMode(*reinterpret_cast< SourceMode*>(_v)); break;
        case 4: _t->setFixedFormat(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setLimitsMode(*reinterpret_cast< SourceMode*>(_v)); break;
        case 6: _t->setMaxValue(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setMinValue(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setElevation(*reinterpret_cast< Elevation*>(_v)); break;
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

const QMetaObject caApplyNumeric::staticMetaObject = {
    { &EApplyNumeric::staticMetaObject, qt_meta_stringdata_caApplyNumeric.data,
      qt_meta_data_caApplyNumeric,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caApplyNumeric::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caApplyNumeric::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caApplyNumeric.stringdata0))
        return static_cast<void*>(const_cast< caApplyNumeric*>(this));
    return EApplyNumeric::qt_metacast(_clname);
}

int caApplyNumeric::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EApplyNumeric::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_END_MOC_NAMESPACE
