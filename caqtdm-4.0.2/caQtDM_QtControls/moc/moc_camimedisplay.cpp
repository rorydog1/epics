/****************************************************************************
** Meta object code from reading C++ file 'camimedisplay.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/camimedisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camimedisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_caMimeDisplay[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   19, // properties
       1,   28, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,

 // properties: name, type, flags
      46,   37, 0x0009500b,
      67,   59, 0x0a094103,
      82,   72, 0x0009510b,

 // enums: name, flags, count, data
      72, 0x0,    2,   32,

 // enum data: key, value
      92, uint(caMimeDisplay::on_top),
      99, uint(caMimeDisplay::as_is),

       0        // eod
};

static const char qt_meta_stringdata_caMimeDisplay[] = {
    "caMimeDisplay\0\0Callback_Clicked(int)\0"
    "Stacking\0stackingMode\0QString\0args\0"
    "Elevation\0elevation\0on_top\0as_is\0"
};

void caMimeDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        caMimeDisplay *_t = static_cast<caMimeDisplay *>(_o);
        switch (_id) {
        case 0: _t->Callback_Clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData caMimeDisplay::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject caMimeDisplay::staticMetaObject = {
    { &caRowColMenu::staticMetaObject, qt_meta_stringdata_caMimeDisplay,
      qt_meta_data_caMimeDisplay, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &caMimeDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *caMimeDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *caMimeDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_caMimeDisplay))
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
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Stacking*>(_v) = getStacking(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getArgs(); break;
        case 2: *reinterpret_cast< Elevation*>(_v) = getElevation(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setStacking(*reinterpret_cast< Stacking*>(_v)); break;
        case 1: setArgs(*reinterpret_cast< QString*>(_v)); break;
        case 2: setElevation(*reinterpret_cast< Elevation*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
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
