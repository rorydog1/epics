/****************************************************************************
** Meta object code from reading C++ file 'carelateddisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/carelateddisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'carelateddisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caRelatedDisplay_t {
    QByteArrayData data[9];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caRelatedDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caRelatedDisplay_t qt_meta_stringdata_caRelatedDisplay = {
    {
QT_MOC_LITERAL(0, 0, 16), // "caRelatedDisplay"
QT_MOC_LITERAL(1, 17, 12), // "stackingMode"
QT_MOC_LITERAL(2, 30, 8), // "Stacking"
QT_MOC_LITERAL(3, 39, 16), // "removeParentList"
QT_MOC_LITERAL(4, 56, 12), // "removeParent"
QT_MOC_LITERAL(5, 69, 9), // "elevation"
QT_MOC_LITERAL(6, 79, 9), // "Elevation"
QT_MOC_LITERAL(7, 89, 6), // "on_top"
QT_MOC_LITERAL(8, 96, 5) // "as_is"

    },
    "caRelatedDisplay\0stackingMode\0Stacking\0"
    "removeParentList\0removeParent\0elevation\0"
    "Elevation\0on_top\0as_is"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caRelatedDisplay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009500b,
       3, QMetaType::QStringList, 0x00085003,
       4, QMetaType::QString, 0x00095003,
       5, 0x80000000 | 6, 0x0009510b,

 // enums: name, flags, count, data
       6, 0x0,    2,   30,

 // enum data: key, value
       7, uint(caRelatedDisplay::on_top),
       8, uint(caRelatedDisplay::as_is),

       0        // eod
};

void caRelatedDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caRelatedDisplay *_t = static_cast<caRelatedDisplay *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Stacking*>(_v) = _t->getStacking(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->getRemoveList(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getReplaceModes(); break;
        case 3: *reinterpret_cast< Elevation*>(_v) = _t->getElevation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caRelatedDisplay *_t = static_cast<caRelatedDisplay *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStacking(*reinterpret_cast< Stacking*>(_v)); break;
        case 1: _t->setRemoveList(*reinterpret_cast< QStringList*>(_v)); break;
        case 2: _t->setReplaceModes(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setElevation(*reinterpret_cast< Elevation*>(_v)); break;
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

const QMetaObject caRelatedDisplay::staticMetaObject = {
    { &caRowColMenu::staticMetaObject, qt_meta_stringdata_caRelatedDisplay.data,
      qt_meta_data_caRelatedDisplay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caRelatedDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caRelatedDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caRelatedDisplay.stringdata0))
        return static_cast<void*>(const_cast< caRelatedDisplay*>(this));
    return caRowColMenu::qt_metacast(_clname);
}

int caRelatedDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = caRowColMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        bool *_b = reinterpret_cast<bool*>(_a[0]);
        switch (_id) {
        case 2: *_b = inactiveButVisible(); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
