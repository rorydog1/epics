/****************************************************************************
** Meta object code from reading C++ file 'carowcolmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/carowcolmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'carowcolmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caRowColMenu_t {
    QByteArrayData data[22];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caRowColMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caRowColMenu_t qt_meta_stringdata_caRowColMenu = {
    {
QT_MOC_LITERAL(0, 0, 12), // "caRowColMenu"
QT_MOC_LITERAL(1, 13, 7), // "clicked"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "indx"
QT_MOC_LITERAL(4, 27, 9), // "triggered"
QT_MOC_LITERAL(5, 37, 5), // "label"
QT_MOC_LITERAL(6, 43, 10), // "foreground"
QT_MOC_LITERAL(7, 54, 10), // "background"
QT_MOC_LITERAL(8, 65, 10), // "labelsList"
QT_MOC_LITERAL(9, 76, 6), // "labels"
QT_MOC_LITERAL(10, 83, 9), // "filesList"
QT_MOC_LITERAL(11, 93, 5), // "files"
QT_MOC_LITERAL(12, 99, 8), // "argsList"
QT_MOC_LITERAL(13, 108, 4), // "args"
QT_MOC_LITERAL(14, 113, 13), // "fontScaleMode"
QT_MOC_LITERAL(15, 127, 22), // "EPushButton::ScaleMode"
QT_MOC_LITERAL(16, 150, 8), // "Stacking"
QT_MOC_LITERAL(17, 159, 4), // "Menu"
QT_MOC_LITERAL(18, 164, 3), // "Row"
QT_MOC_LITERAL(19, 168, 6), // "Column"
QT_MOC_LITERAL(20, 175, 9), // "RowColumn"
QT_MOC_LITERAL(21, 185, 6) // "Hidden"

    },
    "caRowColMenu\0clicked\0\0indx\0triggered\0"
    "label\0foreground\0background\0labelsList\0"
    "labels\0filesList\0files\0argsList\0args\0"
    "fontScaleMode\0EPushButton::ScaleMode\0"
    "Stacking\0Menu\0Row\0Column\0RowColumn\0"
    "Hidden"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caRowColMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
      10,   30, // properties
       1,   60, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QColor, 0x00095103,
       7, QMetaType::QColor, 0x00095103,
       8, QMetaType::QStringList, 0x00085103,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QStringList, 0x00085103,
      11, QMetaType::QString, 0x00095103,
      12, QMetaType::QStringList, 0x00085103,
      13, QMetaType::QString, 0x00095103,
      14, 0x80000000 | 15, 0x0009500b,

 // enums: name, flags, count, data
      16, 0x0,    5,   64,

 // enum data: key, value
      17, uint(caRowColMenu::Menu),
      18, uint(caRowColMenu::Row),
      19, uint(caRowColMenu::Column),
      20, uint(caRowColMenu::RowColumn),
      21, uint(caRowColMenu::Hidden),

       0        // eod
};

void caRowColMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caRowColMenu *_t = static_cast<caRowColMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (caRowColMenu::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&caRowColMenu::clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (caRowColMenu::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&caRowColMenu::triggered)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        caRowColMenu *_t = static_cast<caRowColMenu *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getLabel(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getForeground(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getBackground(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->getLabelsList(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getLabels(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->getFilesList(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getFiles(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->getArgsList(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getArgs(); break;
        case 9: *reinterpret_cast< EPushButton::ScaleMode*>(_v) = _t->fontScaleMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caRowColMenu *_t = static_cast<caRowColMenu *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setForeground(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setLabelsList(*reinterpret_cast< QStringList*>(_v)); break;
        case 4: _t->setLabels(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setFilesList(*reinterpret_cast< QStringList*>(_v)); break;
        case 6: _t->setFiles(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setArgsList(*reinterpret_cast< QStringList*>(_v)); break;
        case 8: _t->setArgs(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setFontScaleModeL(*reinterpret_cast< EPushButton::ScaleMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_caRowColMenu[] = {
        &EPushButton::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject caRowColMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_caRowColMenu.data,
      qt_meta_data_caRowColMenu,  qt_static_metacall, qt_meta_extradata_caRowColMenu, Q_NULLPTR}
};


const QMetaObject *caRowColMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caRowColMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caRowColMenu.stringdata0))
        return static_cast<void*>(const_cast< caRowColMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int caRowColMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        bool *_b = reinterpret_cast<bool*>(_a[0]);
        switch (_id) {
        case 4: *_b = inactiveButVisible(); break;
        case 6: *_b = inactiveButVisible(); break;
        case 8: *_b = inactiveButVisible(); break;
        default: break;
        }
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
void caRowColMenu::clicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void caRowColMenu::triggered(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
