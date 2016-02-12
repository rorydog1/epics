/****************************************************************************
** Meta object code from reading C++ file 'calabelvertical.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/calabelvertical.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calabelvertical.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caLabelVertical_t {
    QByteArrayData data[28];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caLabelVertical_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caLabelVertical_t qt_meta_stringdata_caLabelVertical = {
    {
QT_MOC_LITERAL(0, 0, 15), // "caLabelVertical"
QT_MOC_LITERAL(1, 16, 4), // "text"
QT_MOC_LITERAL(2, 21, 9), // "direction"
QT_MOC_LITERAL(3, 31, 9), // "Direction"
QT_MOC_LITERAL(4, 41, 9), // "alignment"
QT_MOC_LITERAL(5, 51, 9), // "Alignment"
QT_MOC_LITERAL(6, 61, 10), // "foreground"
QT_MOC_LITERAL(7, 72, 10), // "background"
QT_MOC_LITERAL(8, 83, 9), // "colorMode"
QT_MOC_LITERAL(9, 93, 7), // "colMode"
QT_MOC_LITERAL(10, 101, 10), // "visibility"
QT_MOC_LITERAL(11, 112, 10), // "Visibility"
QT_MOC_LITERAL(12, 123, 14), // "visibilityCalc"
QT_MOC_LITERAL(13, 138, 7), // "channel"
QT_MOC_LITERAL(14, 146, 8), // "channelB"
QT_MOC_LITERAL(15, 155, 8), // "channelC"
QT_MOC_LITERAL(16, 164, 8), // "channelD"
QT_MOC_LITERAL(17, 173, 7), // "StaticV"
QT_MOC_LITERAL(18, 181, 9), // "IfNotZero"
QT_MOC_LITERAL(19, 191, 6), // "IfZero"
QT_MOC_LITERAL(20, 198, 4), // "Calc"
QT_MOC_LITERAL(21, 203, 6), // "Center"
QT_MOC_LITERAL(22, 210, 4), // "Left"
QT_MOC_LITERAL(23, 215, 5), // "Right"
QT_MOC_LITERAL(24, 221, 2), // "Up"
QT_MOC_LITERAL(25, 224, 4), // "Down"
QT_MOC_LITERAL(26, 229, 6), // "Static"
QT_MOC_LITERAL(27, 236, 5) // "Alarm"

    },
    "caLabelVertical\0text\0direction\0Direction\0"
    "alignment\0Alignment\0foreground\0"
    "background\0colorMode\0colMode\0visibility\0"
    "Visibility\0visibilityCalc\0channel\0"
    "channelB\0channelC\0channelD\0StaticV\0"
    "IfNotZero\0IfZero\0Calc\0Center\0Left\0"
    "Right\0Up\0Down\0Static\0Alarm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caLabelVertical[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      12,   14, // properties
       4,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,
       2, 0x80000000 | 3, 0x0009510b,
       4, 0x80000000 | 5, 0x0009510b,
       6, QMetaType::QColor, 0x00095103,
       7, QMetaType::QColor, 0x00095103,
       8, 0x80000000 | 9, 0x0009510b,
      10, 0x80000000 | 11, 0x0009510b,
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::QString, 0x00095003,
      14, QMetaType::QString, 0x00095103,
      15, QMetaType::QString, 0x00095103,
      16, QMetaType::QString, 0x00095103,

 // enums: name, flags, count, data
      11, 0x0,    4,   66,
       5, 0x0,    3,   74,
       3, 0x0,    2,   80,
       9, 0x0,    2,   84,

 // enum data: key, value
      17, uint(caLabelVertical::StaticV),
      18, uint(caLabelVertical::IfNotZero),
      19, uint(caLabelVertical::IfZero),
      20, uint(caLabelVertical::Calc),
      21, uint(caLabelVertical::Center),
      22, uint(caLabelVertical::Left),
      23, uint(caLabelVertical::Right),
      24, uint(caLabelVertical::Up),
      25, uint(caLabelVertical::Down),
      26, uint(caLabelVertical::Static),
      27, uint(caLabelVertical::Alarm),

       0        // eod
};

void caLabelVertical::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caLabelVertical *_t = static_cast<caLabelVertical *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< Direction*>(_v) = _t->getDirection(); break;
        case 2: *reinterpret_cast< Alignment*>(_v) = _t->getAlignment(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getForeground(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getBackground(); break;
        case 5: *reinterpret_cast< colMode*>(_v) = _t->getColorMode(); break;
        case 6: *reinterpret_cast< Visibility*>(_v) = _t->getVisibility(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getVisibilityCalc(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getChannelA(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getChannelB(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->getChannelC(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->getChannelD(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caLabelVertical *_t = static_cast<caLabelVertical *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDirection(*reinterpret_cast< Direction*>(_v)); break;
        case 2: _t->setAlignment(*reinterpret_cast< Alignment*>(_v)); break;
        case 3: _t->setForeground(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 6: _t->setVisibility(*reinterpret_cast< Visibility*>(_v)); break;
        case 7: _t->setVisibilityCalc(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setChannelA(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setChannelB(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setChannelC(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setChannelD(*reinterpret_cast< QString*>(_v)); break;
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

const QMetaObject caLabelVertical::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_caLabelVertical.data,
      qt_meta_data_caLabelVertical,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caLabelVertical::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caLabelVertical::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caLabelVertical.stringdata0))
        return static_cast<void*>(const_cast< caLabelVertical*>(this));
    if (!strcmp(_clname, "FontScalingWidget"))
        return static_cast< FontScalingWidget*>(const_cast< caLabelVertical*>(this));
    return QWidget::qt_metacast(_clname);
}

int caLabelVertical::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
