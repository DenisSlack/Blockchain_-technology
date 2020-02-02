/****************************************************************************
** Meta object code from reading C++ file 'transaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../wallet/transaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_transaction_t {
    QByteArrayData data[23];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_transaction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_transaction_t qt_meta_stringdata_transaction = {
    {
QT_MOC_LITERAL(0, 0, 11), // "transaction"
QT_MOC_LITERAL(1, 12, 11), // "RecieveData"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "log"
QT_MOC_LITERAL(4, 29, 7), // "balance"
QT_MOC_LITERAL(5, 37, 3), // "pub"
QT_MOC_LITERAL(6, 41, 4), // "priv"
QT_MOC_LITERAL(7, 46, 14), // "GetlatestBlock"
QT_MOC_LITERAL(8, 61, 5), // "Block"
QT_MOC_LITERAL(9, 67, 12), // "HashingBlock"
QT_MOC_LITERAL(10, 80, 4), // "prev"
QT_MOC_LITERAL(11, 85, 7), // "Signing"
QT_MOC_LITERAL(12, 93, 8), // "NewBlock"
QT_MOC_LITERAL(13, 102, 15), // "AddBlocktoChain"
QT_MOC_LITERAL(14, 118, 4), // "path"
QT_MOC_LITERAL(15, 123, 7), // "myblock"
QT_MOC_LITERAL(16, 131, 13), // "UpdateBalance"
QT_MOC_LITERAL(17, 145, 5), // "Login"
QT_MOC_LITERAL(18, 151, 10), // "NewBalance"
QT_MOC_LITERAL(19, 162, 14), // "AcceptNewBlock"
QT_MOC_LITERAL(20, 177, 8), // "newBlock"
QT_MOC_LITERAL(21, 186, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(22, 208, 23) // "on_pushButton_2_clicked"

    },
    "transaction\0RecieveData\0\0log\0balance\0"
    "pub\0priv\0GetlatestBlock\0Block\0"
    "HashingBlock\0prev\0Signing\0NewBlock\0"
    "AddBlocktoChain\0path\0myblock\0UpdateBalance\0"
    "Login\0NewBalance\0AcceptNewBlock\0"
    "newBlock\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_transaction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   59,    2, 0x0a /* Public */,
       7,    0,   68,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      11,    1,   72,    2, 0x0a /* Public */,
      13,    2,   75,    2, 0x0a /* Public */,
      16,    2,   80,    2, 0x0a /* Public */,
      19,    1,   85,    2, 0x0a /* Public */,
      21,    0,   88,    2, 0x08 /* Private */,
      22,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,
    0x80000000 | 8,
    QMetaType::QString, 0x80000000 | 8,   10,
    QMetaType::QString, 0x80000000 | 8,   12,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   18,
    QMetaType::Bool, 0x80000000 | 8,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void transaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<transaction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RecieveData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: { Block _r = _t->GetlatestBlock();
            if (_a[0]) *reinterpret_cast< Block*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->HashingBlock((*reinterpret_cast< Block(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->Signing((*reinterpret_cast< Block(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->AddBlocktoChain((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Block(*)>(_a[2]))); break;
        case 5: _t->UpdateBalance((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: { bool _r = _t->AcceptNewBlock((*reinterpret_cast< Block(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject transaction::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_transaction.data,
    qt_meta_data_transaction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *transaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *transaction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_transaction.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int transaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
