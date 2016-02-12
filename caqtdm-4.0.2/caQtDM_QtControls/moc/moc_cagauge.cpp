/****************************************************************************
** Meta object code from reading C++ file 'cagauge.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cagauge.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cagauge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caAbstractGauge_t {
    QByteArrayData data[2];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caAbstractGauge_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caAbstractGauge_t qt_meta_stringdata_caAbstractGauge = {
    {
QT_MOC_LITERAL(0, 0, 15), // "caAbstractGauge"
QT_MOC_LITERAL(1, 16, 7) // "channel"

    },
    "caAbstractGauge\0channel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caAbstractGauge[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,

       0        // eod
};

void caAbstractGauge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caAbstractGauge *_t = static_cast<caAbstractGauge *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPV(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caAbstractGauge *_t = static_cast<caAbstractGauge *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPV(*reinterpret_cast< QString*>(_v)); break;
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

const QMetaObject caAbstractGauge::staticMetaObject = {
    { &EAbstractGauge::staticMetaObject, qt_meta_stringdata_caAbstractGauge.data,
      qt_meta_data_caAbstractGauge,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caAbstractGauge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caAbstractGauge::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caAbstractGauge.stringdata0))
        return static_cast<void*>(const_cast< caAbstractGauge*>(this));
    return EAbstractGauge::qt_metacast(_clname);
}

int caAbstractGauge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EAbstractGauge::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_caLinearGauge_t {
    QByteArrayData data[9];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caLinearGauge_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caLinearGauge_t qt_meta_stringdata_caLinearGauge = {
    {
QT_MOC_LITERAL(0, 0, 13), // "caLinearGauge"
QT_MOC_LITERAL(1, 14, 11), // "orientation"
QT_MOC_LITERAL(2, 26, 15), // "Qt::Orientation"
QT_MOC_LITERAL(3, 42, 8), // "fillMode"
QT_MOC_LITERAL(4, 51, 8), // "FillMode"
QT_MOC_LITERAL(5, 60, 3), // "ALL"
QT_MOC_LITERAL(6, 64, 8), // "FROM_MIN"
QT_MOC_LITERAL(7, 73, 9), // "FROM_ZERO"
QT_MOC_LITERAL(8, 83, 8) // "FROM_REF"

    },
    "caLinearGauge\0orientation\0Qt::Orientation\0"
    "fillMode\0FillMode\0ALL\0FROM_MIN\0FROM_ZERO\0"
    "FROM_REF"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caLinearGauge[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       1,   20, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, 0x80000000 | 4, 0x0009510b,

 // enums: name, flags, count, data
       4, 0x0,    4,   24,

 // enum data: key, value
       5, uint(caLinearGauge::ALL),
       6, uint(caLinearGauge::FROM_MIN),
       7, uint(caLinearGauge::FROM_ZERO),
       8, uint(caLinearGauge::FROM_REF),

       0        // eod
};

void caLinearGauge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caLinearGauge *_t = static_cast<caLinearGauge *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 1: *reinterpret_cast< FillMode*>(_v) = _t->fillMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caLinearGauge *_t = static_cast<caLinearGauge *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: _t->setFillMode(*reinterpret_cast< FillMode*>(_v)); break;
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

const QMetaObject caLinearGauge::staticMetaObject = {
    { &caAbstractGauge::staticMetaObject, qt_meta_stringdata_caLinearGauge.data,
      qt_meta_data_caLinearGauge,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caLinearGauge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caLinearGauge::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caLinearGauge.stringdata0))
        return static_cast<void*>(const_cast< caLinearGauge*>(this));
    return caAbstractGauge::qt_metacast(_clname);
}

int caLinearGauge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = caAbstractGauge::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_caCircularGauge_t {
    QByteArrayData data[3];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caCircularGauge_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caCircularGauge_t qt_meta_stringdata_caCircularGauge = {
    {
QT_MOC_LITERAL(0, 0, 15), // "caCircularGauge"
QT_MOC_LITERAL(1, 16, 14), // "valueDisplayed"
QT_MOC_LITERAL(2, 31, 5) // "label"

    },
    "caCircularGauge\0valueDisplayed\0label"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caCircularGauge[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095103,
       2, QMetaType::QString, 0x00095103,

       0        // eod
};

void caCircularGauge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caCircularGauge *_t = static_cast<caCircularGauge *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isValueDisplayed(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->label(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caCircularGauge *_t = static_cast<caCircularGauge *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValueDisplayed(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
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

const QMetaObject caCircularGauge::staticMetaObject = {
    { &caAbstractGauge::staticMetaObject, qt_meta_stringdata_caCircularGauge.data,
      qt_meta_data_caCircularGauge,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caCircularGauge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caCircularGauge::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caCircularGauge.stringdata0))
        return static_cast<void*>(const_cast< caCircularGauge*>(this));
    return caAbstractGauge::qt_metacast(_clname);
}

int caCircularGauge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = caAbstractGauge::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
