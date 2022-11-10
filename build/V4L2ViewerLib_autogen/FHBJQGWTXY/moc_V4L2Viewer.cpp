/****************************************************************************
** Meta object code from reading C++ file 'V4L2Viewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Source/Headers/V4L2Viewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'V4L2Viewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_V4L2Viewer_t {
    QByteArrayData data[85];
    char stringdata0[1343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_V4L2Viewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_V4L2Viewer_t qt_meta_stringdata_V4L2Viewer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "V4L2Viewer"
QT_MOC_LITERAL(1, 11, 11), // "OnLogToFile"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "OnShowFrames"
QT_MOC_LITERAL(4, 37, 20), // "OnMenuCloseTriggered"
QT_MOC_LITERAL(5, 58, 24), // "OnOpenCloseButtonClicked"
QT_MOC_LITERAL(6, 83, 19), // "OnCameraListChanged"
QT_MOC_LITERAL(7, 103, 6), // "reason"
QT_MOC_LITERAL(8, 110, 10), // "cardNumber"
QT_MOC_LITERAL(9, 121, 8), // "deviceID"
QT_MOC_LITERAL(10, 130, 10), // "deviceName"
QT_MOC_LITERAL(11, 141, 4), // "info"
QT_MOC_LITERAL(12, 146, 22), // "OnSubDeviceListChanged"
QT_MOC_LITERAL(13, 169, 20), // "OnStartButtonClicked"
QT_MOC_LITERAL(14, 190, 19), // "OnStopButtonClicked"
QT_MOC_LITERAL(15, 210, 22), // "OnZoomFitButtonClicked"
QT_MOC_LITERAL(16, 233, 21), // "OnZoomInButtonClicked"
QT_MOC_LITERAL(17, 255, 22), // "OnZoomOutButtonClicked"
QT_MOC_LITERAL(18, 278, 18), // "OnSaveImageClicked"
QT_MOC_LITERAL(19, 297, 22), // "OnUpdateFramesReceived"
QT_MOC_LITERAL(20, 320, 12), // "OnFrameReady"
QT_MOC_LITERAL(21, 333, 5), // "image"
QT_MOC_LITERAL(22, 339, 7), // "frameId"
QT_MOC_LITERAL(23, 347, 9), // "OnFrameID"
QT_MOC_LITERAL(24, 357, 33), // "OnListBoxCamerasItemDoubleCli..."
QT_MOC_LITERAL(25, 391, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(26, 408, 4), // "item"
QT_MOC_LITERAL(27, 413, 13), // "OnCropXOffset"
QT_MOC_LITERAL(28, 427, 13), // "OnCropYOffset"
QT_MOC_LITERAL(29, 441, 11), // "OnCropWidth"
QT_MOC_LITERAL(30, 453, 12), // "OnCropHeight"
QT_MOC_LITERAL(31, 466, 7), // "OnWidth"
QT_MOC_LITERAL(32, 474, 8), // "OnHeight"
QT_MOC_LITERAL(33, 483, 6), // "OnGain"
QT_MOC_LITERAL(34, 490, 10), // "OnAutoGain"
QT_MOC_LITERAL(35, 501, 10), // "OnExposure"
QT_MOC_LITERAL(36, 512, 14), // "OnAutoExposure"
QT_MOC_LITERAL(37, 527, 20), // "OnPixelFormatChanged"
QT_MOC_LITERAL(38, 548, 7), // "OnGamma"
QT_MOC_LITERAL(39, 556, 12), // "OnBrightness"
QT_MOC_LITERAL(40, 569, 23), // "OnContinousWhiteBalance"
QT_MOC_LITERAL(41, 593, 11), // "OnFrameRate"
QT_MOC_LITERAL(42, 605, 15), // "OnReadAllValues"
QT_MOC_LITERAL(43, 621, 19), // "OnCameraPixelFormat"
QT_MOC_LITERAL(44, 641, 16), // "OnLanguageChange"
QT_MOC_LITERAL(45, 658, 20), // "OnUpdateAutoExposure"
QT_MOC_LITERAL(46, 679, 7), // "int64_t"
QT_MOC_LITERAL(47, 687, 5), // "value"
QT_MOC_LITERAL(48, 693, 16), // "OnUpdateAutoGain"
QT_MOC_LITERAL(49, 710, 7), // "int32_t"
QT_MOC_LITERAL(50, 718, 27), // "OnSliderExposureValueChange"
QT_MOC_LITERAL(51, 746, 23), // "OnSliderGainValueChange"
QT_MOC_LITERAL(52, 770, 24), // "OnSliderGammaValueChange"
QT_MOC_LITERAL(53, 795, 29), // "OnSliderBrightnessValueChange"
QT_MOC_LITERAL(54, 825, 17), // "OnSlidersReleased"
QT_MOC_LITERAL(55, 843, 25), // "OnCameraListButtonClicked"
QT_MOC_LITERAL(56, 869, 19), // "OnMenuSplitterMoved"
QT_MOC_LITERAL(57, 889, 3), // "pos"
QT_MOC_LITERAL(58, 893, 5), // "index"
QT_MOC_LITERAL(59, 899, 32), // "ShowHideEnumerationControlWidget"
QT_MOC_LITERAL(60, 932, 30), // "PassIntDataToEnumerationWidget"
QT_MOC_LITERAL(61, 963, 2), // "id"
QT_MOC_LITERAL(62, 966, 3), // "min"
QT_MOC_LITERAL(63, 970, 3), // "max"
QT_MOC_LITERAL(64, 974, 4), // "name"
QT_MOC_LITERAL(65, 979, 4), // "unit"
QT_MOC_LITERAL(66, 984, 11), // "bIsReadOnly"
QT_MOC_LITERAL(67, 996, 31), // "PassBoolDataToEnumerationWidget"
QT_MOC_LITERAL(68, 1028, 33), // "PassButtonDataToEnumerationWi..."
QT_MOC_LITERAL(69, 1062, 31), // "PassListDataToEnumerationWidget"
QT_MOC_LITERAL(70, 1094, 14), // "QList<QString>"
QT_MOC_LITERAL(71, 1109, 4), // "list"
QT_MOC_LITERAL(72, 1114, 14), // "QList<int64_t>"
QT_MOC_LITERAL(73, 1129, 17), // "OnUpdateZoomLabel"
QT_MOC_LITERAL(74, 1147, 27), // "OnDockWidgetPositionChanged"
QT_MOC_LITERAL(75, 1175, 8), // "topLevel"
QT_MOC_LITERAL(76, 1184, 29), // "OnDockWidgetVisibilityChanged"
QT_MOC_LITERAL(77, 1214, 7), // "visible"
QT_MOC_LITERAL(78, 1222, 27), // "OnCheckFrameRateAutoClicked"
QT_MOC_LITERAL(79, 1250, 16), // "OnFlipHorizontal"
QT_MOC_LITERAL(80, 1267, 5), // "state"
QT_MOC_LITERAL(81, 1273, 14), // "OnFlipVertical"
QT_MOC_LITERAL(82, 1288, 23), // "OnFrameSizeIndexChanged"
QT_MOC_LITERAL(83, 1312, 22), // "PassControlStateChange"
QT_MOC_LITERAL(84, 1335, 7) // "enabled"

    },
    "V4L2Viewer\0OnLogToFile\0\0OnShowFrames\0"
    "OnMenuCloseTriggered\0OnOpenCloseButtonClicked\0"
    "OnCameraListChanged\0reason\0cardNumber\0"
    "deviceID\0deviceName\0info\0"
    "OnSubDeviceListChanged\0OnStartButtonClicked\0"
    "OnStopButtonClicked\0OnZoomFitButtonClicked\0"
    "OnZoomInButtonClicked\0OnZoomOutButtonClicked\0"
    "OnSaveImageClicked\0OnUpdateFramesReceived\0"
    "OnFrameReady\0image\0frameId\0OnFrameID\0"
    "OnListBoxCamerasItemDoubleClicked\0"
    "QListWidgetItem*\0item\0OnCropXOffset\0"
    "OnCropYOffset\0OnCropWidth\0OnCropHeight\0"
    "OnWidth\0OnHeight\0OnGain\0OnAutoGain\0"
    "OnExposure\0OnAutoExposure\0"
    "OnPixelFormatChanged\0OnGamma\0OnBrightness\0"
    "OnContinousWhiteBalance\0OnFrameRate\0"
    "OnReadAllValues\0OnCameraPixelFormat\0"
    "OnLanguageChange\0OnUpdateAutoExposure\0"
    "int64_t\0value\0OnUpdateAutoGain\0int32_t\0"
    "OnSliderExposureValueChange\0"
    "OnSliderGainValueChange\0"
    "OnSliderGammaValueChange\0"
    "OnSliderBrightnessValueChange\0"
    "OnSlidersReleased\0OnCameraListButtonClicked\0"
    "OnMenuSplitterMoved\0pos\0index\0"
    "ShowHideEnumerationControlWidget\0"
    "PassIntDataToEnumerationWidget\0id\0min\0"
    "max\0name\0unit\0bIsReadOnly\0"
    "PassBoolDataToEnumerationWidget\0"
    "PassButtonDataToEnumerationWidget\0"
    "PassListDataToEnumerationWidget\0"
    "QList<QString>\0list\0QList<int64_t>\0"
    "OnUpdateZoomLabel\0OnDockWidgetPositionChanged\0"
    "topLevel\0OnDockWidgetVisibilityChanged\0"
    "visible\0OnCheckFrameRateAutoClicked\0"
    "OnFlipHorizontal\0state\0OnFlipVertical\0"
    "OnFrameSizeIndexChanged\0PassControlStateChange\0"
    "enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_V4L2Viewer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      58,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  304,    2, 0x08 /* Private */,
       3,    0,  305,    2, 0x08 /* Private */,
       4,    0,  306,    2, 0x08 /* Private */,
       5,    0,  307,    2, 0x08 /* Private */,
       6,    5,  308,    2, 0x08 /* Private */,
      12,    5,  319,    2, 0x08 /* Private */,
      13,    0,  330,    2, 0x08 /* Private */,
      14,    0,  331,    2, 0x08 /* Private */,
      15,    0,  332,    2, 0x08 /* Private */,
      16,    0,  333,    2, 0x08 /* Private */,
      17,    0,  334,    2, 0x08 /* Private */,
      18,    0,  335,    2, 0x08 /* Private */,
      19,    0,  336,    2, 0x08 /* Private */,
      20,    2,  337,    2, 0x08 /* Private */,
      23,    1,  342,    2, 0x08 /* Private */,
      24,    1,  345,    2, 0x08 /* Private */,
      27,    0,  348,    2, 0x08 /* Private */,
      28,    0,  349,    2, 0x08 /* Private */,
      29,    0,  350,    2, 0x08 /* Private */,
      30,    0,  351,    2, 0x08 /* Private */,
      31,    0,  352,    2, 0x08 /* Private */,
      32,    0,  353,    2, 0x08 /* Private */,
      33,    0,  354,    2, 0x08 /* Private */,
      34,    0,  355,    2, 0x08 /* Private */,
      35,    0,  356,    2, 0x08 /* Private */,
      36,    0,  357,    2, 0x08 /* Private */,
      37,    1,  358,    2, 0x08 /* Private */,
      38,    0,  361,    2, 0x08 /* Private */,
      39,    0,  362,    2, 0x08 /* Private */,
      40,    0,  363,    2, 0x08 /* Private */,
      41,    0,  364,    2, 0x08 /* Private */,
      42,    0,  365,    2, 0x08 /* Private */,
      43,    1,  366,    2, 0x08 /* Private */,
      44,    0,  369,    2, 0x08 /* Private */,
      45,    1,  370,    2, 0x08 /* Private */,
      48,    1,  373,    2, 0x08 /* Private */,
      50,    1,  376,    2, 0x08 /* Private */,
      51,    1,  379,    2, 0x08 /* Private */,
      52,    1,  382,    2, 0x08 /* Private */,
      53,    1,  385,    2, 0x08 /* Private */,
      54,    0,  388,    2, 0x08 /* Private */,
      55,    0,  389,    2, 0x08 /* Private */,
      56,    2,  390,    2, 0x08 /* Private */,
      59,    0,  395,    2, 0x08 /* Private */,
      60,    7,  396,    2, 0x08 /* Private */,
      60,    7,  411,    2, 0x08 /* Private */,
      67,    5,  426,    2, 0x08 /* Private */,
      68,    4,  437,    2, 0x08 /* Private */,
      69,    6,  446,    2, 0x08 /* Private */,
      69,    6,  459,    2, 0x08 /* Private */,
      73,    0,  472,    2, 0x08 /* Private */,
      74,    1,  473,    2, 0x08 /* Private */,
      76,    1,  476,    2, 0x08 /* Private */,
      78,    0,  479,    2, 0x08 /* Private */,
      79,    1,  480,    2, 0x08 /* Private */,
      81,    1,  483,    2, 0x08 /* Private */,
      82,    1,  486,    2, 0x08 /* Private */,
      83,    2,  489,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt, QMetaType::ULongLong, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::UInt, QMetaType::ULongLong, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage, QMetaType::ULongLong,   21,   22,
    QMetaType::Void, QMetaType::ULongLong,   22,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 46,   47,
    QMetaType::Void, 0x80000000 | 49,   47,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void, QMetaType::Int,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   57,   58,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 49, 0x80000000 | 49, 0x80000000 | 49, 0x80000000 | 49, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   61,   62,   63,   47,   64,   65,   66,
    QMetaType::Void, 0x80000000 | 49, 0x80000000 | 46, 0x80000000 | 46, 0x80000000 | 46, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   61,   62,   63,   47,   64,   65,   66,
    QMetaType::Void, 0x80000000 | 49, QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   61,   47,   64,   65,   66,
    QMetaType::Void, 0x80000000 | 49, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   61,   64,   65,   66,
    QMetaType::Void, 0x80000000 | 49, 0x80000000 | 49, 0x80000000 | 70, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   61,   47,   71,   64,   65,   66,
    QMetaType::Void, 0x80000000 | 49, 0x80000000 | 49, 0x80000000 | 72, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   61,   47,   71,   64,   65,   66,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   75,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   80,
    QMetaType::Void, QMetaType::Int,   80,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void, 0x80000000 | 49, QMetaType::Bool,   61,   84,

       0        // eod
};

