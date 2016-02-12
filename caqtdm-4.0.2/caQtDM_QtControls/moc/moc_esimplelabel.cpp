/****************************************************************************
** Meta object code from reading C++ file 'esimplelabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/esimplelabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'esimplelabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ESimpleLabel_t {
    QByteArrayData data[10];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ESimpleLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ESimpleLabel_t qt_meta_stringdata_ESimpleLabel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ESimpleLabel"
QT_MOC_LITERAL(1, 13, 16), // "fontScaleEnabled"
QT_MOC_LITERAL(2, 30, 17), // "botTopBorderWidth"
QT_MOC_LITERAL(3, 48, 18), // "lateralBorderWidth"
QT_MOC_LITERAL(4, 67, 15), // "fontScaleFactor"
QT_MOC_LITERAL(5, 83, 13), // "fontScaleMode"
QT_MOC_LITERAL(6, 97, 9), // "ScaleMode"
QT_MOC_LITERAL(7, 107, 4), // "None"
QT_MOC_LITERAL(8, 112, 6), // "Height"
QT_MOC_LITERAL(9, 119, 14) // "WidthAndHeight"

    },
    "ESimpleLabel\0fontScaleEnabled\0"
    "botTopBorderWidth\0lateralBorderWidth\0"
    "fontScaleFactor\0fontScaleMode\0ScaleMode\0"
    "None\0Height\0WidthAndHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ESimpleLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       1,   29, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00094001,
       2, QMetaType::Double, 0x00095103,
       3, QMetaType::Double, 0x00095103,
       4, QMetaType::Double, 0x00094103,
       5, 0x80000000 | 6, 0x0009510b,

 // enums: name, flags, count, data
       6, 0x0,    3,   33,

 // enum data: key, value
       7, uint(ESimpleLabel::None),
       8, uint(ESimpleLabel::Height),
       9, uint(ESimpleLabel::WidthAndHeight),

       0        // eod
};

void ESimpleLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        ESimpleLabel *_t = static_cast<ESimpleLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->fontScaleEnabled(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->botTopBorderWidth(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->lateralBorderWidth(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->fontScaleFactor(); break;
        case 4: *reinterpret_cast< ScaleMode*>(_v) = _t->fontScaleMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ESimpleLabel *_t = static_cast<ESimpleLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setBotTopBorderWidth(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setLateralBorderWidth(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setFontScaleFactor(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setFontScaleMode(*reinterpret_cast< ScaleMode*>(_v)); break;
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

const QMetaObject ESimpleLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ESimpleLabel.data,
      qt_meta_data_ESimpleLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ESimpleLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ESimpleLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ESimpleLabel.stringdata0))
        return static_cast<void*>(const_cast< ESimpleLabel*>(this));
    if (!strcmp(_clname, "FontScalingWidget"))
        return static_cast< FontScalingWidget*>(const_cast< ESimpleLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int ESimpleLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        bool *_b = reinterpret_cast<bool*>(_a[0]);
        switch (_id) {
        case 1: *_b = fontScaleEnabled(); break;
        case 2: *_b = fontScaleEnabled(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
