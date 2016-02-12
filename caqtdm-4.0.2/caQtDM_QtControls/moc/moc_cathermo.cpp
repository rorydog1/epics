/****************************************************************************
** Meta object code from reading C++ file 'cathermo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cathermo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cathermo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caThermo_t {
    QByteArrayData data[27];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caThermo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caThermo_t qt_meta_stringdata_caThermo = {
    {
QT_MOC_LITERAL(0, 0, 8), // "caThermo"
QT_MOC_LITERAL(1, 9, 7), // "channel"
QT_MOC_LITERAL(2, 17, 9), // "direction"
QT_MOC_LITERAL(3, 27, 9), // "Direction"
QT_MOC_LITERAL(4, 37, 4), // "look"
QT_MOC_LITERAL(5, 42, 4), // "Look"
QT_MOC_LITERAL(6, 47, 8), // "logScale"
QT_MOC_LITERAL(7, 56, 10), // "foreground"
QT_MOC_LITERAL(8, 67, 10), // "background"
QT_MOC_LITERAL(9, 78, 9), // "colorMode"
QT_MOC_LITERAL(10, 88, 7), // "colMode"
QT_MOC_LITERAL(11, 96, 10), // "limitsMode"
QT_MOC_LITERAL(12, 107, 10), // "SourceMode"
QT_MOC_LITERAL(13, 118, 2), // "Up"
QT_MOC_LITERAL(14, 121, 4), // "Down"
QT_MOC_LITERAL(15, 126, 4), // "Left"
QT_MOC_LITERAL(16, 131, 5), // "Right"
QT_MOC_LITERAL(17, 137, 7), // "noLabel"
QT_MOC_LITERAL(18, 145, 6), // "noDeco"
QT_MOC_LITERAL(19, 152, 7), // "Outline"
QT_MOC_LITERAL(20, 160, 6), // "Limits"
QT_MOC_LITERAL(21, 167, 8), // "ChannelV"
QT_MOC_LITERAL(22, 176, 7), // "Default"
QT_MOC_LITERAL(23, 184, 6), // "Static"
QT_MOC_LITERAL(24, 191, 5), // "Alarm"
QT_MOC_LITERAL(25, 197, 7), // "Channel"
QT_MOC_LITERAL(26, 205, 4) // "User"

    },
    "caThermo\0channel\0direction\0Direction\0"
    "look\0Look\0logScale\0foreground\0background\0"
    "colorMode\0colMode\0limitsMode\0SourceMode\0"
    "Up\0Down\0Left\0Right\0noLabel\0noDeco\0"
    "Outline\0Limits\0ChannelV\0Default\0Static\0"
    "Alarm\0Channel\0User"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caThermo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       4,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, 0x80000000 | 3, 0x0009510b,
       4, 0x80000000 | 5, 0x0009510b,
       6, QMetaType::Bool, 0x00095103,
       7, QMetaType::QColor, 0x00095103,
       8, QMetaType::QColor, 0x00095103,
       9, 0x80000000 | 10, 0x0009510b,
      11, 0x80000000 | 12, 0x0009510b,

 // enums: name, flags, count, data
       3, 0x0,    4,   54,
       5, 0x0,    5,   62,
      10, 0x0,    3,   72,
      12, 0x0,    2,   78,

 // enum data: key, value
      13, uint(caThermo::Up),
      14, uint(caThermo::Down),
      15, uint(caThermo::Left),
      16, uint(caThermo::Right),
      17, uint(caThermo::noLabel),
      18, uint(caThermo::noDeco),
      19, uint(caThermo::Outline),
      20, uint(caThermo::Limits),
      21, uint(caThermo::ChannelV),
      22, uint(caThermo::Default),
      23, uint(caThermo::Static),
      24, uint(caThermo::Alarm),
      25, uint(caThermo::Channel),
      26, uint(caThermo::User),

       0        // eod
};

void caThermo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caThermo *_t = static_cast<caThermo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPV(); break;
        case 1: *reinterpret_cast< Direction*>(_v) = _t->getDirection(); break;
        case 2: *reinterpret_cast< Look*>(_v) = _t->getLook(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getLogScale(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getForeground(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getBackground(); break;
        case 6: *reinterpret_cast< colMode*>(_v) = _t->getColorMode(); break;
        case 7: *reinterpret_cast< SourceMode*>(_v) = _t->getLimitsMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caThermo *_t = static_cast<caThermo *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPV(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDirection(*reinterpret_cast< Direction*>(_v)); break;
        case 2: _t->setLook(*reinterpret_cast< Look*>(_v)); break;
        case 3: _t->setLogScale(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setForeground(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 7: _t->setLimitsMode(*reinterpret_cast< SourceMode*>(_v)); break;
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

const QMetaObject caThermo::staticMetaObject = {
    { &QwtThermoMarker::staticMetaObject, qt_meta_stringdata_caThermo.data,
      qt_meta_data_caThermo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caThermo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caThermo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caThermo.stringdata0))
        return static_cast<void*>(const_cast< caThermo*>(this));
    return QwtThermoMarker::qt_metacast(_clname);
}

int caThermo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtThermoMarker::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