void V4L2Viewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<V4L2Viewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnLogToFile(); break;
        case 1: _t->OnShowFrames(); break;
        case 2: _t->OnMenuCloseTriggered(); break;
        case 3: _t->OnOpenCloseButtonClicked(); break;
        case 4: _t->OnCameraListChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< unsigned long long(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 5: _t->OnSubDeviceListChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< unsigned long long(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 6: _t->OnStartButtonClicked(); break;
        case 7: _t->OnStopButtonClicked(); break;
        case 8: _t->OnZoomFitButtonClicked(); break;
        case 9: _t->OnZoomInButtonClicked(); break;
        case 10: _t->OnZoomOutButtonClicked(); break;
        case 11: _t->OnSaveImageClicked(); break;
        case 12: _t->OnUpdateFramesReceived(); break;
        case 13: _t->OnFrameReady((*reinterpret_cast< const QImage(*)>(_a[1])),(*reinterpret_cast< const unsigned long long(*)>(_a[2]))); break;
        case 14: _t->OnFrameID((*reinterpret_cast< const unsigned long long(*)>(_a[1]))); break;
        case 15: _t->OnListBoxCamerasItemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 16: _t->OnCropXOffset(); break;
        case 17: _t->OnCropYOffset(); break;
        case 18: _t->OnCropWidth(); break;
        case 19: _t->OnCropHeight(); break;
        case 20: _t->OnWidth(); break;
        case 21: _t->OnHeight(); break;
        case 22: _t->OnGain(); break;
        case 23: _t->OnAutoGain(); break;
        case 24: _t->OnExposure(); break;
        case 25: _t->OnAutoExposure(); break;
        case 26: _t->OnPixelFormatChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->OnGamma(); break;
        case 28: _t->OnBrightness(); break;
        case 29: _t->OnContinousWhiteBalance(); break;
        case 30: _t->OnFrameRate(); break;
        case 31: _t->OnReadAllValues(); break;
        case 32: _t->OnCameraPixelFormat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->OnLanguageChange(); break;
        case 34: _t->OnUpdateAutoExposure((*reinterpret_cast< int64_t(*)>(_a[1]))); break;
        case 35: _t->OnUpdateAutoGain((*reinterpret_cast< int32_t(*)>(_a[1]))); break;
        case 36: _t->OnSliderExposureValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->OnSliderGainValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->OnSliderGammaValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->OnSliderBrightnessValueChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->OnSlidersReleased(); break;
        case 41: _t->OnCameraListButtonClicked(); break;
        case 42: _t->OnMenuSplitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 43: _t->ShowHideEnumerationControlWidget(); break;
        case 44: _t->PassIntDataToEnumerationWidget((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int32_t(*)>(_a[2])),(*reinterpret_cast< int32_t(*)>(_a[3])),(*reinterpret_cast< int32_t(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 45: _t->PassIntDataToEnumerationWidget((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int64_t(*)>(_a[2])),(*reinterpret_cast< int64_t(*)>(_a[3])),(*reinterpret_cast< int64_t(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 46: _t->PassBoolDataToEnumerationWidget((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 47: _t->PassButtonDataToEnumerationWidget((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 48: _t->PassListDataToEnumerationWidget((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int32_t(*)>(_a[2])),(*reinterpret_cast< QList<QString>(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 49: _t->PassListDataToEnumerationWidget((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< int32_t(*)>(_a[2])),(*reinterpret_cast< QList<int64_t>(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 50: _t->OnUpdateZoomLabel(); break;
        case 51: _t->OnDockWidgetPositionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->OnDockWidgetVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->OnCheckFrameRateAutoClicked(); break;
        case 54: _t->OnFlipHorizontal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 55: _t->OnFlipVertical((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->OnFrameSizeIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->PassControlStateChange((*reinterpret_cast< int32_t(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject V4L2Viewer::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_V4L2Viewer.data,
    qt_meta_data_V4L2Viewer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *V4L2Viewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *V4L2Viewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_V4L2Viewer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int V4L2Viewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 58)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 58;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
