/****************************************************************************
** Meta object code from reading C++ file 'camessagebutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/camessagebutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camessagebutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caMessageButton_t {
    QByteArrayData data[20];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caMessageButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caMessageButton_t qt_meta_stringdata_caMessageButton = {
    {
QT_MOC_LITERAL(0, 0, 15), // "caMessageButton"
QT_MOC_LITERAL(1, 16, 19), // "messageButtonSignal"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 4), // "type"
QT_MOC_LITERAL(4, 42, 7), // "channel"
QT_MOC_LITERAL(5, 50, 5), // "label"
QT_MOC_LITERAL(6, 56, 10), // "foreground"
QT_MOC_LITERAL(7, 67, 10), // "background"
QT_MOC_LITERAL(8, 78, 18), // "disabledForeground"
QT_MOC_LITERAL(9, 97, 14), // "disableChannel"
QT_MOC_LITERAL(10, 112, 14), // "releaseMessage"
QT_MOC_LITERAL(11, 127, 12), // "pressMessage"
QT_MOC_LITERAL(12, 140, 9), // "colorMode"
QT_MOC_LITERAL(13, 150, 7), // "colMode"
QT_MOC_LITERAL(14, 158, 9), // "elevation"
QT_MOC_LITERAL(15, 168, 9), // "Elevation"
QT_MOC_LITERAL(16, 178, 6), // "on_top"
QT_MOC_LITERAL(17, 185, 5), // "as_is"
QT_MOC_LITERAL(18, 191, 6), // "Static"
QT_MOC_LITERAL(19, 198, 5) // "Alarm"

    },
    "caMessageButton\0messageButtonSignal\0"
    "\0type\0channel\0label\0foreground\0"
    "background\0disabledForeground\0"
    "disableChannel\0releaseMessage\0"
    "pressMessage\0colorMode\0colMode\0elevation\0"
    "Elevation\0on_top\0as_is\0Static\0Alarm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caMessageButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      10,   22, // properties
       2,   52, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00095003,
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QColor, 0x00095103,
       7, QMetaType::QColor, 0x00095103,
       8, QMetaType::QColor, 0x00095103,
       9, QMetaType::QString, 0x00095003,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::QString, 0x00095103,
      12, 0x80000000 | 13, 0x0009510b,
      14, 0x80000000 | 15, 0x0009510b,

 // enums: name, flags, count, data
      15, 0x0,    2,   60,
      13, 0x0,    2,   64,

 // enum data: key, value
      16, uint(caMessageButton::on_top),
      17, uint(caMessageButton::as_is),
      18, uint(caMessageButton::Static),
      19, uint(caMessageButton::Alarm),

       0        // eod
};

void caMessageButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caMessageButton *_t = static_cast<caMessageButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageButtonSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (caMessageButton::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&caMessageButton::messageButtonSignal)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        caMessageButton *_t = static_cast<caMessageButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPV(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getLabel(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getForeground(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBackground(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getDisabledForeground(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getDisablePV(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getReleaseMessage(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getPressMessage(); break;
        case 8: *reinterpret_cast< colMode*>(_v) = _t->getColorMode(); break;
        case 9: *reinterpret_cast< Elevation*>(_v) = _t->getElevation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caMessageButton *_t = static_cast<caMessageButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPV(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setForeground(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setDisabledForeground(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setDisablePV(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setReleaseMessage(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setPressMessage(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 9: _t->setElevation(*reinterpret_cast< Elevation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject caMessageButton::staticMetaObject = {
    { &EPushButton::staticMetaObject, qt_meta_stringdata_caMessageButton.data,
      qt_meta_data_caMessageButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caMessageButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caMessageButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caMessageButton.stringdata0))
        return static_cast<void*>(const_cast< caMessageButton*>(this));
    return EPushButton::qt_metacast(_clname);
}

int caMessageButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void caMessageButton::messageButtonSignal(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
