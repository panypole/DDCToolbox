/****************************************************************************
** Meta object code from reading C++ file 'NetworkRequestPrivate_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "3rdparty/WebLoader/src/NetworkRequestPrivate_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetworkRequestPrivate_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkRequestPrivate_t {
    QByteArrayData data[8];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkRequestPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkRequestPrivate_t qt_meta_stringdata_NetworkRequestPrivate = {
    {
QT_MOC_LITERAL(0, 0, 21), // "NetworkRequestPrivate"
QT_MOC_LITERAL(1, 22, 14), // "uploadProgress"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "downloadProgress"
QT_MOC_LITERAL(4, 55, 16), // "downloadComplete"
QT_MOC_LITERAL(5, 72, 8), // "finished"
QT_MOC_LITERAL(6, 81, 5), // "error"
QT_MOC_LITERAL(7, 87, 12) // "errorDetails"

    },
    "NetworkRequestPrivate\0uploadProgress\0"
    "\0downloadProgress\0downloadComplete\0"
    "finished\0error\0errorDetails"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkRequestPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       3,    2,   49,    2, 0x06 /* Public */,
       4,    2,   54,    2, 0x06 /* Public */,
       5,    0,   59,    2, 0x06 /* Public */,
       6,    2,   60,    2, 0x06 /* Public */,
       7,    2,   65,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QUrl,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QUrl,    2,    2,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QUrl,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,    2,    2,

       0        // eod
};

void NetworkRequestPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetworkRequestPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->uploadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2]))); break;
        case 1: _t->downloadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2]))); break;
        case 2: _t->downloadComplete((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2]))); break;
        case 3: _t->finished(); break;
        case 4: _t->error((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2]))); break;
        case 5: _t->errorDetails((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetworkRequestPrivate::*)(int , QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkRequestPrivate::uploadProgress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NetworkRequestPrivate::*)(int , QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkRequestPrivate::downloadProgress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NetworkRequestPrivate::*)(QByteArray , QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkRequestPrivate::downloadComplete)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NetworkRequestPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkRequestPrivate::finished)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NetworkRequestPrivate::*)(QString , QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkRequestPrivate::error)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (NetworkRequestPrivate::*)(QString , QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkRequestPrivate::errorDetails)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetworkRequestPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NetworkRequestPrivate.data,
    qt_meta_data_NetworkRequestPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetworkRequestPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkRequestPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkRequestPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetworkRequestPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void NetworkRequestPrivate::uploadProgress(int _t1, QUrl _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetworkRequestPrivate::downloadProgress(int _t1, QUrl _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NetworkRequestPrivate::downloadComplete(QByteArray _t1, QUrl _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NetworkRequestPrivate::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NetworkRequestPrivate::error(QString _t1, QUrl _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void NetworkRequestPrivate::errorDetails(QString _t1, QUrl _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
