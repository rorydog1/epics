/****************************************************************************
** Meta object code from reading C++ file 'calabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/calabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caLabel_t {
    QByteArrayData data[18];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caLabel_t qt_meta_stringdata_caLabel = {
    {
QT_MOC_LITERAL(0, 0, 7), // "caLabel"
QT_MOC_LITERAL(1, 8, 10), // "foreground"
QT_MOC_LITERAL(2, 19, 10), // "background"
QT_MOC_LITERAL(3, 30, 9), // "colorMode"
QT_MOC_LITERAL(4, 40, 7), // "colMode"
QT_MOC_LITERAL(5, 48, 10), // "visibility"
QT_MOC_LITERAL(6, 59, 10), // "Visibility"
QT_MOC_LITERAL(7, 70, 14), // "visibilityCalc"
QT_MOC_LITERAL(8, 85, 7), // "channel"
QT_MOC_LITERAL(9, 93, 8), // "channelB"
QT_MOC_LITERAL(10, 102, 8), // "channelC"
QT_MOC_LITERAL(11, 111, 8), // "channelD"
QT_MOC_LITERAL(12, 120, 7), // "StaticV"
QT_MOC_LITERAL(13, 128, 9), // "IfNotZero"
QT_MOC_LITERAL(14, 138, 6), // "IfZero"
QT_MOC_LITERAL(15, 145, 4), // "Calc"
QT_MOC_LITERAL(16, 150, 6), // "Static"
QT_MOC_LITERAL(17, 157, 5) // "Alarm"

    },
    "caLabel\0foreground\0background\0colorMode\0"
    "colMode\0visibility\0Visibility\0"
    "visibilityCalc\0channel\0channelB\0"
    "channelC\0channelD\0StaticV\0IfNotZero\0"
    "IfZero\0Calc\0Static\0Alarm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       9,   14, // properties
       2,   41, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095103,
       2, QMetaType::QColor, 0x00095103,
       3, 0x80000000 | 4, 0x0009510b,
       5, 0x80000000 | 6, 0x0009510b,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095003,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::QString, 0x00095103,

 // enums: name, flags, count, data
       6, 0x0,    4,   49,
       4, 0x0,    2,   57,

 // enum data: key, value
      12, uint(caLabel::StaticV),
      13, uint(caLabel::IfNotZero),
      14, uint(caLabel::IfZero),
      15, uint(caLabel::Calc),
      16, uint(caLabel::Static),
      17, uint(caLabel::Alarm),

       0        // eod
};

void caLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caLabel *_t = static_cast<caLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getForeground(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getBackground(); break;
        case 2: *reinterpret_cast< colMode*>(_v) = _t->getColorMode(); break;
        case 3: *reinterpret_cast< Visibility*>(_v) = _t->getVisibility(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getVisibilityCalc(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getChannelA(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getChannelB(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getChannelC(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getChannelD(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caLabel *_t = static_cast<caLabel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setForeground(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 3: _t->setVisibility(*reinterpret_cast< Visibility*>(_v)); break;
        case 4: _t->setVisibilityCalc(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setChannelA(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setChannelB(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setChannelC(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setChannelD(*reinterpret_cast< QString*>(_v)); break;
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

const QMetaObject caLabel::staticMetaObject = {
    { &ESimpleLabel::staticMetaObject, qt_meta_stringdata_caLabel.data,
      qt_meta_data_caLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caLabel.stringdata0))
        return static_cast<void*>(const_cast< caLabel*>(this));
    return ESimpleLabel::qt_metacast(_clname);
}

int caLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ESimpleLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
