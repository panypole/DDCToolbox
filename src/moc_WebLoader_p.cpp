/****************************************************************************
** Meta object code from reading C++ file 'WebLoader_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "3rdparty/WebLoader/src/WebLoader_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WebLoader_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WebLoader_t {
    QByteArrayData data[18];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebLoader_t qt_meta_stringdata_WebLoader = {
    {
QT_MOC_LITERAL(0, 0, 9), // "WebLoader"
QT_MOC_LITERAL(1, 10, 14), // "uploadProgress"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "downloadProgress"
QT_MOC_LITERAL(4, 43, 16), // "downloadComplete"
QT_MOC_LITERAL(5, 60, 5), // "error"
QT_MOC_LITERAL(6, 66, 12), // "errorDetails"
QT_MOC_LITERAL(7, 79, 14), // "_uploadedBytes"
QT_MOC_LITERAL(8, 94, 11), // "_totalBytes"
QT_MOC_LITERAL(9, 106, 14), // "_recievedBytes"
QT_MOC_LITERAL(10, 121, 14), // "QNetworkReply*"
QT_MOC_LITERAL(11, 136, 6), // "_reply"
QT_MOC_LITERAL(12, 143, 13), // "downloadError"
QT_MOC_LITERAL(13, 157, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(14, 185, 13), // "_networkError"
QT_MOC_LITERAL(15, 199, 17), // "downloadSslErrors"
QT_MOC_LITERAL(16, 217, 16), // "QList<QSslError>"
QT_MOC_LITERAL(17, 234, 7) // "_errors"

    },
    "WebLoader\0uploadProgress\0\0downloadProgress\0"
    "downloadComplete\0error\0errorDetails\0"
    "_uploadedBytes\0_totalBytes\0_recievedBytes\0"
    "QNetworkReply*\0_reply\0downloadError\0"
    "QNetworkReply::NetworkError\0_networkError\0"
    "downloadSslErrors\0QList<QSslError>\0"
    "_errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebLoader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       3,    2,   69,    2, 0x06 /* Public */,
       4,    2,   74,    2, 0x06 /* Public */,
       5,    2,   79,    2, 0x06 /* Public */,
       6,    2,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x08 /* Private */,
       3,    2,   94,    2, 0x08 /* Private */,
       4,    1,   99,    2, 0x08 /* Private */,
      12,    1,  102,    2, 0x08 /* Private */,
      15,    1,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QUrl,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QUrl,    2,    2,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QUrl,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    7,    8,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    9,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void WebLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WebLoader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->uploadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2]))); break;
        case 1: _t->downloadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2]))); break;
        case 2: _t->downloadComplete((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2]))); break;
        case 3: _t->error((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2]))); break;
        case 4: _t->errorDetails((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2]))); break;
        case 5: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->downloadComplete((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->downloadError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 9: _t->downloadSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WebLoader::*)(int , QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebLoader::uploadProgress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WebLoader::*)(int , QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebLoader::downloadProgress)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WebLoader::*)(QByteArray , QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebLoader::downloadComplete)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WebLoader::*)(QString , QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebLoader::error)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WebLoader::*)(QString , QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebLoader::errorDetails)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WebLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_WebLoader.data,
    qt_meta_data_WebLoader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WebLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WebLoader.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int WebLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void WebLoader::uploadProgress(int _t1, QUrl _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WebLoader::downloadProgress(int _t1, QUrl _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WebLoader::downloadComplete(QByteArray _t1, QUrl _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WebLoader::error(QString _t1, QUrl _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WebLoader::errorDetails(QString _t1, QUrl _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
