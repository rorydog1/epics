/****************************************************************************
** Meta object code from reading C++ file 'caframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/caframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caFrame_t {
    QByteArrayData data[22];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caFrame_t qt_meta_stringdata_caFrame = {
    {
QT_MOC_LITERAL(0, 0, 7), // "caFrame"
QT_MOC_LITERAL(1, 8, 5), // "macro"
QT_MOC_LITERAL(2, 14, 10), // "background"
QT_MOC_LITERAL(3, 25, 14), // "backgroundMode"
QT_MOC_LITERAL(4, 40, 14), // "BackgroundMode"
QT_MOC_LITERAL(5, 55, 10), // "visibility"
QT_MOC_LITERAL(6, 66, 10), // "Visibility"
QT_MOC_LITERAL(7, 77, 14), // "visibilityMode"
QT_MOC_LITERAL(8, 92, 14), // "VisibilityMode"
QT_MOC_LITERAL(9, 107, 14), // "visibilityCalc"
QT_MOC_LITERAL(10, 122, 7), // "channel"
QT_MOC_LITERAL(11, 130, 8), // "channelB"
QT_MOC_LITERAL(12, 139, 8), // "channelC"
QT_MOC_LITERAL(13, 148, 8), // "channelD"
QT_MOC_LITERAL(14, 157, 7), // "StaticV"
QT_MOC_LITERAL(15, 165, 9), // "IfNotZero"
QT_MOC_LITERAL(16, 175, 6), // "IfZero"
QT_MOC_LITERAL(17, 182, 4), // "Calc"
QT_MOC_LITERAL(18, 187, 3), // "All"
QT_MOC_LITERAL(19, 191, 10), // "Background"
QT_MOC_LITERAL(20, 202, 7), // "Outline"
QT_MOC_LITERAL(21, 210, 6) // "Filled"

    },
    "caFrame\0macro\0background\0backgroundMode\0"
    "BackgroundMode\0visibility\0Visibility\0"
    "visibilityMode\0VisibilityMode\0"
    "visibilityCalc\0channel\0channelB\0"
    "channelC\0channelD\0StaticV\0IfNotZero\0"
    "IfZero\0Calc\0All\0Background\0Outline\0"
    "Filled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      10,   14, // properties
       3,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,
       2, QMetaType::QColor, 0x00095103,
       3, 0x80000000 | 4, 0x0009510b,
       5, 0x80000000 | 6, 0x0009510b,
       7, 0x80000000 | 8, 0x0009510b,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QString, 0x00095003,
      11, QMetaType::QString, 0x00095103,
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::QString, 0x00095103,

 // enums: name, flags, count, data
       6, 0x0,    4,   56,
       8, 0x0,    2,   64,
       4, 0x0,    2,   68,

 // enum data: key, value
      14, uint(caFrame::StaticV),
      15, uint(caFrame::IfNotZero),
      16, uint(caFrame::IfZero),
      17, uint(caFrame::Calc),
      18, uint(caFrame::All),
      19, uint(caFrame::Background),
      20, uint(caFrame::Outline),
      21, uint(caFrame::Filled),

       0        // eod
};

void caFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caFrame *_t = static_cast<caFrame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getMacro(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getBackground(); break;
        case 2: *reinterpret_cast< BackgroundMode*>(_v) = _t->getBackgroundMode(); break;
        case 3: *reinterpret_cast< Visibility*>(_v) = _t->getVisibility(); break;
        case 4: *reinterpret_cast< VisibilityMode*>(_v) = _t->getVisibilityMode(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getVisibilityCalc(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getChannelA(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getChannelB(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getChannelC(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getChannelD(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caFrame *_t = static_cast<caFrame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMacro(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBackgroundMode(*reinterpret_cast< BackgroundMode*>(_v)); break;
        case 3: _t->setVisibility(*reinterpret_cast< Visibility*>(_v)); break;
        case 4: _t->setVisibilityMode(*reinterpret_cast< VisibilityMode*>(_v)); break;
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

const QMetaObject caFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_caFrame.data,
      qt_meta_data_caFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caFrame.stringdata0))
        return static_cast<void*>(const_cast< caFrame*>(this));
    return QFrame::qt_metacast(_clname);
}

int caFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
