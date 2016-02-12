/****************************************************************************
** Meta object code from reading C++ file 'cachoice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cachoice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cachoice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caChoice_t {
    QByteArrayData data[31];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caChoice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caChoice_t qt_meta_stringdata_caChoice = {
    {
QT_MOC_LITERAL(0, 0, 8), // "caChoice"
QT_MOC_LITERAL(1, 9, 7), // "clicked"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "text"
QT_MOC_LITERAL(4, 23, 7), // "channel"
QT_MOC_LITERAL(5, 31, 10), // "foreground"
QT_MOC_LITERAL(6, 42, 10), // "background"
QT_MOC_LITERAL(7, 53, 11), // "bordercolor"
QT_MOC_LITERAL(8, 65, 9), // "alignment"
QT_MOC_LITERAL(9, 75, 12), // "alignmentHor"
QT_MOC_LITERAL(10, 88, 9), // "colorMode"
QT_MOC_LITERAL(11, 98, 7), // "colMode"
QT_MOC_LITERAL(12, 106, 12), // "stackingMode"
QT_MOC_LITERAL(13, 119, 8), // "Stacking"
QT_MOC_LITERAL(14, 128, 8), // "startBit"
QT_MOC_LITERAL(15, 137, 6), // "endBit"
QT_MOC_LITERAL(16, 144, 13), // "fontScaleMode"
QT_MOC_LITERAL(17, 158, 22), // "EPushButton::ScaleMode"
QT_MOC_LITERAL(18, 181, 9), // "elevation"
QT_MOC_LITERAL(19, 191, 9), // "Elevation"
QT_MOC_LITERAL(20, 201, 6), // "on_top"
QT_MOC_LITERAL(21, 208, 5), // "as_is"
QT_MOC_LITERAL(22, 214, 4), // "left"
QT_MOC_LITERAL(23, 219, 5), // "right"
QT_MOC_LITERAL(24, 225, 6), // "center"
QT_MOC_LITERAL(25, 232, 7), // "Default"
QT_MOC_LITERAL(26, 240, 6), // "Static"
QT_MOC_LITERAL(27, 247, 5), // "Alarm"
QT_MOC_LITERAL(28, 253, 3), // "Row"
QT_MOC_LITERAL(29, 257, 6), // "Column"
QT_MOC_LITERAL(30, 264, 9) // "RowColumn"

    },
    "caChoice\0clicked\0\0text\0channel\0"
    "foreground\0background\0bordercolor\0"
    "alignment\0alignmentHor\0colorMode\0"
    "colMode\0stackingMode\0Stacking\0startBit\0"
    "endBit\0fontScaleMode\0EPushButton::ScaleMode\0"
    "elevation\0Elevation\0on_top\0as_is\0left\0"
    "right\0center\0Default\0Static\0Alarm\0Row\0"
    "Column\0RowColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caChoice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      11,   22, // properties
       4,   55, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00095003,
       5, QMetaType::QColor, 0x00095103,
       6, QMetaType::QColor, 0x00095103,
       7, QMetaType::QColor, 0x00095103,
       8, 0x80000000 | 9, 0x0009510b,
      10, 0x80000000 | 11, 0x0009510b,
      12, 0x80000000 | 13, 0x0009500b,
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::Int, 0x00095103,
      16, 0x80000000 | 17, 0x0009500b,
      18, 0x80000000 | 19, 0x0009510b,

 // enums: name, flags, count, data
      19, 0x0,    2,   71,
       9, 0x0,    3,   75,
      11, 0x0,    3,   81,
      13, 0x0,    3,   87,

 // enum data: key, value
      20, uint(caChoice::on_top),
      21, uint(caChoice::as_is),
      22, uint(caChoice::left),
      23, uint(caChoice::right),
      24, uint(caChoice::center),
      25, uint(caChoice::Default),
      26, uint(caChoice::Static),
      27, uint(caChoice::Alarm),
      28, uint(caChoice::Row),
      29, uint(caChoice::Column),
      30, uint(caChoice::RowColumn),

       0        // eod
};

void caChoice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        caChoice *_t = static_cast<caChoice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (caChoice::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&caChoice::clicked)) {
                *result = 0;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        caChoice *_t = static_cast<caChoice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getPV(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getForeground(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getBackground(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->getBordercolor(); break;
        case 4: *reinterpret_cast< alignmentHor*>(_v) = _t->getAlignment(); break;
        case 5: *reinterpret_cast< colMode*>(_v) = _t->getColorMode(); break;
        case 6: *reinterpret_cast< Stacking*>(_v) = _t->getStacking(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getStartBit(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->getEndBit(); break;
        case 9: *reinterpret_cast< EPushButton::ScaleMode*>(_v) = _t->fontScaleMode(); break;
        case 10: *reinterpret_cast< Elevation*>(_v) = _t->getElevation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caChoice *_t = static_cast<caChoice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPV(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setForeground(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setBordercolor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setAlignment(*reinterpret_cast< alignmentHor*>(_v)); break;
        case 5: _t->setColorMode(*reinterpret_cast< colMode*>(_v)); break;
        case 6: _t->setStacking(*reinterpret_cast< Stacking*>(_v)); break;
        case 7: _t->setStartBit(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setEndBit(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setFontScaleModeL(*reinterpret_cast< EPushButton::ScaleMode*>(_v)); break;
        case 10: _t->setElevation(*reinterpret_cast< Elevation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_caChoice[] = {
        &EPushButton::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject caChoice::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_caChoice.data,
      qt_meta_data_caChoice,  qt_static_metacall, qt_meta_extradata_caChoice, Q_NULLPTR}
};


const QMetaObject *caChoice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caChoice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caChoice.stringdata0))
        return static_cast<void*>(const_cast< caChoice*>(this));
    return QWidget::qt_metacast(_clname);
}

int caChoice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
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
void caChoice::clicked(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
