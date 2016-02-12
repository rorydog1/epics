/****************************************************************************
** Meta object code from reading C++ file 'cascriptbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cascriptbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cascriptbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caScriptButton_t {
    QByteArrayData data[20];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caScriptButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caScriptButton_t qt_meta_stringdata_caScriptButton = {
    {
QT_MOC_LITERAL(0, 0, 14), // "caScriptButton"
QT_MOC_LITERAL(1, 15, 18), // "scriptButtonSignal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "buttonToggled"
QT_MOC_LITERAL(4, 49, 19), // "scriptButtonClicked"
QT_MOC_LITERAL(5, 69, 5), // "label"
QT_MOC_LITERAL(6, 75, 10), // "foreground"
QT_MOC_LITERAL(7, 86, 10), // "background"
QT_MOC_LITERAL(8, 97, 13), // "fontScaleMode"
QT_MOC_LITERAL(9, 111, 22), // "EPushButton::ScaleMode"
QT_MOC_LITERAL(10, 134, 13), // "scriptDisplay"
QT_MOC_LITERAL(11, 148, 14), // "defaultDisplay"
QT_MOC_LITERAL(12, 163, 13), // "scriptCommand"
QT_MOC_LITERAL(13, 177, 15), // "scriptParameter"
QT_MOC_LITERAL(14, 193, 9), // "elevation"
QT_MOC_LITERAL(15, 203, 9), // "Elevation"
QT_MOC_LITERAL(16, 213, 6), // "on_top"
QT_MOC_LITERAL(17, 220, 5), // "as_is"
QT_MOC_LITERAL(18, 226, 9), // "Invisible"
QT_MOC_LITERAL(19, 236, 7) // "Visible"

    },
    "caScriptButton\0scriptButtonSignal\0\0"
    "buttonToggled\0scriptButtonClicked\0"
    "label\0foreground\0background\0fontScaleMode\0"
    "EPushButton::ScaleMode\0scriptDisplay\0"
    "defaultDisplay\0scriptCommand\0"
    "scriptParameter\0elevation\0Elevation\0"
    "on_top\0as_is\0Invisible\0Visible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caScriptButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       8,   32, // properties
       2,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QColor, 0x00095103,
       7, QMetaType::QColor, 0x00095103,
       8, 0x80000000 | 9, 0x0009500b,
      10, 0x80000000 | 11, 0x0009510b,
      12, QMetaType::QString, 0x00095103,
      13, QMetaType::QString, 0x00095003,
      14, 0x80000000 | 15, 0x0009510b,

 // enums: name, flags, count, data
      15, 0x0,    2,   64,
      11, 0x0,    2,   68,

 // enum data: key, value
      16, uint(caScriptButton::on_top),
      17, uint(caScriptButton::as_is),
      18, uint(caScriptButton::Invisible),
      19, uint(caScriptButton::Visible),

       0        // eod
};

void caScriptButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caScriptButton *_t = static_cast<caScriptButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scriptButtonSignal(); break;
        case 1: _t->buttonToggled(); break;
        case 2: _t->scriptButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (caScriptButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&caScriptButton::scriptButtonSignal)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        caScriptButton *_t = static_cast<caScriptButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getLabel(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getForeground(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getBackground(); break;
        case 3: *reinterpret_cast< EPushButton::ScaleMode*>(_v) = _t->fontScaleMode(); break;
        case 4: *reinterpret_cast< defaultDisplay*>(_v) = _t->getScriptDisplay(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getScriptCommand(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getScriptParam(); break;
        case 7: *reinterpret_cast< Elevation*>(_v) = _t->getElevation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caScriptButton *_t = static_cast<caScriptButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setForeground(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setFontScaleModeL(*reinterpret_cast< EPushButton::ScaleMode*>(_v)); break;
        case 4: _t->setScriptDisplay(*reinterpret_cast< defaultDisplay*>(_v)); break;
        case 5: _t->setScriptCommand(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setScriptParam(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setElevation(*reinterpret_cast< Elevation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

static const QMetaObject * const qt_meta_extradata_caScriptButton[] = {
        &EPushButton::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject caScriptButton::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_caScriptButton.data,
      qt_meta_data_caScriptButton,  qt_static_metacall, qt_meta_extradata_caScriptButton, Q_NULLPTR}
};


const QMetaObject *caScriptButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caScriptButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caScriptButton.stringdata0))
        return static_cast<void*>(const_cast< caScriptButton*>(this));
    return QWidget::qt_metacast(_clname);
}

int caScriptButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void caScriptButton::scriptButtonSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
