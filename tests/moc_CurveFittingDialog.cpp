/****************************************************************************
** Meta object code from reading C++ file 'CurveFittingDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/widget/CurveFittingDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CurveFittingDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CurveFittingDialog_t {
    QByteArrayData data[12];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CurveFittingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CurveFittingDialog_t qt_meta_stringdata_CurveFittingDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "CurveFittingDialog"
QT_MOC_LITERAL(1, 19, 6), // "accept"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "parseCsv"
QT_MOC_LITERAL(4, 36, 25), // "updateSupportedProperties"
QT_MOC_LITERAL(5, 62, 5), // "index"
QT_MOC_LITERAL(6, 68, 17), // "setWindowExpanded"
QT_MOC_LITERAL(7, 86, 1), // "b"
QT_MOC_LITERAL(8, 88, 17), // "updatePreviewPlot"
QT_MOC_LITERAL(9, 106, 18), // "contextMenuRequest"
QT_MOC_LITERAL(10, 125, 3), // "pos"
QT_MOC_LITERAL(11, 129, 10) // "moveLegend"

    },
    "CurveFittingDialog\0accept\0\0parseCsv\0"
    "updateSupportedProperties\0index\0"
    "setWindowExpanded\0b\0updatePreviewPlot\0"
    "contextMenuRequest\0pos\0moveLegend"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CurveFittingDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x09 /* Protected */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    1,   54,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    1,   58,    2, 0x08 /* Private */,
      11,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void,

       0        // eod
};

void CurveFittingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CurveFittingDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->parseCsv(); break;
        case 2: _t->updateSupportedProperties((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setWindowExpanded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updatePreviewPlot(); break;
        case 5: _t->contextMenuRequest((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 6: _t->moveLegend(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CurveFittingDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CurveFittingDialog.data,
    qt_meta_data_CurveFittingDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CurveFittingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CurveFittingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CurveFittingDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CurveFittingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
