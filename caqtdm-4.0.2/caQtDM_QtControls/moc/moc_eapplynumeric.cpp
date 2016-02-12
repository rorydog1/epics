/****************************************************************************
** Meta object code from reading C++ file 'eapplynumeric.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/eapplynumeric.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eapplynumeric.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EApplyNumeric_t {
    QByteArrayData data[18];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EApplyNumeric_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EApplyNumeric_t qt_meta_stringdata_EApplyNumeric = {
    {
QT_MOC_LITERAL(0, 0, 13), // "EApplyNumeric"
QT_MOC_LITERAL(1, 14, 7), // "clicked"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "valueChanged"
QT_MOC_LITERAL(4, 36, 5), // "value"
QT_MOC_LITERAL(5, 42, 10), // "applyValue"
QT_MOC_LITERAL(6, 53, 13), // "clearModified"
QT_MOC_LITERAL(7, 67, 7), // "setFont"
QT_MOC_LITERAL(8, 75, 7), // "disable"
QT_MOC_LITERAL(9, 83, 19), // "numericValueChanged"
QT_MOC_LITERAL(10, 103, 13), // "integerDigits"
QT_MOC_LITERAL(11, 117, 13), // "decimalDigits"
QT_MOC_LITERAL(12, 131, 9), // "buttonPos"
QT_MOC_LITERAL(13, 141, 15), // "Qt::Orientation"
QT_MOC_LITERAL(14, 157, 10), // "buttonText"
QT_MOC_LITERAL(15, 168, 11), // "numericFont"
QT_MOC_LITERAL(16, 180, 17), // "applyButtonActive"
QT_MOC_LITERAL(17, 198, 22) // "digitsFontScaleEnabled"

    },
    "EApplyNumeric\0clicked\0\0valueChanged\0"
    "value\0applyValue\0clearModified\0setFont\0"
    "disable\0numericValueChanged\0integerDigits\0"
    "decimalDigits\0buttonPos\0Qt::Orientation\0"
    "buttonText\0numericFont\0applyButtonActive\0"
    "digitsFontScaleEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EApplyNumeric[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       8,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   55,    2, 0x0a /* Public */,
       6,    0,   56,    2, 0x0a /* Public */,
       7,    1,   57,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QFont,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,

 // properties: name, type, flags
       4, QMetaType::Double, 0x00095103,
      10, QMetaType::Int, 0x00095003,
      11, QMetaType::Int, 0x00095003,
      12, 0x80000000 | 13, 0x0009500b,
      14, QMetaType::QString, 0x00095103,
      15, QMetaType::QFont, 0x00095103,
      16, QMetaType::Bool, 0x00095103,
      17, QMetaType::Bool, 0x00095103,

       0        // eod
};

void EApplyNumeric::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EApplyNumeric *_t = static_cast<EApplyNumeric *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->applyValue(); break;
        case 3: _t->clearModified(); break;
        case 4: _t->setFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 5: _t->disable(); break;
        case 6: _t->numericValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (EApplyNumeric::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EApplyNumeric::clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (EApplyNumeric::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&EApplyNumeric::valueChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        EApplyNumeric *_t = static_cast<EApplyNumeric *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->intDigits(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->decDigits(); break;
        case 3: *reinterpret_cast< Qt::Orientation*>(_v) = _t->buttonPosition(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->buttonText(); break;
        case 5: *reinterpret_cast< QFont*>(_v) = _t->numericFont(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->applyButtonActive(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->digitsFontScaleEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        EApplyNumeric *_t = static_cast<EApplyNumeric *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setIntDigits(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setDecDigits(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setButtonPosition(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 4: _t->setButtonText(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setNumericFont(*reinterpret_cast< QFont*>(_v)); break;
        case 6: _t->setApplyButtonActive(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setDigitsFontScaleEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject EApplyNumeric::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EApplyNumeric.data,
      qt_meta_data_EApplyNumeric,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EApplyNumeric::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EApplyNumeric::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EApplyNumeric.stringdata0))
        return static_cast<void*>(const_cast< EApplyNumeric*>(this));
    if (!strcmp(_clname, "FloatDelegate"))
        return static_cast< FloatDelegate*>(const_cast< EApplyNumeric*>(this));
    return QWidget::qt_metacast(_clname);
}

int EApplyNumeric::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void EApplyNumeric::clicked(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EApplyNumeric::valueChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
