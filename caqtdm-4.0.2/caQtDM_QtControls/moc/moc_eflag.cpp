/****************************************************************************
** Meta object code from reading C++ file 'eflag.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/eflag.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eflag.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EFlag_t {
    QByteArrayData data[14];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EFlag_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EFlag_t qt_meta_stringdata_EFlag = {
    {
QT_MOC_LITERAL(0, 0, 5), // "EFlag"
QT_MOC_LITERAL(1, 6, 7), // "numRows"
QT_MOC_LITERAL(2, 14, 10), // "numColumns"
QT_MOC_LITERAL(3, 25, 13), // "fontScaleMode"
QT_MOC_LITERAL(4, 39, 23), // "ESimpleLabel::ScaleMode"
QT_MOC_LITERAL(5, 63, 10), // "trueColors"
QT_MOC_LITERAL(6, 74, 11), // "falseColors"
QT_MOC_LITERAL(7, 86, 11), // "trueStrings"
QT_MOC_LITERAL(8, 98, 12), // "falseStrings"
QT_MOC_LITERAL(9, 111, 11), // "displayMask"
QT_MOC_LITERAL(10, 123, 12), // "alignmentHor"
QT_MOC_LITERAL(11, 136, 4), // "left"
QT_MOC_LITERAL(12, 141, 5), // "right"
QT_MOC_LITERAL(13, 147, 6) // "center"

    },
    "EFlag\0numRows\0numColumns\0fontScaleMode\0"
    "ESimpleLabel::ScaleMode\0trueColors\0"
    "falseColors\0trueStrings\0falseStrings\0"
    "displayMask\0alignmentHor\0left\0right\0"
    "center"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EFlag[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       1,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095103,
       2, QMetaType::Int, 0x00095103,
       3, 0x80000000 | 4, 0x0009510b,
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095103,

 // enums: name, flags, count, data
      10, 0x0,    3,   42,

 // enum data: key, value
      11, uint(EFlag::left),
      12, uint(EFlag::right),
      13, uint(EFlag::center),

       0        // eod
};

void EFlag::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        EFlag *_t = static_cast<EFlag *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->readNumRows(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->readNumColumns(); break;
        case 2: *reinterpret_cast< ESimpleLabel::ScaleMode*>(_v) = _t->fontScaleMode(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->trueColors(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->falseColors(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->trueStrings(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->falseStrings(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getDisplayMask(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        EFlag *_t = static_cast<EFlag *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNumRows(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setNumColumns(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setFontScaleMode(*reinterpret_cast< ESimpleLabel::ScaleMode*>(_v)); break;
        case 3: _t->setTrueColors(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setFalseColors(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setTrueStrings(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setFalseStrings(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setDisplayMask(*reinterpret_cast< QString*>(_v)); break;
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

static const QMetaObject * const qt_meta_extradata_EFlag[] = {
        &ESimpleLabel::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject EFlag::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EFlag.data,
      qt_meta_data_EFlag,  qt_static_metacall, qt_meta_extradata_EFlag, Q_NULLPTR}
};


const QMetaObject *EFlag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EFlag::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EFlag.stringdata0))
        return static_cast<void*>(const_cast< EFlag*>(this));
    return QWidget::qt_metacast(_clname);
}

int EFlag::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_END_MOC_NAMESPACE
