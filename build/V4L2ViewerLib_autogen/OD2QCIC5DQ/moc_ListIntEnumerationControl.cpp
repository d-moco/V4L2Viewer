/****************************************************************************
** Meta object code from reading C++ file 'ListIntEnumerationControl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Source/Headers/EnumeratorInterface/ListIntEnumerationControl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ListIntEnumerationControl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ListIntEnumerationControl_t {
    QByteArrayData data[9];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ListIntEnumerationControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ListIntEnumerationControl_t qt_meta_stringdata_ListIntEnumerationControl = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ListIntEnumerationControl"
QT_MOC_LITERAL(1, 26, 12), // "PassNewValue"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "int32_t"
QT_MOC_LITERAL(4, 48, 2), // "id"
QT_MOC_LITERAL(5, 51, 7), // "int64_t"
QT_MOC_LITERAL(6, 59, 5), // "value"
QT_MOC_LITERAL(7, 65, 17), // "OnListItemChanged"
QT_MOC_LITERAL(8, 83, 11) // "currentText"

    },
    "ListIntEnumerationControl\0PassNewValue\0"
    "\0int32_t\0id\0int64_t\0value\0OnListItemChanged\0"
    "currentText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ListIntEnumerationControl[] = {

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
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   29,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void ListIntEnumerationControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ListIntEnumerationControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PassNewValue((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2]))); break;
        case 1: _t->OnListItemChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ListIntEnumerationControl::*)(int32_t , int64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ListIntEnumerationControl::PassNewValue)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ListIntEnumerationControl::staticMetaObject = { {
    &IControlEnumerationHolder::staticMetaObject,
    qt_meta_stringdata_ListIntEnumerationControl.data,
    qt_meta_data_ListIntEnumerationControl,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ListIntEnumerationControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ListIntEnumerationControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ListIntEnumerationControl.stringdata0))
        return static_cast<void*>(this);
    return IControlEnumerationHolder::qt_metacast(_clname);
}

int ListIntEnumerationControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IControlEnumerationHolder::qt_metacall(_c, _id, _a);
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
void ListIntEnumerationControl::PassNewValue(int32_t _t1, int64_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
