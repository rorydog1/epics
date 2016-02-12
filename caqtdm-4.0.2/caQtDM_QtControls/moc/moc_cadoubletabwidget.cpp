/****************************************************************************
** Meta object code from reading C++ file 'cadoubletabwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cadoubletabwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cadoubletabwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caDoubleTabWidget_t {
    QByteArrayData data[20];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caDoubleTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caDoubleTabWidget_t qt_meta_stringdata_caDoubleTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "caDoubleTabWidget"
QT_MOC_LITERAL(1, 18, 14), // "currentChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "indx"
QT_MOC_LITERAL(4, 39, 19), // "currentIndexChanged"
QT_MOC_LITERAL(5, 59, 5), // "index"
QT_MOC_LITERAL(6, 65, 15), // "setCurrentIndex"
QT_MOC_LITERAL(7, 81, 6), // "setRow"
QT_MOC_LITERAL(8, 88, 1), // "r"
QT_MOC_LITERAL(9, 90, 6), // "setCol"
QT_MOC_LITERAL(10, 97, 1), // "c"
QT_MOC_LITERAL(11, 99, 7), // "addPage"
QT_MOC_LITERAL(12, 107, 8), // "QWidget*"
QT_MOC_LITERAL(13, 116, 4), // "page"
QT_MOC_LITERAL(14, 121, 10), // "insertPage"
QT_MOC_LITERAL(15, 132, 10), // "removePage"
QT_MOC_LITERAL(16, 143, 15), // "itemsHorizontal"
QT_MOC_LITERAL(17, 159, 13), // "itemsVertical"
QT_MOC_LITERAL(18, 173, 20), // "itemsVerticalPadding"
QT_MOC_LITERAL(19, 194, 12) // "currentIndex"

    },
    "caDoubleTabWidget\0currentChanged\0\0"
    "indx\0currentIndexChanged\0index\0"
    "setCurrentIndex\0setRow\0r\0setCol\0c\0"
    "addPage\0QWidget*\0page\0insertPage\0"
    "removePage\0itemsHorizontal\0itemsVertical\0"
    "itemsVerticalPadding\0currentIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caDoubleTabWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   60,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      14,    2,   72,    2, 0x0a /* Public */,
      15,    1,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,    5,   13,
    QMetaType::Void, QMetaType::Int,    5,

 // properties: name, type, flags
      16, QMetaType::QString, 0x00095003,
      17, QMetaType::QString, 0x00095003,
      18, QMetaType::QString, 0x00095003,
      19, QMetaType::Int, 0x00095103,

       0        // eod
};

void caDoubleTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caDoubleTabWidget *_t = static_cast<caDoubleTabWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCurrentIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setCol((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->addPage((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 6: _t->insertPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 7: _t->removePage((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (caDoubleTabWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&caDoubleTabWidget::currentChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (caDoubleTabWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&caDoubleTabWidget::currentIndexChanged)) {
                *result = 1;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        caDoubleTabWidget *_t = static_cast<caDoubleTabWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getItemsHor(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getItemsVer(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getItemsPadding(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caDoubleTabWidget *_t = static_cast<caDoubleTabWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setItemsHor(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setItemsVer(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setItemsPadding(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject caDoubleTabWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_caDoubleTabWidget.data,
      qt_meta_data_caDoubleTabWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caDoubleTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caDoubleTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caDoubleTabWidget.stringdata0))
        return static_cast<void*>(const_cast< caDoubleTabWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int caDoubleTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void caDoubleTabWidget::currentChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void caDoubleTabWidget::currentIndexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
