/****************************************************************************
** Meta object code from reading C++ file 'networkaccess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/networkaccess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkaccess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_NetworkAccess_t {
    QByteArrayData data[8];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkAccess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkAccess_t qt_meta_stringdata_NetworkAccess = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NetworkAccess"
QT_MOC_LITERAL(1, 14, 12), // "networkError"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "requestFinished"
QT_MOC_LITERAL(4, 44, 11), // "finishReply"
QT_MOC_LITERAL(5, 56, 10), // "parseError"
QT_MOC_LITERAL(6, 67, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(7, 95, 5) // "error"

    },
    "NetworkAccess\0networkError\0\0requestFinished\0"
    "finishReply\0parseError\0"
    "QNetworkReply::NetworkError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkAccess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   38,    2, 0x09 /* Protected */,
       5,    1,   39,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QString, 0x80000000 | 6,    7,

       0        // eod
};

void NetworkAccess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkAccess *_t = static_cast<NetworkAccess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->networkError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestFinished(); break;
        case 2: _t->finishReply(); break;
        case 3: { QString _r = _t->parseError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (NetworkAccess::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkAccess::networkError)) {
                *result = 0;
            }
        }
        {
            typedef void (NetworkAccess::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&NetworkAccess::requestFinished)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject NetworkAccess::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NetworkAccess.data,
      qt_meta_data_NetworkAccess,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NetworkAccess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkAccess::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkAccess.stringdata0))
        return static_cast<void*>(const_cast< NetworkAccess*>(this));
    return QObject::qt_metacast(_clname);
}

int NetworkAccess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void NetworkAccess::networkError(const QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetworkAccess::requestFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
