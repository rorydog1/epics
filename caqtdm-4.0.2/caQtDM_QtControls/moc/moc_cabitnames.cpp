/****************************************************************************
** Meta object code from reading C++ file 'cabitnames.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cabitnames.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cabitnames.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_caBitnames_t {
    QByteArrayData data[18];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_caBitnames_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_caBitnames_t qt_meta_stringdata_caBitnames = {
    {
QT_MOC_LITERAL(0, 0, 10), // "caBitnames"
QT_MOC_LITERAL(1, 11, 11), // "channelEnum"
QT_MOC_LITERAL(2, 23, 12), // "channelValue"
QT_MOC_LITERAL(3, 36, 8), // "startBit"
QT_MOC_LITERAL(4, 45, 6), // "endBit"
QT_MOC_LITERAL(5, 52, 10), // "foreground"
QT_MOC_LITERAL(6, 63, 10), // "background"
QT_MOC_LITERAL(7, 74, 9), // "alignment"
QT_MOC_LITERAL(8, 84, 19), // "EFlag::alignmentHor"
QT_MOC_LITERAL(9, 104, 13), // "fontScaleMode"
QT_MOC_LITERAL(10, 118, 23), // "ESimpleLabel::ScaleMode"
QT_MOC_LITERAL(11, 142, 7), // "numRows"
QT_MOC_LITERAL(12, 150, 10), // "numColumns"
QT_MOC_LITERAL(13, 161, 10), // "trueColors"
QT_MOC_LITERAL(14, 172, 11), // "falseColors"
QT_MOC_LITERAL(15, 184, 11), // "trueStrings"
QT_MOC_LITERAL(16, 196, 12), // "falseStrings"
QT_MOC_LITERAL(17, 209, 11) // "displayMask"

    },
    "caBitnames\0channelEnum\0channelValue\0"
    "startBit\0endBit\0foreground\0background\0"
    "alignment\0EFlag::alignmentHor\0"
    "fontScaleMode\0ESimpleLabel::ScaleMode\0"
    "numRows\0numColumns\0trueColors\0falseColors\0"
    "trueStrings\0falseStrings\0displayMask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_caBitnames[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      15,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QString, 0x00095003,
       3, QMetaType::Int, 0x00095103,
       4, QMetaType::Int, 0x00095103,
       5, QMetaType::QColor, 0x00095003,
       6, QMetaType::QColor, 0x00095003,
       7, 0x80000000 | 8, 0x0009510b,
       9, 0x80000000 | 10, 0x0009500b,
      11, QMetaType::Int, 0x00094103,
      12, QMetaType::Int, 0x00094103,
      13, QMetaType::QString, 0x00094103,
      14, QMetaType::QString, 0x00094103,
      15, QMetaType::QString, 0x00094103,
      16, QMetaType::QString, 0x00094103,
      17, QMetaType::QString, 0x00094103,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

void caBitnames::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        caBitnames *_t = static_cast<caBitnames *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getEnumPV(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getValuePV(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getStartBit(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getEndBit(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getTrueColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getFalseColor(); break;
        case 6: *reinterpret_cast< EFlag::alignmentHor*>(_v) = _t->getAlignment(); break;
        case 7: *reinterpret_cast< ESimpleLabel::ScaleMode*>(_v) = _t->fontScaleModeL(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->readNumRows(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->readNumColumns(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->trueColors(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->falseColors(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->trueStrings(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->falseStrings(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->getDisplayMask(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        caBitnames *_t = static_cast<caBitnames *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnumPV(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setValuePV(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setStartBit(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setEndBit(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setTrueColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setFalseColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setAlignment(*reinterpret_cast< EFlag::alignmentHor*>(_v)); break;
        case 7: _t->setFontScaleModeL(*reinterpret_cast< ESimpleLabel::ScaleMode*>(_v)); break;
        case 8: _t->setNumRows(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setNumColumns(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setTrueColors(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setFalseColors(*reinterpret_cast< QString*>(_v)); break;
        case 12: _t->setTrueStrings(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setFalseStrings(*reinterpret_cast< QString*>(_v)); break;
        case 14: _t->setDisplayMask(*reinterpret_cast< QString*>(_v)); break;
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

static const QMetaObject * const qt_meta_extradata_caBitnames[] = {
        &EFlag::staticMetaObject,
    &ESimpleLabel::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject caBitnames::staticMetaObject = {
    { &EFlag::staticMetaObject, qt_meta_stringdata_caBitnames.data,
      qt_meta_data_caBitnames,  qt_static_metacall, qt_meta_extradata_caBitnames, Q_NULLPTR}
};


const QMetaObject *caBitnames::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caBitnames::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_caBitnames.stringdata0))
        return static_cast<void*>(const_cast< caBitnames*>(this));
    return EFlag::qt_metacast(_clname);
}

int caBitnames::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EFlag::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
