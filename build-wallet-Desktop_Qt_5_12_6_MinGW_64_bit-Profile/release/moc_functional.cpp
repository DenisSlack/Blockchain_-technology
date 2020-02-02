/****************************************************************************
** Meta object code from reading C++ file 'functional.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../wallet/functional.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'functional.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_functional_t {
    QByteArrayData data[23];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_functional_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_functional_t qt_meta_stringdata_functional = {
    {
QT_MOC_LITERAL(0, 0, 10), // "functional"
QT_MOC_LITERAL(1, 11, 13), // "GoTransaction"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "log"
QT_MOC_LITERAL(4, 30, 7), // "balance"
QT_MOC_LITERAL(5, 38, 3), // "pub"
QT_MOC_LITERAL(6, 42, 4), // "priv"
QT_MOC_LITERAL(7, 47, 11), // "RecieveData"
QT_MOC_LITERAL(8, 59, 3), // "str"
QT_MOC_LITERAL(9, 63, 15), // "Synchronization"
QT_MOC_LITERAL(10, 79, 4), // "path"
QT_MOC_LITERAL(11, 84, 13), // "ReadLastBlock"
QT_MOC_LITERAL(12, 98, 5), // "Block"
QT_MOC_LITERAL(13, 104, 13), // "Find_Majority"
QT_MOC_LITERAL(14, 118, 5), // "chain"
QT_MOC_LITERAL(15, 124, 14), // "QVector<chain>"
QT_MOC_LITERAL(16, 139, 4), // "vars"
QT_MOC_LITERAL(17, 144, 11), // "AnalizChain"
QT_MOC_LITERAL(18, 156, 7), // "GetHash"
QT_MOC_LITERAL(19, 164, 4), // "temp"
QT_MOC_LITERAL(20, 169, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(21, 191, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(22, 215, 23) // "on_pushButton_3_clicked"

    },
    "functional\0GoTransaction\0\0log\0balance\0"
    "pub\0priv\0RecieveData\0str\0Synchronization\0"
    "path\0ReadLastBlock\0Block\0Find_Majority\0"
    "chain\0QVector<chain>\0vars\0AnalizChain\0"
    "GetHash\0temp\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_functional[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   73,    2, 0x0a /* Public */,
       9,    1,   76,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x0a /* Public */,
      17,    1,   85,    2, 0x0a /* Public */,
      18,    1,   88,    2, 0x0a /* Public */,
      20,    0,   91,    2, 0x08 /* Private */,
      21,    0,   92,    2, 0x08 /* Private */,
      22,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    0x80000000 | 12, QMetaType::QString,   10,
    0x80000000 | 14, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::QString, 0x80000000 | 12,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void functional::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<functional *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->GoTransaction((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->RecieveData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->Synchronization((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { Block _r = _t->ReadLastBlock((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Block*>(_a[0]) = std::move(_r); }  break;
        case 4: { chain _r = _t->Find_Majority((*reinterpret_cast< QVector<chain>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< chain*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->AnalizChain((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: { QString _r = _t->GetHash((*reinterpret_cast< Block(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        case 9: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (functional::*)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&functional::GoTransaction)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject functional::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_functional.data,
    qt_meta_data_functional,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *functional::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *functional::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_functional.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int functional::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void functional::GoTransaction(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
