/****************************************************************************
** Meta object code from reading C++ file 'QSimpleUpdater.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/3rdparty/QSimpleUpdater/include/QSimpleUpdater.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QSimpleUpdater.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QSimpleUpdater_t {
    QByteArrayData data[29];
    char stringdata0[389];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSimpleUpdater_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSimpleUpdater_t qt_meta_stringdata_QSimpleUpdater = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QSimpleUpdater"
QT_MOC_LITERAL(1, 15, 16), // "checkingFinished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "url"
QT_MOC_LITERAL(4, 37, 14), // "startedInstall"
QT_MOC_LITERAL(5, 52, 17), // "appcastDownloaded"
QT_MOC_LITERAL(6, 70, 4), // "data"
QT_MOC_LITERAL(7, 75, 16), // "downloadFinished"
QT_MOC_LITERAL(8, 92, 8), // "filepath"
QT_MOC_LITERAL(9, 101, 15), // "checkForUpdates"
QT_MOC_LITERAL(10, 117, 13), // "setModuleName"
QT_MOC_LITERAL(11, 131, 4), // "name"
QT_MOC_LITERAL(12, 136, 17), // "setNotifyOnUpdate"
QT_MOC_LITERAL(13, 154, 6), // "notify"
QT_MOC_LITERAL(14, 161, 17), // "setNotifyOnFinish"
QT_MOC_LITERAL(15, 179, 14), // "setPlatformKey"
QT_MOC_LITERAL(16, 194, 8), // "platform"
QT_MOC_LITERAL(17, 203, 16), // "setModuleVersion"
QT_MOC_LITERAL(18, 220, 7), // "version"
QT_MOC_LITERAL(19, 228, 20), // "setDownloaderEnabled"
QT_MOC_LITERAL(20, 249, 7), // "enabled"
QT_MOC_LITERAL(21, 257, 18), // "setUserAgentString"
QT_MOC_LITERAL(22, 276, 5), // "agent"
QT_MOC_LITERAL(23, 282, 19), // "setUseCustomAppcast"
QT_MOC_LITERAL(24, 302, 13), // "customAppcast"
QT_MOC_LITERAL(25, 316, 29), // "setUseCustomInstallProcedures"
QT_MOC_LITERAL(26, 346, 6), // "custom"
QT_MOC_LITERAL(27, 353, 18), // "setMandatoryUpdate"
QT_MOC_LITERAL(28, 372, 16) // "mandatory_update"

    },
    "QSimpleUpdater\0checkingFinished\0\0url\0"
    "startedInstall\0appcastDownloaded\0data\0"
    "downloadFinished\0filepath\0checkForUpdates\0"
    "setModuleName\0name\0setNotifyOnUpdate\0"
    "notify\0setNotifyOnFinish\0setPlatformKey\0"
    "platform\0setModuleVersion\0version\0"
    "setDownloaderEnabled\0enabled\0"
    "setUserAgentString\0agent\0setUseCustomAppcast\0"
    "customAppcast\0setUseCustomInstallProcedures\0"
    "custom\0setMandatoryUpdate\0mandatory_update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSimpleUpdater[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    1,   92,    2, 0x06 /* Public */,
       5,    2,   95,    2, 0x06 /* Public */,
       7,    2,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  105,    2, 0x0a /* Public */,
      10,    2,  108,    2, 0x0a /* Public */,
      12,    2,  113,    2, 0x0a /* Public */,
      14,    2,  118,    2, 0x0a /* Public */,
      15,    2,  123,    2, 0x0a /* Public */,
      17,    2,  128,    2, 0x0a /* Public */,
      19,    2,  133,    2, 0x0a /* Public */,
      21,    2,  138,    2, 0x0a /* Public */,
      23,    2,  143,    2, 0x0a /* Public */,
      25,    2,  148,    2, 0x0a /* Public */,
      27,    2,  153,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,   28,

       0        // eod
};

void QSimpleUpdater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QSimpleUpdater *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->checkingFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->startedInstall((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->appcastDownloaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: _t->downloadFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->checkForUpdates((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setModuleName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->setNotifyOnUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 7: _t->setNotifyOnFinish((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 8: _t->setPlatformKey((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->setModuleVersion((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->setDownloaderEnabled((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 11: _t->setUserAgentString((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->setUseCustomAppcast((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 13: _t->setUseCustomInstallProcedures((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 14: _t->setMandatoryUpdate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QSimpleUpdater::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimpleUpdater::checkingFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QSimpleUpdater::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimpleUpdater::startedInstall)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QSimpleUpdater::*)(const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimpleUpdater::appcastDownloaded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QSimpleUpdater::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSimpleUpdater::downloadFinished)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QSimpleUpdater::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QSimpleUpdater.data,
    qt_meta_data_QSimpleUpdater,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QSimpleUpdater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSimpleUpdater::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QSimpleUpdater.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QSimpleUpdater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QSimpleUpdater::checkingFinished(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSimpleUpdater::startedInstall(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSimpleUpdater::appcastDownloaded(const QString & _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSimpleUpdater::downloadFinished(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
