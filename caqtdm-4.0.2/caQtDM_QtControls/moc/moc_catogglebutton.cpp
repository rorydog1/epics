/****************************************************************************
** Meta object code from reading C++ file 'catogglebutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/catogglebutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'catogglebutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caToggleButton_t {
    QByteArrayData data[27];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caToggleButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caToggleButton_t qt_meta_stringdata_caToggleButton = {
    {
QT_MOC_LITERAL(0, 0, 14), // "caToggleButton"
QT_MOC_LITERAL(1, 15, 18), // "toggleButtonSignal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "checked"
QT_MOC_LITERAL(4, 43, 13), // "buttonToggled"
QT_MOC_LITERAL(5, 57, 11), // "rescaleFont"
QT_MOC_LITERAL(6, 69, 7), // "newText"
QT_MOC_LITERAL(7, 77, 8), // "tristate"
QT_MOC_LITERAL(8, 86, 7), // "channel"
QT_MOC_LITERAL(9, 94, 10), // "foreground"
QT_MOC_LITERAL(10, 105, 10), // "background"
QT_MOC_LITERAL(11, 116, 13), // "fontScaleMode"
QT_MOC_LITERAL(12, 130, 9), // "ScaleMode"
QT_MOC_LITERAL(13, 140, 9), // "colorMode"
QT_MOC_LITERAL(14, 150, 7), // "colMode"
QT_MOC_LITERAL(15, 158, 9), // "trueValue"
QT_MOC_LITERAL(16, 168, 10), // "falseValue"
QT_MOC_LITERAL(17, 179, 9), // "elevation"
QT_MOC_LITERAL(18, 189, 9), // "Elevation"
QT_MOC_LITERAL(19, 199, 6), // "on_top"
QT_MOC_LITERAL(20, 206, 5), // "as_is"
QT_MOC_LITERAL(21, 212, 7), // "Default"
QT_MOC_LITERAL(22, 220, 6), // "Static"
QT_MOC_LITERAL(23, 227, 5), // "Alarm"
QT_MOC_LITERAL(24, 233, 4), // "None"
QT_MOC_LITERAL(25, 238, 6), // "Height"
QT_MOC_LITERAL(26, 245, 14) // "WidthAndHeight"

    },
    "caToggleButton\0toggleButtonSignal\0\0"
    "checked\0buttonToggled\0rescaleFont\0"
    "newText\0tristate\0channel\0foreground\0"
    "background\0fontScaleMode\0ScaleMode\0"
    "colorMode\0colMode\0trueValue\0falseValue\0"
    "elevation\0Elevation\0on_top\0as_is\0"
    "Default\0Static\0Alarm\0None\0Height\0"
    "WidthAndHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caToggleButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       9,   36, // properties
       3,   63, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x08 /* Private */,
       5,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00094103,
       8, QMetaType::QString, 0x00095003,
       9, QMetaType::QColor, 0x00095103,
      10, QMetaType::QColor, 0x00095103,
      11, 0x80000000 | 12, 0x0009500b,
      13, 0x80000000 | 14, 0x0009510b,
      15, QMetaType::QString, 0x00095103,
      16, QMetaType::QString, 0x00095103,
      17, 0x80000000 | 18, 0x0009510b,

 // enums: name, flags, count, data
      18, 0x0,    2,   75,
      14, 0x0,    3,   79,
      12, 0x0,    3,   85,

 // enum data: key, value
      19, uint(caToggleButton::on_top),
      20, uint(caToggleButton::as_is),
      21, uint(caToggleButton::Default),
      22, uint(caToggleButton::Static),
      23, uint(caToggleButton::Alarm),
      24, uint(caToggleButton::None),
      25, uint(caToggleButton::Height),
      26, uint(caToggleButton::WidthAndHeight),

       0        // eod
};

void caToggleButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caToggleButton *_t = static_cast<caToggleButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleButtonSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->buttonToggled(); break;
        case 2: _t->rescaleFont((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (caToggleButton::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&caToggleButton::toggleButtonSignal)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        caToggleButton *_t = static_cast<caToggleButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isTristate(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getPV(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getForeground(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBackground(); break;
        case 4: *reinterpret_cast< ScaleMode*>(_v) = _t->fontScaleMode(); break;
        case 5: *reinterpret_cast< colMode*>(_v) = _t->getColorMode(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getTrueValue(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getFalseValue(); break;
        case 8: *reinterpret_cast< Elevation*>(_v) = _t->getElevation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caToggleButton *_t = static_cast<caToggleButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTristate(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setPV(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setForeground(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setFontScaleModeL(*reinterpret_cast< ScaleMode*>(_v)); break;
        case 5: _t->setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 6: _t->setTrueValue(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setFalseValue(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setElevation(*reinterpret_cast< Elevation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject caToggleButton::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_caToggleButton.data,
      qt_meta_data_caToggleButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *caToggleButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caToggleButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caToggleButton.stringdata0))
        return static_cast<void*>(const_cast< caToggleButton*>(this));
    if (!strcmp(_clname, "FontScalingWidget"))
        return static_cast< FontScalingWidget*>(const_cast< caToggleButton*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int caToggleButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
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
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void caToggleButton::toggleButtonSignal(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
