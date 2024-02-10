/****************************************************************************
** Meta object code from reading C++ file 'FilterModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "model/FilterModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FilterModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FilterModel_t {
    QByteArrayData data[9];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilterModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilterModel_t qt_meta_stringdata_FilterModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FilterModel"
QT_MOC_LITERAL(1, 12, 12), // "filterEdited"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "DeflatedBiquad"
QT_MOC_LITERAL(4, 41, 8), // "previous"
QT_MOC_LITERAL(5, 50, 7), // "current"
QT_MOC_LITERAL(6, 58, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 70, 5), // "index"
QT_MOC_LITERAL(8, 76, 24) // "notifyExternalDataChange"

    },
    "FilterModel\0filterEdited\0\0DeflatedBiquad\0"
    "previous\0current\0QModelIndex\0index\0"
    "notifyExternalDataChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilterModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 6,    4,    5,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 6,    4,    5,    7,

       0        // eod
};

void FilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FilterModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->filterEdited((*reinterpret_cast< DeflatedBiquad(*)>(_a[1])),(*reinterpret_cast< DeflatedBiquad(*)>(_a[2])),(*reinterpret_cast< QModelIndex(*)>(_a[3]))); break;
        case 1: _t->notifyExternalDataChange((*reinterpret_cast< DeflatedBiquad(*)>(_a[1])),(*reinterpret_cast< DeflatedBiquad(*)>(_a[2])),(*reinterpret_cast< QModelIndex(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FilterModel::*)(DeflatedBiquad , DeflatedBiquad , QModelIndex );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FilterModel::filterEdited)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FilterModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractTableModel::staticMetaObject>(),
    qt_meta_stringdata_FilterModel.data,
    qt_meta_data_FilterModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FilterModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int FilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void FilterModel::filterEdited(DeflatedBiquad _t1, DeflatedBiquad _t2, QModelIndex _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
