/****************************************************************************
** Meta object code from reading C++ file 'FrameObserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Source/Headers/FrameObserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrameObserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FrameObserver_t {
    QByteArrayData data[9];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FrameObserver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FrameObserver_t qt_meta_stringdata_FrameObserver = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FrameObserver"
QT_MOC_LITERAL(1, 14, 19), // "OnFrameReady_Signal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "image"
QT_MOC_LITERAL(4, 41, 7), // "frameId"
QT_MOC_LITERAL(5, 49, 16), // "OnFrameID_Signal"
QT_MOC_LITERAL(6, 66, 21), // "OnDisplayFrame_Signal"
QT_MOC_LITERAL(7, 88, 22), // "OnFrameReadyFromThread"
QT_MOC_LITERAL(8, 111, 8) // "bufIndex"

    },
    "FrameObserver\0OnFrameReady_Signal\0\0"
    "image\0frameId\0OnFrameID_Signal\0"
    "OnDisplayFrame_Signal\0OnFrameReadyFromThread\0"
    "bufIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FrameObserver[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    1,   39,    2, 0x06 /* Public */,
       6,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    3,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage, QMetaType::ULongLong,    3,    4,
    QMetaType::Void, QMetaType::ULongLong,    4,
    QMetaType::Void, QMetaType::ULongLong,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage, QMetaType::ULongLong, QMetaType::Int,    3,    4,    8,

       0        // eod
};

void FrameObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FrameObserver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnFrameReady_Signal((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< const unsigned long long(*)>(_a[2]))); break;
        case 1: _t->OnFrameID_Signal((*reinterpret_cast< const unsigned long long(*)>(_a[1]))); break;
        case 2: _t->OnDisplayFrame_Signal((*reinterpret_cast< const unsigned long long(*)>(_a[1]))); break;
        case 3: _t->OnFrameReadyFromThread((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< const unsigned long long(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FrameObserver::*)(const QImage & , const unsigned long long & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FrameObserver::OnFrameReady_Signal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FrameObserver::*)(const unsigned long long & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FrameObserver::OnFrameID_Signal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FrameObserver::*)(const unsigned long long & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FrameObserver::OnDisplayFrame_Signal)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FrameObserver::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_FrameObserver.data,
    qt_meta_data_FrameObserver,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FrameObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FrameObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FrameObserver.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int FrameObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FrameObserver::OnFrameReady_Signal(const QImage & _t1, const unsigned long long & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FrameObserver::OnFrameID_Signal(const unsigned long long & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FrameObserver::OnDisplayFrame_Signal(const unsigned long long & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
