/****************************************************************************
** Meta object code from reading C++ file 'calabelvertical.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/calabelvertical.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calabelvertical.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_caLabelVertical[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      12,   14, // properties
       4,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      24,   16, 0x0a095103,
      39,   29, 0x0009510b,
      59,   49, 0x0009510b,
      76,   69, 0x43095103,
      87,   69, 0x43095103,
     106,   98, 0x0009510b,
     127,  116, 0x0009510b,
     138,   16, 0x0a095103,
     153,   16, 0x0a095003,
     161,   16, 0x0a095103,
     170,   16, 0x0a095103,
     179,   16, 0x0a095103,

 // enums: name, flags, count, data
     116, 0x0,    4,   66,
      49, 0x0,    3,   74,
      29, 0x0,    2,   80,
      98, 0x0,    2,   84,

 // enum data: key, value
     188, uint(caLabelVertical::StaticV),
     196, uint(caLabelVertical::IfNotZero),
     206, uint(caLabelVertical::IfZero),
     213, uint(caLabelVertical::Calc),
     218, uint(caLabelVertical::Center),
     225, uint(caLabelVertical::Left),
     230, uint(caLabelVertical::Right),
     236, uint(caLabelVertical::Up),
     239, uint(caLabelVertical::Down),
     244, uint(caLabelVertical::Static),
     251, uint(caLabelVertical::Alarm),

       0        // eod
};

static const char qt_meta_stringdata_caLabelVertical[] = {
    "caLabelVertical\0QString\0text\0Direction\0"
    "direction\0Alignment\0alignment\0QColor\0"
    "foreground\0background\0colMode\0colorMode\0"
    "Visibility\0visibility\0visibilityCalc\0"
    "channel\0channelB\0channelC\0channelD\0"
    "StaticV\0IfNotZero\0IfZero\0Calc\0Center\0"
    "Left\0Right\0Up\0Down\0Static\0Alarm\0"
};

void caLabelVertical::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData caLabelVertical::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject caLabelVertical::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_caLabelVertical,
      qt_meta_data_caLabelVertical, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &caLabelVertical::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *caLabelVertical::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *caLabelVertical::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_caLabelVertical))
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
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = text(); break;
        case 1: *reinterpret_cast< Direction*>(_v) = getDirection(); break;
        case 2: *reinterpret_cast< Alignment*>(_v) = getAlignment(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = getForeground(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = getBackground(); break;
        case 5: *reinterpret_cast< colMode*>(_v) = getColorMode(); break;
        case 6: *reinterpret_cast< Visibility*>(_v) = getVisibility(); break;
        case 7: *reinterpret_cast< QString*>(_v) = getVisibilityCalc(); break;
        case 8: *reinterpret_cast< QString*>(_v) = getChannelA(); break;
        case 9: *reinterpret_cast< QString*>(_v) = getChannelB(); break;
        case 10: *reinterpret_cast< QString*>(_v) = getChannelC(); break;
        case 11: *reinterpret_cast< QString*>(_v) = getChannelD(); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: setDirection(*reinterpret_cast< Direction*>(_v)); break;
        case 2: setAlignment(*reinterpret_cast< Alignment*>(_v)); break;
        case 3: setForeground(*reinterpret_cast< QColor*>(_v)); break;
        case 4: setBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 5: setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 6: setVisibility(*reinterpret_cast< Visibility*>(_v)); break;
        case 7: setVisibilityCalc(*reinterpret_cast< QString*>(_v)); break;
        case 8: setChannelA(*reinterpret_cast< QString*>(_v)); break;
        case 9: setChannelB(*reinterpret_cast< QString*>(_v)); break;
        case 10: setChannelC(*reinterpret_cast< QString*>(_v)); break;
        case 11: setChannelD(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
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
