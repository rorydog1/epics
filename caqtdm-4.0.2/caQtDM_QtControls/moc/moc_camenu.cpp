/****************************************************************************
** Meta object code from reading C++ file 'camenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/camenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caMenu_t {
    QByteArrayData data[14];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caMenu_t qt_meta_stringdata_caMenu = {
    {
QT_MOC_LITERAL(0, 0, 6), // "caMenu"
QT_MOC_LITERAL(1, 7, 7), // "channel"
QT_MOC_LITERAL(2, 15, 9), // "colorMode"
QT_MOC_LITERAL(3, 25, 7), // "colMode"
QT_MOC_LITERAL(4, 33, 10), // "foreground"
QT_MOC_LITERAL(5, 44, 10), // "background"
QT_MOC_LITERAL(6, 55, 12), // "labelDisplay"
QT_MOC_LITERAL(7, 68, 9), // "elevation"
QT_MOC_LITERAL(8, 78, 9), // "Elevation"
QT_MOC_LITERAL(9, 88, 6), // "on_top"
QT_MOC_LITERAL(10, 95, 5), // "as_is"
QT_MOC_LITERAL(11, 101, 7), // "Default"
QT_MOC_LITERAL(12, 109, 6), // "Static"
QT_MOC_LITERAL(13, 116, 5) // "Alarm"

    },
    "caMenu\0channel\0colorMode\0colMode\0"
    "foreground\0background\0labelDisplay\0"
    "elevation\0Elevation\0on_top\0as_is\0"
    "Default\0Static\0Alarm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       2,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, 0x80000000 | 3, 0x0009510b,
       4, QMetaType::QColor, 0x00095103,
       5, QMetaType::QColor, 0x00095103,
       6, QMetaType::Bool, 0x00095103,
       7, 0x80000000 | 8, 0x0009510b,

 // enums: name, flags, count, data
       8, 0x0,    2,   40,
       3, 0x0,    3,   44,

 // enum data: key, value
       9, uint(caMenu::on_top),
      10, uint(caMenu::as_is),
      11, uint(caMenu::Default),
      12, uint(caMenu::Static),
      13, uint(caMenu::Alarm),

       0        // eod
};

void caMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caMenu *_t = static_cast<caMenu *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPV(); break;
        case 1: *reinterpret_cast< colMode*>(_v) = _t->getColorMode(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getForeground(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBackground(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getLabelDisplay(); break;
        case 5: *reinterpret_cast< Elevation*>(_v) = _t->getElevation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caMenu *_t = static_cast<caMenu *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPV(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 2: _t->setForeground(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setLabelDisplay(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setElevation(*reinterpret_cast< Elevation*>(_v)); break;
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

const QMetaObject caMenu::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_caMenu.data,
      qt_meta_data_caMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caMenu.stringdata0))
        return static_cast<void*>(const_cast< caMenu*>(this));
    return QComboBox::qt_metacast(_clname);
}

int caMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
