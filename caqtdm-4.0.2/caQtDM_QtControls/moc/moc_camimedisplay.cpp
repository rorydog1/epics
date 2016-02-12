/****************************************************************************
** Meta object code from reading C++ file 'camimedisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/camimedisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camimedisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caMimeDisplay_t {
    QByteArrayData data[10];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caMimeDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caMimeDisplay_t qt_meta_stringdata_caMimeDisplay = {
    {
QT_MOC_LITERAL(0, 0, 13), // "caMimeDisplay"
QT_MOC_LITERAL(1, 14, 16), // "Callback_Clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "stackingMode"
QT_MOC_LITERAL(4, 45, 8), // "Stacking"
QT_MOC_LITERAL(5, 54, 4), // "args"
QT_MOC_LITERAL(6, 59, 9), // "elevation"
QT_MOC_LITERAL(7, 69, 9), // "Elevation"
QT_MOC_LITERAL(8, 79, 6), // "on_top"
QT_MOC_LITERAL(9, 86, 5) // "as_is"

    },
    "caMimeDisplay\0Callback_Clicked\0\0"
    "stackingMode\0Stacking\0args\0elevation\0"
    "Elevation\0on_top\0as_is"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caMimeDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   22, // properties
       1,   31, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x0009500b,
       5, QMetaType::QString, 0x00094103,
       6, 0x80000000 | 7, 0x0009510b,

 // enums: name, flags, count, data
       7, 0x0,    2,   35,

 // enum data: key, value
       8, uint(caMimeDisplay::on_top),
       9, uint(caMimeDisplay::as_is),

       0        // eod
};

void caMimeDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caMimeDisplay *_t = static_cast<caMimeDisplay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Callback_Clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        caMimeDisplay *_t = static_cast<caMimeDisplay *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Stacking*>(_v) = _t->getStacking(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getArgs(); break;
        case 2: *reinterpret_cast< Elevation*>(_v) = _t->getElevation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caMimeDisplay *_t = static_cast<caMimeDisplay *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStacking(*reinterpret_cast< Stacking*>(_v)); break;
        case 1: _t->setArgs(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setElevation(*reinterpret_cast< Elevation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject caMimeDisplay::staticMetaObject = {
    { &caRowColMenu::staticMetaObject, qt_meta_stringdata_caMimeDisplay.data,
      qt_meta_data_caMimeDisplay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caMimeDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caMimeDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caMimeDisplay.stringdata0))
        return static_cast<void*>(const_cast< caMimeDisplay*>(this));
    return caRowColMenu::qt_metacast(_clname);
}

int caMimeDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = caRowColMenu::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
