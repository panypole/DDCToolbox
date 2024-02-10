/****************************************************************************
** Meta object code from reading C++ file 'CurveFittingWorker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "utils/CurveFittingWorker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CurveFittingWorker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CurveFittingWorker_t {
    QByteArrayData data[12];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurveFittingWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurveFittingWorker_t qt_meta_stringdata_CurveFittingWorker = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CurveFittingWorker"
QT_MOC_LITERAL(1, 19, 11), // "mseReceived"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "fVar"
QT_MOC_LITERAL(4, 37, 13), // "graphReceived"
QT_MOC_LITERAL(5, 51, 19), // "std::vector<double>"
QT_MOC_LITERAL(6, 71, 12), // "stageChanged"
QT_MOC_LITERAL(7, 84, 5), // "stage"
QT_MOC_LITERAL(8, 90, 34), // "CurveFittingOptions::Algorith..."
QT_MOC_LITERAL(9, 125, 4), // "algo"
QT_MOC_LITERAL(10, 130, 8), // "finished"
QT_MOC_LITERAL(11, 139, 3) // "run"

    },
    "CurveFittingWorker\0mseReceived\0\0fVar\0"
    "graphReceived\0std::vector<double>\0"
    "stageChanged\0stage\0"
    "CurveFittingOptions::AlgorithmType\0"
    "algo\0finished\0run"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurveFittingWorker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    2,   45,    2, 0x06 /* Public */,
      10,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 8,    7,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CurveFittingWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CurveFittingWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mseReceived((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->graphReceived((*reinterpret_cast< std::vector<double>(*)>(_a[1]))); break;
        case 2: _t->stageChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< CurveFittingOptions::AlgorithmType(*)>(_a[2]))); break;
        case 3: _t->finished(); break;
        case 4: _t->run(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CurveFittingOptions::AlgorithmType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CurveFittingWorker::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveFittingWorker::mseReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CurveFittingWorker::*)(std::vector<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveFittingWorker::graphReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CurveFittingWorker::*)(uint , CurveFittingOptions::AlgorithmType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveFittingWorker::stageChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CurveFittingWorker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveFittingWorker::finished)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CurveFittingWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CurveFittingWorker.data,
    qt_meta_data_CurveFittingWorker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CurveFittingWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurveFittingWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CurveFittingWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CurveFittingWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CurveFittingWorker::mseReceived(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CurveFittingWorker::graphReceived(std::vector<double> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CurveFittingWorker::stageChanged(uint _t1, CurveFittingOptions::AlgorithmType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CurveFittingWorker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
