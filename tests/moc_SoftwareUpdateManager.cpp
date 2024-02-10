/****************************************************************************
** Meta object code from reading C++ file 'SoftwareUpdateManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/utils/SoftwareUpdateManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SoftwareUpdateManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SoftwareUpdateManager_t {
    QByteArrayData data[12];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoftwareUpdateManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoftwareUpdateManager_t qt_meta_stringdata_SoftwareUpdateManager = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SoftwareUpdateManager"
QT_MOC_LITERAL(1, 22, 15), // "updateAvailable"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "requestGracefulShutdown"
QT_MOC_LITERAL(4, 63, 15), // "checkForUpdates"
QT_MOC_LITERAL(5, 79, 11), // "silentCheck"
QT_MOC_LITERAL(6, 91, 19), // "silentCheckDeferred"
QT_MOC_LITERAL(7, 111, 8), // "ms_delay"
QT_MOC_LITERAL(8, 120, 22), // "userRequestedChangelog"
QT_MOC_LITERAL(9, 143, 20), // "userRequestedInstall"
QT_MOC_LITERAL(10, 164, 19), // "silentCheckFinished"
QT_MOC_LITERAL(11, 184, 3) // "url"

    },
    "SoftwareUpdateManager\0updateAvailable\0"
    "\0requestGracefulShutdown\0checkForUpdates\0"
    "silentCheck\0silentCheckDeferred\0"
    "ms_delay\0userRequestedChangelog\0"
    "userRequestedInstall\0silentCheckFinished\0"
    "url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoftwareUpdateManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x0a /* Public */,
       8,    0,   61,    2, 0x0a /* Public */,
       9,    0,   62,    2, 0x0a /* Public */,
      10,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void SoftwareUpdateManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SoftwareUpdateManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateAvailable(); break;
        case 1: _t->requestGracefulShutdown(); break;
        case 2: _t->checkForUpdates(); break;
        case 3: _t->silentCheck(); break;
        case 4: _t->silentCheckDeferred((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->userRequestedChangelog(); break;
        case 6: _t->userRequestedInstall(); break;
        case 7: _t->silentCheckFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SoftwareUpdateManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SoftwareUpdateManager::updateAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SoftwareUpdateManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SoftwareUpdateManager::requestGracefulShutdown)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SoftwareUpdateManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SoftwareUpdateManager.data,
    qt_meta_data_SoftwareUpdateManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SoftwareUpdateManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoftwareUpdateManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SoftwareUpdateManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SoftwareUpdateManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SoftwareUpdateManager::updateAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SoftwareUpdateManager::requestGracefulShutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
