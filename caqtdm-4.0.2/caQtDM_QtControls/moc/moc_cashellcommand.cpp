/****************************************************************************
** Meta object code from reading C++ file 'cashellcommand.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cashellcommand.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cashellcommand.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caShellCommand_t {
    QByteArrayData data[5];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caShellCommand_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caShellCommand_t qt_meta_stringdata_caShellCommand = {
    {
QT_MOC_LITERAL(0, 0, 14), // "caShellCommand"
QT_MOC_LITERAL(1, 15, 9), // "elevation"
QT_MOC_LITERAL(2, 25, 9), // "Elevation"
QT_MOC_LITERAL(3, 35, 6), // "on_top"
QT_MOC_LITERAL(4, 42, 5) // "as_is"

    },
    "caShellCommand\0elevation\0Elevation\0"
    "on_top\0as_is"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caShellCommand[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       1,   17, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,

 // enums: name, flags, count, data
       2, 0x0,    2,   21,

 // enum data: key, value
       3, uint(caShellCommand::on_top),
       4, uint(caShellCommand::as_is),

       0        // eod
};

void caShellCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caShellCommand *_t = static_cast<caShellCommand *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Elevation*>(_v) = _t->getElevation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caShellCommand *_t = static_cast<caShellCommand *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setElevation(*reinterpret_cast< Elevation*>(_v)); break;
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

const QMetaObject caShellCommand::staticMetaObject = {
    { &caRowColMenu::staticMetaObject, qt_meta_stringdata_caShellCommand.data,
      qt_meta_data_caShellCommand,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caShellCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caShellCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caShellCommand.stringdata0))
        return static_cast<void*>(const_cast< caShellCommand*>(this));
    return caRowColMenu::qt_metacast(_clname);
}

int caShellCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = caRowColMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
