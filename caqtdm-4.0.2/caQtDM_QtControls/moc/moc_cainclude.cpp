/****************************************************************************
** Meta object code from reading C++ file 'cainclude.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cainclude.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cainclude.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caInclude_t {
    QByteArrayData data[22];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caInclude_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caInclude_t qt_meta_stringdata_caInclude = {
    {
QT_MOC_LITERAL(0, 0, 9), // "caInclude"
QT_MOC_LITERAL(1, 10, 5), // "macro"
QT_MOC_LITERAL(2, 16, 9), // "macroList"
QT_MOC_LITERAL(3, 26, 8), // "filename"
QT_MOC_LITERAL(4, 35, 8), // "stacking"
QT_MOC_LITERAL(5, 44, 8), // "Stacking"
QT_MOC_LITERAL(6, 53, 13), // "numberOfItems"
QT_MOC_LITERAL(7, 67, 12), // "maximumLines"
QT_MOC_LITERAL(8, 80, 10), // "visibility"
QT_MOC_LITERAL(9, 91, 10), // "Visibility"
QT_MOC_LITERAL(10, 102, 14), // "visibilityCalc"
QT_MOC_LITERAL(11, 117, 7), // "channel"
QT_MOC_LITERAL(12, 125, 8), // "channelB"
QT_MOC_LITERAL(13, 134, 8), // "channelC"
QT_MOC_LITERAL(14, 143, 8), // "channelD"
QT_MOC_LITERAL(15, 152, 7), // "StaticV"
QT_MOC_LITERAL(16, 160, 9), // "IfNotZero"
QT_MOC_LITERAL(17, 170, 6), // "IfZero"
QT_MOC_LITERAL(18, 177, 4), // "Calc"
QT_MOC_LITERAL(19, 182, 3), // "Row"
QT_MOC_LITERAL(20, 186, 6), // "Column"
QT_MOC_LITERAL(21, 193, 9) // "RowColumn"

    },
    "caInclude\0macro\0macroList\0filename\0"
    "stacking\0Stacking\0numberOfItems\0"
    "maximumLines\0visibility\0Visibility\0"
    "visibilityCalc\0channel\0channelB\0"
    "channelC\0channelD\0StaticV\0IfNotZero\0"
    "IfZero\0Calc\0Row\0Column\0RowColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caInclude[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      12,   14, // properties
       2,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,
       2, QMetaType::QStringList, 0x00085103,
       3, QMetaType::QString, 0x00095003,
       4, 0x80000000 | 5, 0x0009510b,
       6, QMetaType::Int, 0x00095003,
       7, QMetaType::Int, 0x00095003,
       8, 0x80000000 | 9, 0x0009510b,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::QString, 0x00095003,
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::QString, 0x00095103,
      14, QMetaType::QString, 0x00095103,

 // enums: name, flags, count, data
       9, 0x0,    4,   58,
       5, 0x0,    3,   66,

 // enum data: key, value
      15, uint(caInclude::StaticV),
      16, uint(caInclude::IfNotZero),
      17, uint(caInclude::IfZero),
      18, uint(caInclude::Calc),
      19, uint(caInclude::Row),
      20, uint(caInclude::Column),
      21, uint(caInclude::RowColumn),

       0        // eod
};

void caInclude::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caInclude *_t = static_cast<caInclude *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getMacro(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->getMacroList(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getFileName(); break;
        case 3: *reinterpret_cast< Stacking*>(_v) = _t->getStacking(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getItemCount(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getMaxLines(); break;
        case 6: *reinterpret_cast< Visibility*>(_v) = _t->getVisibility(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getVisibilityCalc(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getChannelA(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getChannelB(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->getChannelC(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->getChannelD(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caInclude *_t = static_cast<caInclude *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMacro(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setMacroList(*reinterpret_cast< QStringList*>(_v)); break;
        case 2: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setStacking(*reinterpret_cast< Stacking*>(_v)); break;
        case 4: _t->setItemCount(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setMaxLines(*reinterpret_cast< int*>(_v)); break;
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

const QMetaObject caInclude::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_caInclude.data,
      qt_meta_data_caInclude,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caInclude::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caInclude::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caInclude.stringdata0))
        return static_cast<void*>(const_cast< caInclude*>(this));
    return QWidget::qt_metacast(_clname);
}

int caInclude::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        bool *_b = reinterpret_cast<bool*>(_a[0]);
        switch (_id) {
        case 0: *_b = inactiveButVisible(); break;
        case 5: *_b = isPropertyVisible(maximumLines); break;
        default: break;
        }
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
