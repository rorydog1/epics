/****************************************************************************
** Meta object code from reading C++ file 'capolylinetaskmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/capolylinetaskmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'capolylinetaskmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caPolyLineTaskMenu_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caPolyLineTaskMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caPolyLineTaskMenu_t qt_meta_stringdata_caPolyLineTaskMenu = {
    {
QT_MOC_LITERAL(0, 0, 18), // "caPolyLineTaskMenu"
QT_MOC_LITERAL(1, 19, 9), // "editState"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "caPolyLineTaskMenu\0editState\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caPolyLineTaskMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void caPolyLineTaskMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caPolyLineTaskMenu *_t = static_cast<caPolyLineTaskMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editState(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject caPolyLineTaskMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_caPolyLineTaskMenu.data,
      qt_meta_data_caPolyLineTaskMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caPolyLineTaskMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caPolyLineTaskMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caPolyLineTaskMenu.stringdata0))
        return static_cast<void*>(const_cast< caPolyLineTaskMenu*>(this));
    if (!strcmp(_clname, "QDesignerTaskMenuExtension"))
        return static_cast< QDesignerTaskMenuExtension*>(const_cast< caPolyLineTaskMenu*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.Designer.TaskMenu"))
        return static_cast< QDesignerTaskMenuExtension*>(const_cast< caPolyLineTaskMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int caPolyLineTaskMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_caPolyLineTaskMenuFactory_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caPolyLineTaskMenuFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caPolyLineTaskMenuFactory_t qt_meta_stringdata_caPolyLineTaskMenuFactory = {
    {
QT_MOC_LITERAL(0, 0, 25) // "caPolyLineTaskMenuFactory"

    },
    "caPolyLineTaskMenuFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caPolyLineTaskMenuFactory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void caPolyLineTaskMenuFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject caPolyLineTaskMenuFactory::staticMetaObject = {
    { &QExtensionFactory::staticMetaObject, qt_meta_stringdata_caPolyLineTaskMenuFactory.data,
      qt_meta_data_caPolyLineTaskMenuFactory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caPolyLineTaskMenuFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caPolyLineTaskMenuFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caPolyLineTaskMenuFactory.stringdata0))
        return static_cast<void*>(const_cast< caPolyLineTaskMenuFactory*>(this));
    return QExtensionFactory::qt_metacast(_clname);
}

int caPolyLineTaskMenuFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QExtensionFactory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
