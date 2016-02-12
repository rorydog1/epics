/****************************************************************************
** Meta object code from reading C++ file 'cainclude.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cainclude.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cainclude.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_caInclude[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      12,   14, // properties
       2,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      18,   10, 0x0a095103,
      36,   24, 0x0b085103,
      46,   10, 0x0a095003,
      64,   55, 0x0009510b,
      77,   73, 0x02095003,
      91,   73, 0x02095003,
     115,  104, 0x0009510b,
     126,   10, 0x0a095103,
     141,   10, 0x0a095003,
     149,   10, 0x0a095103,
     158,   10, 0x0a095103,
     167,   10, 0x0a095103,

 // enums: name, flags, count, data
     104, 0x0,    4,   58,
      55, 0x0,    3,   66,

 // enum data: key, value
     176, uint(caInclude::StaticV),
     184, uint(caInclude::IfNotZero),
     194, uint(caInclude::IfZero),
     201, uint(caInclude::Calc),
     206, uint(caInclude::Row),
     210, uint(caInclude::Column),
     217, uint(caInclude::RowColumn),

       0        // eod
};

static const char qt_meta_stringdata_caInclude[] = {
    "caInclude\0QString\0macro\0QStringList\0"
    "macroList\0filename\0Stacking\0stacking\0"
    "int\0numberOfItems\0maximumLines\0"
    "Visibility\0visibility\0visibilityCalc\0"
    "channel\0channelB\0channelC\0channelD\0"
    "StaticV\0IfNotZero\0IfZero\0Calc\0Row\0"
    "Column\0RowColumn\0"
};

void caInclude::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData caInclude::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject caInclude::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_caInclude,
      qt_meta_data_caInclude, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &caInclude::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *caInclude::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *caInclude::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_caInclude))
        return static_cast<void*>(const_cast< caInclude*>(this));
    return QWidget::qt_metacast(_clname);
}

int caInclude::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getMacro(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = getMacroList(); break;
        case 2: *reinterpret_cast< QString*>(_v) = getFileName(); break;
        case 3: *reinterpret_cast< Stacking*>(_v) = getStacking(); break;
        case 4: *reinterpret_cast< int*>(_v) = getItemCount(); break;
        case 5: *reinterpret_cast< int*>(_v) = getMaxLines(); break;
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
        case 0: setMacro(*reinterpret_cast< QString*>(_v)); break;
        case 1: setMacroList(*reinterpret_cast< QStringList*>(_v)); break;
        case 2: setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 3: setStacking(*reinterpret_cast< Stacking*>(_v)); break;
        case 4: setItemCount(*reinterpret_cast< int*>(_v)); break;
        case 5: setMaxLines(*reinterpret_cast< int*>(_v)); break;
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
        bool *_b = reinterpret_cast<bool*>(_a[0]);
        switch (_id) {
        case 0: *_b = inactiveButVisible(); break;
        case 5: *_b = isPropertyVisible(maximumLines); break;
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
