/****************************************************************************
** Meta object code from reading C++ file 'catextentry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/catextentry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'catextentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caTextEntry_t {
    QByteArrayData data[14];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caTextEntry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caTextEntry_t qt_meta_stringdata_caTextEntry = {
    {
QT_MOC_LITERAL(0, 0, 11), // "caTextEntry"
QT_MOC_LITERAL(1, 12, 16), // "TextEntryChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "dataInput"
QT_MOC_LITERAL(4, 40, 12), // "unitsEnabled"
QT_MOC_LITERAL(5, 53, 12), // "framePresent"
QT_MOC_LITERAL(6, 66, 10), // "frameColor"
QT_MOC_LITERAL(7, 77, 14), // "frameLineWidth"
QT_MOC_LITERAL(8, 92, 13), // "alarmHandling"
QT_MOC_LITERAL(9, 106, 13), // "alertHandling"
QT_MOC_LITERAL(10, 120, 9), // "elevation"
QT_MOC_LITERAL(11, 130, 9), // "Elevation"
QT_MOC_LITERAL(12, 140, 6), // "on_top"
QT_MOC_LITERAL(13, 147, 5) // "as_is"

    },
    "caTextEntry\0TextEntryChanged\0\0dataInput\0"
    "unitsEnabled\0framePresent\0frameColor\0"
    "frameLineWidth\0alarmHandling\0alertHandling\0"
    "elevation\0Elevation\0on_top\0as_is"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caTextEntry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       6,   28, // properties
       1,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00094103,
       5, QMetaType::Bool, 0x00094003,
       6, QMetaType::QColor, 0x00094103,
       7, QMetaType::Int, 0x00094003,
       8, 0x80000000 | 9, 0x0009410b,
      10, 0x80000000 | 11, 0x0009510b,

 // enums: name, flags, count, data
      11, 0x0,    2,   50,

 // enum data: key, value
      12, uint(caTextEntry::on_top),
      13, uint(caTextEntry::as_is),

       0        // eod
};

void caTextEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caTextEntry *_t = static_cast<caTextEntry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TextEntryChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->dataInput(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (caTextEntry::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&caTextEntry::TextEntryChanged)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        caTextEntry *_t = static_cast<caTextEntry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getUnitsEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getFrame(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getFrameColor(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getLineWidth(); break;
        case 4: *reinterpret_cast< alertHandling*>(_v) = _t->getAlarmHandling(); break;
        case 5: *reinterpret_cast< Elevation*>(_v) = _t->getElevation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caTextEntry *_t = static_cast<caTextEntry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUnitsEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setFrame(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setFrameColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setLinewidth(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setAlarmHandling(*reinterpret_cast< alertHandling*>(_v)); break;
        case 5: _t->setElevation(*reinterpret_cast< Elevation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject caTextEntry::staticMetaObject = {
    { &caLineEdit::staticMetaObject, qt_meta_stringdata_caTextEntry.data,
      qt_meta_data_caTextEntry,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caTextEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caTextEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caTextEntry.stringdata0))
        return static_cast<void*>(const_cast< caTextEntry*>(this));
    return caLineEdit::qt_metacast(_clname);
}

int caTextEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = caLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void caTextEntry::TextEntryChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
