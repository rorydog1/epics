/****************************************************************************
** Meta object code from reading C++ file 'epushbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/epushbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'epushbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EPushButton_t {
    QByteArrayData data[7];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EPushButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EPushButton_t qt_meta_stringdata_EPushButton = {
    {
QT_MOC_LITERAL(0, 0, 11), // "EPushButton"
QT_MOC_LITERAL(1, 12, 13), // "fontScaleMode"
QT_MOC_LITERAL(2, 26, 9), // "ScaleMode"
QT_MOC_LITERAL(3, 36, 15), // "fontScaleFactor"
QT_MOC_LITERAL(4, 52, 4), // "None"
QT_MOC_LITERAL(5, 57, 6), // "Height"
QT_MOC_LITERAL(6, 64, 14) // "WidthAndHeight"

    },
    "EPushButton\0fontScaleMode\0ScaleMode\0"
    "fontScaleFactor\0None\0Height\0WidthAndHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EPushButton[] = {

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
       3, QMetaType::Double, 0x00094103,

 // enums: name, flags, count, data
       2, 0x0,    3,   24,

 // enum data: key, value
       4, uint(EPushButton::None),
       5, uint(EPushButton::Height),
       6, uint(EPushButton::WidthAndHeight),

       0        // eod
};

void EPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        EPushButton *_t = static_cast<EPushButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ScaleMode*>(_v) = _t->fontScaleMode(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->fontScaleFactor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        EPushButton *_t = static_cast<EPushButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFontScaleMode(*reinterpret_cast< ScaleMode*>(_v)); break;
        case 1: _t->setFontScaleFactor(*reinterpret_cast< double*>(_v)); break;
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

const QMetaObject EPushButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_EPushButton.data,
      qt_meta_data_EPushButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EPushButton.stringdata0))
        return static_cast<void*>(const_cast< EPushButton*>(this));
    if (!strcmp(_clname, "FontScalingWidget"))
        return static_cast< FontScalingWidget*>(const_cast< EPushButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int EPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
