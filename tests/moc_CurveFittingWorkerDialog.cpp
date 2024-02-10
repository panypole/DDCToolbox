/****************************************************************************
** Meta object code from reading C++ file 'CurveFittingWorkerDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/widget/CurveFittingWorkerDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CurveFittingWorkerDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CurveFittingWorkerDialog_t {
    QByteArrayData data[13];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurveFittingWorkerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurveFittingWorkerDialog_t qt_meta_stringdata_CurveFittingWorkerDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "CurveFittingWorkerDialog"
QT_MOC_LITERAL(1, 25, 9), // "beginWork"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "workerFinished"
QT_MOC_LITERAL(4, 51, 11), // "mseReceived"
QT_MOC_LITERAL(5, 63, 3), // "mse"
QT_MOC_LITERAL(6, 67, 13), // "graphReceived"
QT_MOC_LITERAL(7, 81, 19), // "std::vector<double>"
QT_MOC_LITERAL(8, 101, 4), // "temp"
QT_MOC_LITERAL(9, 106, 12), // "stageChanged"
QT_MOC_LITERAL(10, 119, 5), // "stage"
QT_MOC_LITERAL(11, 125, 34), // "CurveFittingOptions::Algorith..."
QT_MOC_LITERAL(12, 160, 4) // "algo"

    },
    "CurveFittingWorkerDialog\0beginWork\0\0"
    "workerFinished\0mseReceived\0mse\0"
    "graphReceived\0std::vector<double>\0"
    "temp\0stageChanged\0stage\0"
    "CurveFittingOptions::AlgorithmType\0"
    "algo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurveFittingWorkerDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       9,    2,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::UInt, 0x80000000 | 11,   10,   12,

       0        // eod
};

void CurveFittingWorkerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CurveFittingWorkerDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->beginWork(); break;
        case 1: _t->workerFinished(); break;
        case 2: _t->mseReceived((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->graphReceived((*reinterpret_cast< std::vector<double>(*)>(_a[1]))); break;
        case 4: _t->stageChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< CurveFittingOptions::AlgorithmType(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
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
            using _t = void (CurveFittingWorkerDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurveFittingWorkerDialog::beginWork)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CurveFittingWorkerDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CurveFittingWorkerDialog.data,
    qt_meta_data_CurveFittingWorkerDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CurveFittingWorkerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurveFittingWorkerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CurveFittingWorkerDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CurveFittingWorkerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void CurveFittingWorkerDialog::beginWork()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
