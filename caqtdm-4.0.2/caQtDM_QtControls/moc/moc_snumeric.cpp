/****************************************************************************
** Meta object code from reading C++ file 'snumeric.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/snumeric.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'snumeric.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SNumeric_t {
    QByteArrayData data[17];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SNumeric_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SNumeric_t qt_meta_stringdata_SNumeric = {
    {
QT_MOC_LITERAL(0, 0, 8), // "SNumeric"
QT_MOC_LITERAL(1, 9, 12), // "valueChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "setEnabled"
QT_MOC_LITERAL(4, 34, 11), // "setDisabled"
QT_MOC_LITERAL(5, 46, 11), // "resizeEvent"
QT_MOC_LITERAL(6, 58, 13), // "QResizeEvent*"
QT_MOC_LITERAL(7, 72, 6), // "upData"
QT_MOC_LITERAL(8, 79, 16), // "QAbstractButton*"
QT_MOC_LITERAL(9, 96, 8), // "downData"
QT_MOC_LITERAL(10, 105, 12), // "valueUpdated"
QT_MOC_LITERAL(11, 118, 13), // "integerDigits"
QT_MOC_LITERAL(12, 132, 13), // "decimalDigits"
QT_MOC_LITERAL(13, 146, 5), // "value"
QT_MOC_LITERAL(14, 152, 8), // "maxValue"
QT_MOC_LITERAL(15, 161, 8), // "minValue"
QT_MOC_LITERAL(16, 170, 22) // "digitsFontScaleEnabled"

    },
    "SNumeric\0valueChanged\0\0setEnabled\0"
    "setDisabled\0resizeEvent\0QResizeEvent*\0"
    "upData\0QAbstractButton*\0downData\0"
    "valueUpdated\0integerDigits\0decimalDigits\0"
    "value\0maxValue\0minValue\0digitsFontScaleEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SNumeric[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       6,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   52,    2, 0x0a /* Public */,
       4,    1,   55,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x09 /* Protected */,
       7,    1,   61,    2, 0x08 /* Private */,
       9,    1,   64,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00095003,
      12, QMetaType::Int, 0x00095003,
      13, QMetaType::Double, 0x00095103,
      14, QMetaType::Double, 0x00095003,
      15, QMetaType::Double, 0x00095003,
      16, QMetaType::Bool, 0x00095103,

       0        // eod
};

void SNumeric::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SNumeric *_t = static_cast<SNumeric *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setDisabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 4: _t->upData((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 5: _t->downData((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 6: _t->valueUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SNumeric::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SNumeric::valueChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SNumeric *_t = static_cast<SNumeric *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->intDigits(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->decDigits(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->value(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->maximum(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->minimum(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->digitsFontScaleEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SNumeric *_t = static_cast<SNumeric *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIntDigits(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setDecDigits(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setDigitsFontScaleEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SNumeric::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SNumeric.data,
      qt_meta_data_SNumeric,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SNumeric::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SNumeric::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SNumeric.stringdata0))
        return static_cast<void*>(const_cast< SNumeric*>(this));
    if (!strcmp(_clname, "FloatDelegate"))
        return static_cast< FloatDelegate*>(const_cast< SNumeric*>(this));
    return QFrame::qt_metacast(_clname);
}

int SNumeric::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SNumeric::valueChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
