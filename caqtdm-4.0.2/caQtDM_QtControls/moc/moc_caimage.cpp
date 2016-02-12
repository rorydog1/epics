/****************************************************************************
** Meta object code from reading C++ file 'caimage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/caimage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caimage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caImage_t {
    QByteArrayData data[16];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caImage_t qt_meta_stringdata_caImage = {
    {
QT_MOC_LITERAL(0, 0, 7), // "caImage"
QT_MOC_LITERAL(1, 8, 8), // "filename"
QT_MOC_LITERAL(2, 17, 9), // "imageCalc"
QT_MOC_LITERAL(3, 27, 5), // "frame"
QT_MOC_LITERAL(4, 33, 17), // "delayMilliseconds"
QT_MOC_LITERAL(5, 51, 10), // "visibility"
QT_MOC_LITERAL(6, 62, 10), // "Visibility"
QT_MOC_LITERAL(7, 73, 14), // "visibilityCalc"
QT_MOC_LITERAL(8, 88, 7), // "channel"
QT_MOC_LITERAL(9, 96, 8), // "channelB"
QT_MOC_LITERAL(10, 105, 8), // "channelC"
QT_MOC_LITERAL(11, 114, 8), // "channelD"
QT_MOC_LITERAL(12, 123, 7), // "StaticV"
QT_MOC_LITERAL(13, 131, 9), // "IfNotZero"
QT_MOC_LITERAL(14, 141, 6), // "IfZero"
QT_MOC_LITERAL(15, 148, 4) // "Calc"

    },
    "caImage\0filename\0imageCalc\0frame\0"
    "delayMilliseconds\0visibility\0Visibility\0"
    "visibilityCalc\0channel\0channelB\0"
    "channelC\0channelD\0StaticV\0IfNotZero\0"
    "IfZero\0Calc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caImage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      10,   14, // properties
       1,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QString, 0x00095103,
       3, QMetaType::Int, 0x00095103,
       4, QMetaType::Int, 0x00095003,
       5, 0x80000000 | 6, 0x0009510b,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095003,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::QString, 0x00095103,

 // enums: name, flags, count, data
       6, 0x0,    4,   48,

 // enum data: key, value
      12, uint(caImage::StaticV),
      13, uint(caImage::IfNotZero),
      14, uint(caImage::IfZero),
      15, uint(caImage::Calc),

       0        // eod
};

void caImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caImage *_t = static_cast<caImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getFileName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getImageCalc(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getFrame(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getDelay(); break;
        case 4: *reinterpret_cast< Visibility*>(_v) = _t->getVisibility(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getVisibilityCalc(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getChannelA(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getChannelB(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getChannelC(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getChannelD(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caImage *_t = static_cast<caImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setImageCalc(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFrame(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setDelay(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setVisibility(*reinterpret_cast< Visibility*>(_v)); break;
        case 5: _t->setVisibilityCalc(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setChannelA(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setChannelB(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setChannelC(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setChannelD(*reinterpret_cast< QString*>(_v)); break;
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

const QMetaObject caImage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_caImage.data,
      qt_meta_data_caImage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caImage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caImage.stringdata0))
        return static_cast<void*>(const_cast< caImage*>(this));
    return QWidget::qt_metacast(_clname);
}

int caImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
