/****************************************************************************
** Meta object code from reading C++ file 'catable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/catable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'catable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caTable_t {
    QByteArrayData data[24];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caTable_t qt_meta_stringdata_caTable = {
    {
QT_MOC_LITERAL(0, 0, 7), // "caTable"
QT_MOC_LITERAL(1, 8, 24), // "TableDoubleClickedSignal"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 2), // "pv"
QT_MOC_LITERAL(4, 37, 4), // "copy"
QT_MOC_LITERAL(5, 42, 17), // "celldoubleclicked"
QT_MOC_LITERAL(6, 60, 11), // "cellclicked"
QT_MOC_LITERAL(7, 72, 12), // "channelsList"
QT_MOC_LITERAL(8, 85, 8), // "channels"
QT_MOC_LITERAL(9, 94, 11), // "columnSizes"
QT_MOC_LITERAL(10, 106, 9), // "colorMode"
QT_MOC_LITERAL(11, 116, 7), // "colMode"
QT_MOC_LITERAL(12, 124, 9), // "precision"
QT_MOC_LITERAL(13, 134, 13), // "precisionMode"
QT_MOC_LITERAL(14, 148, 10), // "SourceMode"
QT_MOC_LITERAL(15, 159, 10), // "limitsMode"
QT_MOC_LITERAL(16, 170, 8), // "maxValue"
QT_MOC_LITERAL(17, 179, 8), // "minValue"
QT_MOC_LITERAL(18, 188, 13), // "scriptCommand"
QT_MOC_LITERAL(19, 202, 15), // "scriptParameter"
QT_MOC_LITERAL(20, 218, 6), // "Static"
QT_MOC_LITERAL(21, 225, 5), // "Alarm"
QT_MOC_LITERAL(22, 231, 7), // "Channel"
QT_MOC_LITERAL(23, 239, 4) // "User"

    },
    "caTable\0TableDoubleClickedSignal\0\0pv\0"
    "copy\0celldoubleclicked\0cellclicked\0"
    "channelsList\0channels\0columnSizes\0"
    "colorMode\0colMode\0precision\0precisionMode\0"
    "SourceMode\0limitsMode\0maxValue\0minValue\0"
    "scriptCommand\0scriptParameter\0Static\0"
    "Alarm\0Channel\0User"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caTable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      11,   48, // properties
       2,   81, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    2,   38,    2, 0x08 /* Private */,
       6,    2,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // properties: name, type, flags
       7, QMetaType::QStringList, 0x00085003,
       8, QMetaType::QString, 0x00095003,
       9, QMetaType::QString, 0x00095103,
      10, 0x80000000 | 11, 0x0009510b,
      12, QMetaType::Int, 0x00095103,
      13, 0x80000000 | 14, 0x0009510b,
      15, 0x80000000 | 14, 0x0009510b,
      16, QMetaType::Double, 0x00095103,
      17, QMetaType::Double, 0x00095103,
      18, QMetaType::QString, 0x00095103,
      19, QMetaType::QString, 0x00095003,

 // enums: name, flags, count, data
      11, 0x0,    2,   89,
      14, 0x0,    2,   93,

 // enum data: key, value
      20, uint(caTable::Static),
      21, uint(caTable::Alarm),
      22, uint(caTable::Channel),
      23, uint(caTable::User),

       0        // eod
};

void caTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caTable *_t = static_cast<caTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TableDoubleClickedSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->copy(); break;
        case 2: _t->celldoubleclicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->cellclicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (caTable::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&caTable::TableDoubleClickedSignal)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        caTable *_t = static_cast<caTable *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->getPVSList(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getPVS(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getColumnSizes(); break;
        case 3: *reinterpret_cast< colMode*>(_v) = _t->getColorMode(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getPrecision(); break;
        case 5: *reinterpret_cast< SourceMode*>(_v) = _t->getPrecisionMode(); break;
        case 6: *reinterpret_cast< SourceMode*>(_v) = _t->getLimitsMode(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->getMaxValue(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->getMinValue(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getScriptCommand(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->getScriptParam(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caTable *_t = static_cast<caTable *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPVSList(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: _t->setPVS(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setColumnSizes(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 4: _t->setPrecision(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setPrecisionMode(*reinterpret_cast< SourceMode*>(_v)); break;
        case 6: _t->setLimitsMode(*reinterpret_cast< SourceMode*>(_v)); break;
        case 7: _t->setMaxValue(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setMinValue(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setScriptCommand(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setScriptParam(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject caTable::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_caTable.data,
      qt_meta_data_caTable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caTable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caTable.stringdata0))
        return static_cast<void*>(const_cast< caTable*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int caTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        bool *_b = reinterpret_cast<bool*>(_a[0]);
        switch (_id) {
        case 1: *_b = inactiveButVisible(); break;
        default: break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void caTable::TableDoubleClickedSignal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
