/****************************************************************************
** Meta object code from reading C++ file 'caspinbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/caspinbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caspinbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caSpinbox_t {
    QByteArrayData data[19];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caSpinbox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caSpinbox_t qt_meta_stringdata_caSpinbox = {
    {
QT_MOC_LITERAL(0, 0, 9), // "caSpinbox"
QT_MOC_LITERAL(1, 10, 12), // "setSpinValue"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 1), // "v"
QT_MOC_LITERAL(4, 26, 7), // "channel"
QT_MOC_LITERAL(5, 34, 10), // "foreground"
QT_MOC_LITERAL(6, 45, 10), // "background"
QT_MOC_LITERAL(7, 56, 13), // "precisionMode"
QT_MOC_LITERAL(8, 70, 10), // "SourceMode"
QT_MOC_LITERAL(9, 81, 11), // "fixedFormat"
QT_MOC_LITERAL(10, 93, 10), // "limitsMode"
QT_MOC_LITERAL(11, 104, 8), // "maxValue"
QT_MOC_LITERAL(12, 113, 8), // "minValue"
QT_MOC_LITERAL(13, 122, 9), // "elevation"
QT_MOC_LITERAL(14, 132, 9), // "Elevation"
QT_MOC_LITERAL(15, 142, 6), // "on_top"
QT_MOC_LITERAL(16, 149, 5), // "as_is"
QT_MOC_LITERAL(17, 155, 7), // "Channel"
QT_MOC_LITERAL(18, 163, 4) // "User"

    },
    "caSpinbox\0setSpinValue\0\0v\0channel\0"
    "foreground\0background\0precisionMode\0"
    "SourceMode\0fixedFormat\0limitsMode\0"
    "maxValue\0minValue\0elevation\0Elevation\0"
    "on_top\0as_is\0Channel\0User"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caSpinbox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       9,   22, // properties
       2,   49, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00095003,
       5, QMetaType::QColor, 0x00095103,
       6, QMetaType::QColor, 0x00095103,
       7, 0x80000000 | 8, 0x0009510b,
       9, QMetaType::Bool, 0x00095103,
      10, 0x80000000 | 8, 0x0009510b,
      11, QMetaType::Double, 0x00095103,
      12, QMetaType::Double, 0x00095103,
      13, 0x80000000 | 14, 0x0009510b,

 // enums: name, flags, count, data
      14, 0x0,    2,   57,
       8, 0x0,    2,   61,

 // enum data: key, value
      15, uint(caSpinbox::on_top),
      16, uint(caSpinbox::as_is),
      17, uint(caSpinbox::Channel),
      18, uint(caSpinbox::User),

       0        // eod
};

void caSpinbox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caSpinbox *_t = static_cast<caSpinbox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSpinValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        caSpinbox *_t = static_cast<caSpinbox *>(_o);
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
        caSpinbox *_t = static_cast<caSpinbox *>(_o);
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
}

const QMetaObject caSpinbox::staticMetaObject = {
    { &SNumeric::staticMetaObject, qt_meta_stringdata_caSpinbox.data,
      qt_meta_data_caSpinbox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caSpinbox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caSpinbox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caSpinbox.stringdata0))
        return static_cast<void*>(const_cast< caSpinbox*>(this));
    return SNumeric::qt_metacast(_clname);
}

int caSpinbox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SNumeric::qt_metacall(_c, _id, _a);
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
