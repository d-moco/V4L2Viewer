/****************************************************************************
** Meta object code from reading C++ file 'Camera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Source/Headers/Camera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Camera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Camera_t {
    QByteArrayData data[56];
    char stringdata0[973];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Camera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Camera_t qt_meta_stringdata_Camera = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Camera"
QT_MOC_LITERAL(1, 7, 26), // "OnCameraListChanged_Signal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 29), // "OnSubDeviceListChanged_Signal"
QT_MOC_LITERAL(4, 65, 25), // "OnCameraFrameReady_Signal"
QT_MOC_LITERAL(5, 91, 5), // "image"
QT_MOC_LITERAL(6, 97, 7), // "frameId"
QT_MOC_LITERAL(7, 105, 22), // "OnCameraFrameID_Signal"
QT_MOC_LITERAL(8, 128, 26), // "OnCameraRecordFrame_Signal"
QT_MOC_LITERAL(9, 155, 23), // "QSharedPointer<MyFrame>"
QT_MOC_LITERAL(10, 179, 27), // "OnCameraDisplayFrame_Signal"
QT_MOC_LITERAL(11, 207, 26), // "OnCameraPixelFormat_Signal"
QT_MOC_LITERAL(12, 234, 24), // "OnCameraFrameSize_Signal"
QT_MOC_LITERAL(13, 259, 21), // "PassAutoExposureValue"
QT_MOC_LITERAL(14, 281, 7), // "int64_t"
QT_MOC_LITERAL(15, 289, 5), // "value"
QT_MOC_LITERAL(16, 295, 17), // "PassAutoGainValue"
QT_MOC_LITERAL(17, 313, 7), // "int32_t"
QT_MOC_LITERAL(18, 321, 25), // "PassAutoWhiteBalanceValue"
QT_MOC_LITERAL(19, 347, 30), // "SendIntDataToEnumerationWidget"
QT_MOC_LITERAL(20, 378, 2), // "id"
QT_MOC_LITERAL(21, 381, 3), // "min"
QT_MOC_LITERAL(22, 385, 3), // "max"
QT_MOC_LITERAL(23, 389, 4), // "name"
QT_MOC_LITERAL(24, 394, 4), // "unit"
QT_MOC_LITERAL(25, 399, 11), // "bIsReadOnly"
QT_MOC_LITERAL(26, 411, 32), // "SentInt64DataToEnumerationWidget"
QT_MOC_LITERAL(27, 444, 31), // "SendBoolDataToEnumerationWidget"
QT_MOC_LITERAL(28, 476, 33), // "SendButtonDataToEnumerationWi..."
QT_MOC_LITERAL(29, 510, 31), // "SendListDataToEnumerationWidget"
QT_MOC_LITERAL(30, 542, 14), // "QList<QString>"
QT_MOC_LITERAL(31, 557, 4), // "list"
QT_MOC_LITERAL(32, 562, 34), // "SendListIntDataToEnumerationW..."
QT_MOC_LITERAL(33, 597, 14), // "QList<int64_t>"
QT_MOC_LITERAL(34, 612, 25), // "SendSignalToUpdateWidgets"
QT_MOC_LITERAL(35, 638, 22), // "SendControlStateChange"
QT_MOC_LITERAL(36, 661, 7), // "enabled"
QT_MOC_LITERAL(37, 669, 13), // "PassGainValue"
QT_MOC_LITERAL(38, 683, 17), // "PassExposureValue"
QT_MOC_LITERAL(39, 701, 12), // "OnCtrlUpdate"
QT_MOC_LITERAL(40, 714, 3), // "cid"
QT_MOC_LITERAL(41, 718, 15), // "v4l2_event_ctrl"
QT_MOC_LITERAL(42, 734, 4), // "ctrl"
QT_MOC_LITERAL(43, 739, 33), // "SetEnumerationControlValueInt..."
QT_MOC_LITERAL(44, 773, 3), // "val"
QT_MOC_LITERAL(45, 777, 30), // "SetEnumerationControlValueList"
QT_MOC_LITERAL(46, 808, 11), // "const char*"
QT_MOC_LITERAL(47, 820, 3), // "str"
QT_MOC_LITERAL(48, 824, 26), // "SetEnumerationControlValue"
QT_MOC_LITERAL(49, 851, 32), // "SetSliderEnumerationControlValue"
QT_MOC_LITERAL(50, 884, 19), // "OnCameraListChanged"
QT_MOC_LITERAL(51, 904, 22), // "OnSubDeviceListChanged"
QT_MOC_LITERAL(52, 927, 12), // "OnFrameReady"
QT_MOC_LITERAL(53, 940, 9), // "OnFrameID"
QT_MOC_LITERAL(54, 950, 14), // "OnDisplayFrame"
QT_MOC_LITERAL(55, 965, 7) // "frameID"

    },
    "Camera\0OnCameraListChanged_Signal\0\0"
    "OnSubDeviceListChanged_Signal\0"
    "OnCameraFrameReady_Signal\0image\0frameId\0"
    "OnCameraFrameID_Signal\0"
    "OnCameraRecordFrame_Signal\0"
    "QSharedPointer<MyFrame>\0"
    "OnCameraDisplayFrame_Signal\0"
    "OnCameraPixelFormat_Signal\0"
    "OnCameraFrameSize_Signal\0PassAutoExposureValue\0"
    "int64_t\0value\0PassAutoGainValue\0int32_t\0"
    "PassAutoWhiteBalanceValue\0"
    "SendIntDataToEnumerationWidget\0id\0min\0"
    "max\0name\0unit\0bIsReadOnly\0"
    "SentInt64DataToEnumerationWidget\0"
    "SendBoolDataToEnumerationWidget\0"
    "SendButtonDataToEnumerationWidget\0"
    "SendListDataToEnumerationWidget\0"
    "QList<QString>\0list\0"
    "SendListIntDataToEnumerationWidget\0"
    "QList<int64_t>\0SendSignalToUpdateWidgets\0"
    "SendControlStateChange\0enabled\0"
    "PassGainValue\0PassExposureValue\0"
    "OnCtrlUpdate\0cid\0v4l2_event_ctrl\0ctrl\0"
    "SetEnumerationControlValueIntList\0val\0"
    "SetEnumerationControlValueList\0"
    "const char*\0str\0SetEnumerationControlValue\0"
    "SetSliderEnumerationControlValue\0"
    "OnCameraListChanged\0OnSubDeviceListChanged\0"
    "OnFrameReady\0OnFrameID\0OnDisplayFrame\0"
    "frameID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Camera[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,  189,    2, 0x06 /* Public */,
       3,    5,  200,    2, 0x06 /* Public */,
       4,    2,  211,    2, 0x06 /* Public */,
       7,    1,  216,    2, 0x06 /* Public */,
       8,    1,  219,    2, 0x06 /* Public */,
      10,    1,  222,    2, 0x06 /* Public */,
      11,    1,  225,    2, 0x06 /* Public */,
      12,    1,  228,    2, 0x06 /* Public */,
      13,    1,  231,    2, 0x06 /* Public */,
      16,    1,  234,    2, 0x06 /* Public */,
      18,    1,  237,    2, 0x06 /* Public */,
      19,    7,  240,    2, 0x06 /* Public */,
      26,    7,  255,    2, 0x06 /* Public */,
      27,    5,  270,    2, 0x06 /* Public */,
      28,    4,  281,    2, 0x06 /* Public */,
      29,    6,  290,    2, 0x06 /* Public */,
      32,    6,  303,    2, 0x06 /* Public */,
      34,    0,  316,    2, 0x06 /* Public */,
      35,    2,  317,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      37,    0,  322,    2, 0x0a /* Public */,
      38,    0,  323,    2, 0x0a /* Public */,
      39,    2,  324,    2, 0x0a /* Public */,
      43,    2,  329,    2, 0x0a /* Public */,
      45,    2,  334,    2, 0x0a /* Public */,
      48,    2,  339,    2, 0x0a /* Public */,
      48,    2,  344,    2, 0x0a /* Public */,
      48,    2,  349,    2, 0x0a /* Public */,
      48,    1,  354,    2, 0x0a /* Public */,
      49,    2,  357,    2, 0x0a /* Public */,
      49,    2,  362,    2, 0x0a /* Public */,
      50,    5,  367,    2, 0x08 /* Private */,
      51,    5,  378,    2, 0x08 /* Private */,
      52,    2,  389,    2, 0x08 /* Private */,
      53,    1,  394,    2, 0x08 /* Private */,
      54,    1,  397,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::UInt, QMetaType::ULongLong, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt, QMetaType::ULongLong, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QImage, QMetaType::ULongLong,    5,    6,
    QMetaType::Void, QMetaType::ULongLong,    6,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::ULongLong,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   15,
    QMetaType::Void, 0x80000000 | 17,   15,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 17, 0x80000000 | 17, 0x80000000 | 17, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   20,   21,   22,   15,   23,   24,   25,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   20,   21,   22,   15,   23,   24,   25,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   20,   15,   23,   24,   25,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   20,   23,   24,   25,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 17, 0x80000000 | 30, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   20,   15,   31,   23,   24,   25,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 17, 0x80000000 | 33, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   20,   15,   31,   23,   24,   25,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Bool,   20,   36,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 41,   40,   42,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 14,   20,   44,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 46,   20,   47,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 17,   20,   44,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 14,   20,   44,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Bool,   20,   44,
    QMetaType::Void, 0x80000000 | 17,   20,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 17,   20,   44,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 14,   20,   44,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt, QMetaType::ULongLong, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt, QMetaType::ULongLong, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QImage, QMetaType::ULongLong,    5,    6,
    QMetaType::Void, QMetaType::ULongLong,    6,
    QMetaType::Void, QMetaType::ULongLong,   55,

       0        // eod
};

void Camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Camera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnCameraListChanged_Signal((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< unsigned long long(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 1: _t->OnSubDeviceListChanged_Signal((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< unsigned long long(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 2: _t->OnCameraFrameReady_Signal((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< const unsigned long long(*)>(_a[2]))); break;
        case 3: _t->OnCameraFrameID_Signal((*reinterpret_cast< const unsigned long long(*)>(_a[1]))); break;
        case 4: _t->OnCameraRecordFrame_Signal((*reinterpret_cast< const QSharedPointer<MyFrame>(*)>(_a[1]))); break;
        case 5: _t->OnCameraDisplayFrame_Signal((*reinterpret_cast< const unsigned long long(*)>(_a[1]))); break;
        case 6: _t->OnCameraPixelFormat_Signal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->OnCameraFrameSize_Signal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->PassAutoExposureValue((*reinterpret_cast< int64_t(*)>(_a[1]))); break;
        case 9: _t->PassAutoGainValue((*reinterpret_cast< int32_t(*)>(_a[1]))); break;
        case 10: _t->PassAutoWhiteBalanceValue((*reinterpret_cast< int32_t(*)>(_a[1]))); break;
        case 11: _t->SendIntDataToEnumerationWidget((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int32_t(*)>(_a[2])),(*reinterpret_cast< int32_t(*)>(_a[3])),(*reinterpret_cast< int32_t(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 12: _t->SentInt64DataToEnumerationWidget((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< int64_t(*)>(_a[3])),(*reinterpret_cast< int64_t(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 13: _t->SendBoolDataToEnumerationWidget((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 14: _t->SendButtonDataToEnumerationWidget((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 15: _t->SendListDataToEnumerationWidget((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int32_t(*)>(_a[2])),(*reinterpret_cast< QList<QString>(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 16: _t->SendListIntDataToEnumerationWidget((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int32_t(*)>(_a[2])),(*reinterpret_cast< QList<int64_t>(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 17: _t->SendSignalToUpdateWidgets(); break;
        case 18: _t->SendControlStateChange((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 19: _t->PassGainValue(); break;
        case 20: _t->PassExposureValue(); break;
        case 21: _t->OnCtrlUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< v4l2_event_ctrl(*)>(_a[2]))); break;
        case 22: _t->SetEnumerationControlValueIntList((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2]))); break;
        case 23: _t->SetEnumerationControlValueList((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2]))); break;
        case 24: _t->SetEnumerationControlValue((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int32_t(*)>(_a[2]))); break;
        case 25: _t->SetEnumerationControlValue((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2]))); break;
        case 26: _t->SetEnumerationControlValue((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 27: _t->SetEnumerationControlValue((*reinterpret_cast< int32_t(*)>(_a[1]))); break;
        case 28: _t->SetSliderEnumerationControlValue((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int32_t(*)>(_a[2]))); break;
        case 29: _t->SetSliderEnumerationControlValue((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2]))); break;
        case 30: _t->OnCameraListChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< unsigned long long(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 31: _t->OnSubDeviceListChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< unsigned long long(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 32: _t->OnFrameReady((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< const unsigned long long(*)>(_a[2]))); break;
        case 33: _t->OnFrameID((*reinterpret_cast< const unsigned long long(*)>(_a[1]))); break;
        case 34: _t->OnDisplayFrame((*reinterpret_cast< const unsigned long long(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Camera::*)(const int & , unsigned int , unsigned long long , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::OnCameraListChanged_Signal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Camera::*)(const int & , unsigned int , unsigned long long , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::OnSubDeviceListChanged_Signal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Camera::*)(const QImage & , const unsigned long long & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::OnCameraFrameReady_Signal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Camera::*)(const unsigned long long & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::OnCameraFrameID_Signal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Camera::*)(const QSharedPointer<MyFrame> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::OnCameraRecordFrame_Signal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Camera::*)(const unsigned long long & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::OnCameraDisplayFrame_Signal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Camera::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::OnCameraPixelFormat_Signal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Camera::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::OnCameraFrameSize_Signal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Camera::*)(int64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::PassAutoExposureValue)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Camera::*)(int32_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::PassAutoGainValue)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Camera::*)(int32_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::PassAutoWhiteBalanceValue)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Camera::*)(int32_t , int32_t , int32_t , int32_t , QString , QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::SendIntDataToEnumerationWidget)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Camera::*)(int32_t , int64_t , int64_t , int64_t , QString , QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::SentInt64DataToEnumerationWidget)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Camera::*)(int32_t , bool , QString , QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::SendBoolDataToEnumerationWidget)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Camera::*)(int32_t , QString , QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::SendButtonDataToEnumerationWidget)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Camera::*)(int32_t , int32_t , QList<QString> , QString , QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::SendListDataToEnumerationWidget)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Camera::*)(int32_t , int32_t , QList<int64_t> , QString , QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::SendListIntDataToEnumerationWidget)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Camera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::SendSignalToUpdateWidgets)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Camera::*)(int32_t , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::SendControlStateChange)) {
                *result = 18;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Camera::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Camera.data,
    qt_meta_data_Camera,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Camera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Camera.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void Camera::OnCameraListChanged_Signal(const int & _t1, unsigned int _t2, unsigned long long _t3, const QString & _t4, const QString & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Camera::OnSubDeviceListChanged_Signal(const int & _t1, unsigned int _t2, unsigned long long _t3, const QString & _t4, const QString & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Camera::OnCameraFrameReady_Signal(const QImage & _t1, const unsigned long long & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Camera::OnCameraFrameID_Signal(const unsigned long long & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Camera::OnCameraRecordFrame_Signal(const QSharedPointer<MyFrame> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Camera::OnCameraDisplayFrame_Signal(const unsigned long long & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Camera::OnCameraPixelFormat_Signal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Camera::OnCameraFrameSize_Signal(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Camera::PassAutoExposureValue(int64_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Camera::PassAutoGainValue(int32_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Camera::PassAutoWhiteBalanceValue(int32_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Camera::SendIntDataToEnumerationWidget(int32_t _t1, int32_t _t2, int32_t _t3, int32_t _t4, QString _t5, QString _t6, bool _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Camera::SentInt64DataToEnumerationWidget(int32_t _t1, int64_t _t2, int64_t _t3, int64_t _t4, QString _t5, QString _t6, bool _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Camera::SendBoolDataToEnumerationWidget(int32_t _t1, bool _t2, QString _t3, QString _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Camera::SendButtonDataToEnumerationWidget(int32_t _t1, QString _t2, QString _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Camera::SendListDataToEnumerationWidget(int32_t _t1, int32_t _t2, QList<QString> _t3, QString _t4, QString _t5, bool _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Camera::SendListIntDataToEnumerationWidget(int32_t _t1, int32_t _t2, QList<int64_t> _t3, QString _t4, QString _t5, bool _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Camera::SendSignalToUpdateWidgets()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void Camera::SendControlStateChange(int32_t _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
