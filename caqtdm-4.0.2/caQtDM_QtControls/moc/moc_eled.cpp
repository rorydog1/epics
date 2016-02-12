/****************************************************************************
** Meta object code from reading C++ file 'eled.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/eled.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eled.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ELed_t {
    QByteArrayData data[11];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ELed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ELed_t qt_meta_stringdata_ELed = {
    {
QT_MOC_LITERAL(0, 0, 4), // "ELed"
QT_MOC_LITERAL(1, 5, 11), // "rectangular"
QT_MOC_LITERAL(2, 17, 15), // "gradientEnabled"
QT_MOC_LITERAL(3, 33, 8), // "ledWidth"
QT_MOC_LITERAL(4, 42, 9), // "ledHeight"
QT_MOC_LITERAL(5, 52, 5), // "angle"
QT_MOC_LITERAL(6, 58, 12), // "alphaChannel"
QT_MOC_LITERAL(7, 71, 14), // "linearGradient"
QT_MOC_LITERAL(8, 86, 13), // "scaleContents"
QT_MOC_LITERAL(9, 100, 12), // "gradientStop"
QT_MOC_LITERAL(10, 113, 13) // "gradientStart"

    },
    "ELed\0rectangular\0gradientEnabled\0"
    "ledWidth\0ledHeight\0angle\0alphaChannel\0"
    "linearGradient\0scaleContents\0gradientStop\0"
    "gradientStart"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ELed[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      10,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095103,
       2, QMetaType::Bool, 0x00095103,
       3, QMetaType::Int, 0x00095103,
       4, QMetaType::Int, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,
       9, QMetaType::Double, 0x00095103,
      10, QMetaType::Double, 0x00095103,

       0        // eod
};

void ELed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        ELed *_t = static_cast<ELed *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->rectangular(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->gradientEnabled(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->ledWidth(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->ledHeight(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->angle(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->alphaChannel(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->linearGradient(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->scaleContents(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->gradientStop(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->gradientStart(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ELed *_t = static_cast<ELed *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRectangular(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setGradientEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setLedWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setLedHeight(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setAngle(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setAlphaChannel(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setLinearGradient(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setScaleContents(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setGradientStop(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setGradientStart(*reinterpret_cast< double*>(_v)); break;
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

const QMetaObject ELed::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ELed.data,
      qt_meta_data_ELed,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ELed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ELed::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ELed.stringdata0))
        return static_cast<void*>(const_cast< ELed*>(this));
    return QWidget::qt_metacast(_clname);
}

int ELed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
