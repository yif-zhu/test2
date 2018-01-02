/****************************************************************************
** Meta object code from reading C++ file 'test2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'test2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_test2_t {
    QByteArrayData data[10];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_test2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_test2_t qt_meta_stringdata_test2 = {
    {
QT_MOC_LITERAL(0, 0, 5), // "test2"
QT_MOC_LITERAL(1, 6, 13), // "on_actionOpen"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 1), // "f"
QT_MOC_LITERAL(4, 23, 13), // "on_actionSave"
QT_MOC_LITERAL(5, 37, 15), // "on_actionSaveAs"
QT_MOC_LITERAL(6, 53, 13), // "on_actionHelp"
QT_MOC_LITERAL(7, 67, 14), // "on_actionColor"
QT_MOC_LITERAL(8, 82, 16), // "on_actionEnglish"
QT_MOC_LITERAL(9, 99, 16) // "on_actionChinese"

    },
    "test2\0on_actionOpen\0\0f\0on_actionSave\0"
    "on_actionSaveAs\0on_actionHelp\0"
    "on_actionColor\0on_actionEnglish\0"
    "on_actionChinese"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_test2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       5,    1,   55,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       7,    1,   61,    2, 0x08 /* Private */,
       8,    1,   64,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void test2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        test2 *_t = static_cast<test2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionOpen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_actionSave((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_actionSaveAs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_actionHelp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_actionColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_actionEnglish((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_actionChinese((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject test2::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_test2.data,
      qt_meta_data_test2,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *test2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *test2::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_test2.stringdata0))
        return static_cast<void*>(const_cast< test2*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int test2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
