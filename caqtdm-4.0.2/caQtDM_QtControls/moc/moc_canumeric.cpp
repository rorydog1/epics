/****************************************************************************
** Meta object code from reading C++ file 'canumeric.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/canumeric.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canumeric.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caNumeric_t {
    QByteArrayData data[16];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caNumeric_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caNumeric_t qt_meta_stringdata_caNumeric = {
    {
QT_MOC_LITERAL(0, 0, 9), // "caNumeric"
QT_MOC_LITERAL(1, 10, 7), // "channel"
QT_MOC_LITERAL(2, 18, 10), // "foreground"
QT_MOC_LITERAL(3, 29, 10), // "background"
QT_MOC_LITERAL(4, 40, 13), // "precisionMode"
QT_MOC_LITERAL(5, 54, 10), // "SourceMode"
QT_MOC_LITERAL(6, 65, 11), // "fixedFormat"
QT_MOC_LITERAL(7, 77, 10), // "limitsMode"
QT_MOC_LITERAL(8, 88, 8), // "maxValue"
QT_MOC_LITERAL(9, 97, 8), // "minValue"
QT_MOC_LITERAL(10, 106, 9), // "elevation"
QT_MOC_LITERAL(11, 116, 9), // "Elevation"
QT_MOC_LITERAL(12, 126, 6), // "on_top"
QT_MOC_LITERAL(13, 133, 5), // "as_is"
QT_MOC_LITERAL(14, 139, 7), // "Channel"
QT_MOC_LITERAL(15, 147, 4) // "User"

    },
    "caNumeric\0channel\0foreground\0background\0"
    "precisionMode\0SourceMode\0fixedFormat\0"
    "limitsMode\0maxValue\0minValue\0elevation\0"
    "Elevation\0on_top\0as_is\0Channel\0User"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caNumeric[] = {

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
      12, uint(caNumeric::on_top),
      13, uint(caNumeric::as_is),
      14, uint(caNumeric::Channel),
      15, uint(caNumeric::User),

       0        // eod
};

void caNumeric::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caNumeric *_t = static_cast<caNumeric *>(_o);
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
        caNumeric *_t = static_cast<caNumeric *>(_o);
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

const QMetaObject caNumeric::staticMetaObject = {
    { &ENumeric::staticMetaObject, qt_meta_stringdata_caNumeric.data,
      qt_meta_data_caNumeric,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caNumeric::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caNumeric::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caNumeric.stringdata0))
        return static_cast<void*>(const_cast< caNumeric*>(this));
    return ENumeric::qt_metacast(_clname);
}

int caNumeric::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ENumeric::qt_metacall(_c, _id, _a);
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
