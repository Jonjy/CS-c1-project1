/****************************************************************************
** Meta object code from reading C++ file 'orderWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../IRobot/orderWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'orderWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrderWindow_t {
    QByteArrayData data[24];
    char stringdata0[639];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrderWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrderWindow_t qt_meta_stringdata_OrderWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OrderWindow"
QT_MOC_LITERAL(1, 12, 27), // "on_placeOrderButton_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(4, 65, 29), // "on_robotASpinBox_valueChanged"
QT_MOC_LITERAL(5, 95, 3), // "qty"
QT_MOC_LITERAL(6, 99, 37), // "on_robotAComboBox_currentInde..."
QT_MOC_LITERAL(7, 137, 5), // "index"
QT_MOC_LITERAL(8, 143, 29), // "on_robotBSpinBox_valueChanged"
QT_MOC_LITERAL(9, 173, 37), // "on_robotBComboBox_currentInde..."
QT_MOC_LITERAL(10, 211, 29), // "on_robotCSpinBox_valueChanged"
QT_MOC_LITERAL(11, 241, 37), // "on_robotCComboBox_currentInde..."
QT_MOC_LITERAL(12, 279, 40), // "on_billingAddressLineOne_edit..."
QT_MOC_LITERAL(13, 320, 40), // "on_billingAddressLineTwo_edit..."
QT_MOC_LITERAL(14, 361, 22), // "on_yesCheckBox_toggled"
QT_MOC_LITERAL(15, 384, 7), // "checked"
QT_MOC_LITERAL(16, 392, 40), // "on_creditCardTypeBox_currentI..."
QT_MOC_LITERAL(17, 433, 39), // "on_creditCardNumberLine_editi..."
QT_MOC_LITERAL(18, 473, 37), // "on_creditCardNameLine_editing..."
QT_MOC_LITERAL(19, 511, 32), // "on_dateMonthLine_editingFinished"
QT_MOC_LITERAL(20, 544, 31), // "on_dateYearLine_editingFinished"
QT_MOC_LITERAL(21, 576, 26), // "on_cvvLine_editingFinished"
QT_MOC_LITERAL(22, 603, 21), // "connectToCustomerList"
QT_MOC_LITERAL(23, 625, 13) // "closeDatabase"

    },
    "OrderWindow\0on_placeOrderButton_clicked\0"
    "\0on_cancelButton_clicked\0"
    "on_robotASpinBox_valueChanged\0qty\0"
    "on_robotAComboBox_currentIndexChanged\0"
    "index\0on_robotBSpinBox_valueChanged\0"
    "on_robotBComboBox_currentIndexChanged\0"
    "on_robotCSpinBox_valueChanged\0"
    "on_robotCComboBox_currentIndexChanged\0"
    "on_billingAddressLineOne_editingFinished\0"
    "on_billingAddressLineTwo_editingFinished\0"
    "on_yesCheckBox_toggled\0checked\0"
    "on_creditCardTypeBox_currentIndexChanged\0"
    "on_creditCardNumberLine_editingFinished\0"
    "on_creditCardNameLine_editingFinished\0"
    "on_dateMonthLine_editingFinished\0"
    "on_dateYearLine_editingFinished\0"
    "on_cvvLine_editingFinished\0"
    "connectToCustomerList\0closeDatabase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrderWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x08 /* Private */,
       3,    0,  110,    2, 0x08 /* Private */,
       4,    1,  111,    2, 0x08 /* Private */,
       6,    1,  114,    2, 0x08 /* Private */,
       8,    1,  117,    2, 0x08 /* Private */,
       9,    1,  120,    2, 0x08 /* Private */,
      10,    1,  123,    2, 0x08 /* Private */,
      11,    1,  126,    2, 0x08 /* Private */,
      12,    0,  129,    2, 0x08 /* Private */,
      13,    0,  130,    2, 0x08 /* Private */,
      14,    1,  131,    2, 0x08 /* Private */,
      16,    1,  134,    2, 0x08 /* Private */,
      17,    0,  137,    2, 0x08 /* Private */,
      18,    0,  138,    2, 0x08 /* Private */,
      19,    0,  139,    2, 0x08 /* Private */,
      20,    0,  140,    2, 0x08 /* Private */,
      21,    0,  141,    2, 0x08 /* Private */,
      22,    0,  142,    2, 0x08 /* Private */,
      23,    0,  143,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void OrderWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OrderWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_placeOrderButton_clicked(); break;
        case 1: _t->on_cancelButton_clicked(); break;
        case 2: _t->on_robotASpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_robotAComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_robotBSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_robotBComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_robotCSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_robotCComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_billingAddressLineOne_editingFinished(); break;
        case 9: _t->on_billingAddressLineTwo_editingFinished(); break;
        case 10: _t->on_yesCheckBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_creditCardTypeBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_creditCardNumberLine_editingFinished(); break;
        case 13: _t->on_creditCardNameLine_editingFinished(); break;
        case 14: _t->on_dateMonthLine_editingFinished(); break;
        case 15: _t->on_dateYearLine_editingFinished(); break;
        case 16: _t->on_cvvLine_editingFinished(); break;
        case 17: { bool _r = _t->connectToCustomerList();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->closeDatabase(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OrderWindow::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_OrderWindow.data,
    qt_meta_data_OrderWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OrderWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrderWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrderWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OrderWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE