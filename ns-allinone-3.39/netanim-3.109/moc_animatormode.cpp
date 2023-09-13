/****************************************************************************
** Meta object code from reading C++ file 'animatormode.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "animatormode.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animatormode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSnetanimSCOPEAnimatorModeENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSnetanimSCOPEAnimatorModeENDCLASS = QtMocHelpers::stringData(
    "netanim::AnimatorMode",
    "testSlot",
    "",
    "clickTraceFileOpenSlot",
    "reloadFileSlot",
    "clickZoomInSlot",
    "clickZoomOutSlot",
    "clickResetSlot",
    "clickPlaySlot",
    "simulationSliderPressedSlot",
    "updateTimelineSlot",
    "value",
    "updateRateTimeoutSlot",
    "updateGridLinesSlot",
    "updateNodeSizeSlot",
    "updateUpdateRateSlot",
    "showGridLinesSlot",
    "showNodeIdSlot",
    "showNodeSysIdSlot",
    "showMetaSlot",
    "showPacketSlot",
    "showWirelessCirclesSlot",
    "showPacketStatsSlot",
    "showNodePositionStatsSlot",
    "showIpSlot",
    "showMacSlot",
    "showRoutePathSlot",
    "showBatteryCapacitySlot",
    "buttonAnimationGroupFinishedSlot",
    "showPropertiesSlot",
    "pauseAtTimeSlot",
    "stepSlot",
    "enableMousePositionSlot"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSnetanimSCOPEAnimatorModeENDCLASS_t {
    uint offsetsAndSizes[66];
    char stringdata0[22];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[15];
    char stringdata5[16];
    char stringdata6[17];
    char stringdata7[15];
    char stringdata8[14];
    char stringdata9[28];
    char stringdata10[19];
    char stringdata11[6];
    char stringdata12[22];
    char stringdata13[20];
    char stringdata14[19];
    char stringdata15[21];
    char stringdata16[18];
    char stringdata17[15];
    char stringdata18[18];
    char stringdata19[13];
    char stringdata20[15];
    char stringdata21[24];
    char stringdata22[20];
    char stringdata23[26];
    char stringdata24[11];
    char stringdata25[12];
    char stringdata26[18];
    char stringdata27[24];
    char stringdata28[33];
    char stringdata29[19];
    char stringdata30[16];
    char stringdata31[9];
    char stringdata32[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSnetanimSCOPEAnimatorModeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSnetanimSCOPEAnimatorModeENDCLASS_t qt_meta_stringdata_CLASSnetanimSCOPEAnimatorModeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "netanim::AnimatorMode"
        QT_MOC_LITERAL(22, 8),  // "testSlot"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 22),  // "clickTraceFileOpenSlot"
        QT_MOC_LITERAL(55, 14),  // "reloadFileSlot"
        QT_MOC_LITERAL(70, 15),  // "clickZoomInSlot"
        QT_MOC_LITERAL(86, 16),  // "clickZoomOutSlot"
        QT_MOC_LITERAL(103, 14),  // "clickResetSlot"
        QT_MOC_LITERAL(118, 13),  // "clickPlaySlot"
        QT_MOC_LITERAL(132, 27),  // "simulationSliderPressedSlot"
        QT_MOC_LITERAL(160, 18),  // "updateTimelineSlot"
        QT_MOC_LITERAL(179, 5),  // "value"
        QT_MOC_LITERAL(185, 21),  // "updateRateTimeoutSlot"
        QT_MOC_LITERAL(207, 19),  // "updateGridLinesSlot"
        QT_MOC_LITERAL(227, 18),  // "updateNodeSizeSlot"
        QT_MOC_LITERAL(246, 20),  // "updateUpdateRateSlot"
        QT_MOC_LITERAL(267, 17),  // "showGridLinesSlot"
        QT_MOC_LITERAL(285, 14),  // "showNodeIdSlot"
        QT_MOC_LITERAL(300, 17),  // "showNodeSysIdSlot"
        QT_MOC_LITERAL(318, 12),  // "showMetaSlot"
        QT_MOC_LITERAL(331, 14),  // "showPacketSlot"
        QT_MOC_LITERAL(346, 23),  // "showWirelessCirclesSlot"
        QT_MOC_LITERAL(370, 19),  // "showPacketStatsSlot"
        QT_MOC_LITERAL(390, 25),  // "showNodePositionStatsSlot"
        QT_MOC_LITERAL(416, 10),  // "showIpSlot"
        QT_MOC_LITERAL(427, 11),  // "showMacSlot"
        QT_MOC_LITERAL(439, 17),  // "showRoutePathSlot"
        QT_MOC_LITERAL(457, 23),  // "showBatteryCapacitySlot"
        QT_MOC_LITERAL(481, 32),  // "buttonAnimationGroupFinishedSlot"
        QT_MOC_LITERAL(514, 18),  // "showPropertiesSlot"
        QT_MOC_LITERAL(533, 15),  // "pauseAtTimeSlot"
        QT_MOC_LITERAL(549, 8),  // "stepSlot"
        QT_MOC_LITERAL(558, 23)   // "enableMousePositionSlot"
    },
    "netanim::AnimatorMode",
    "testSlot",
    "",
    "clickTraceFileOpenSlot",
    "reloadFileSlot",
    "clickZoomInSlot",
    "clickZoomOutSlot",
    "clickResetSlot",
    "clickPlaySlot",
    "simulationSliderPressedSlot",
    "updateTimelineSlot",
    "value",
    "updateRateTimeoutSlot",
    "updateGridLinesSlot",
    "updateNodeSizeSlot",
    "updateUpdateRateSlot",
    "showGridLinesSlot",
    "showNodeIdSlot",
    "showNodeSysIdSlot",
    "showMetaSlot",
    "showPacketSlot",
    "showWirelessCirclesSlot",
    "showPacketStatsSlot",
    "showNodePositionStatsSlot",
    "showIpSlot",
    "showMacSlot",
    "showRoutePathSlot",
    "showBatteryCapacitySlot",
    "buttonAnimationGroupFinishedSlot",
    "showPropertiesSlot",
    "pauseAtTimeSlot",
    "stepSlot",
    "enableMousePositionSlot"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSnetanimSCOPEAnimatorModeENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  200,    2, 0x08,    1 /* Private */,
       3,    0,  201,    2, 0x08,    2 /* Private */,
       4,    0,  202,    2, 0x08,    3 /* Private */,
       5,    0,  203,    2, 0x08,    4 /* Private */,
       6,    0,  204,    2, 0x08,    5 /* Private */,
       7,    0,  205,    2, 0x08,    6 /* Private */,
       8,    0,  206,    2, 0x08,    7 /* Private */,
       9,    0,  207,    2, 0x08,    8 /* Private */,
      10,    1,  208,    2, 0x08,    9 /* Private */,
      10,    0,  211,    2, 0x08,   11 /* Private */,
      12,    0,  212,    2, 0x08,   12 /* Private */,
      13,    1,  213,    2, 0x08,   13 /* Private */,
      14,    1,  216,    2, 0x08,   15 /* Private */,
      15,    1,  219,    2, 0x08,   17 /* Private */,
      16,    0,  222,    2, 0x08,   19 /* Private */,
      17,    0,  223,    2, 0x08,   20 /* Private */,
      18,    0,  224,    2, 0x08,   21 /* Private */,
      19,    0,  225,    2, 0x08,   22 /* Private */,
      20,    0,  226,    2, 0x08,   23 /* Private */,
      21,    0,  227,    2, 0x08,   24 /* Private */,
      22,    0,  228,    2, 0x08,   25 /* Private */,
      23,    0,  229,    2, 0x08,   26 /* Private */,
      24,    0,  230,    2, 0x08,   27 /* Private */,
      25,    0,  231,    2, 0x08,   28 /* Private */,
      26,    0,  232,    2, 0x08,   29 /* Private */,
      27,    0,  233,    2, 0x08,   30 /* Private */,
      28,    0,  234,    2, 0x08,   31 /* Private */,
      29,    0,  235,    2, 0x08,   32 /* Private */,
      30,    0,  236,    2, 0x08,   33 /* Private */,
      31,    0,  237,    2, 0x08,   34 /* Private */,
      32,    0,  238,    2, 0x08,   35 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,    2,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject netanim::AnimatorMode::staticMetaObject = { {
    QMetaObject::SuperData::link<Mode::staticMetaObject>(),
    qt_meta_stringdata_CLASSnetanimSCOPEAnimatorModeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSnetanimSCOPEAnimatorModeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSnetanimSCOPEAnimatorModeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AnimatorMode, std::true_type>,
        // method 'testSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clickTraceFileOpenSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reloadFileSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clickZoomInSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clickZoomOutSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clickResetSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clickPlaySlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'simulationSliderPressedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTimelineSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateTimelineSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateRateTimeoutSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateGridLinesSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateNodeSizeSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'updateUpdateRateSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showGridLinesSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showNodeIdSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showNodeSysIdSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMetaSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showPacketSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showWirelessCirclesSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showPacketStatsSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showNodePositionStatsSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showIpSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMacSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showRoutePathSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showBatteryCapacitySlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'buttonAnimationGroupFinishedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showPropertiesSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pauseAtTimeSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stepSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableMousePositionSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void netanim::AnimatorMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnimatorMode *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->testSlot(); break;
        case 1: _t->clickTraceFileOpenSlot(); break;
        case 2: _t->reloadFileSlot(); break;
        case 3: _t->clickZoomInSlot(); break;
        case 4: _t->clickZoomOutSlot(); break;
        case 5: _t->clickResetSlot(); break;
        case 6: _t->clickPlaySlot(); break;
        case 7: _t->simulationSliderPressedSlot(); break;
        case 8: _t->updateTimelineSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->updateTimelineSlot(); break;
        case 10: _t->updateRateTimeoutSlot(); break;
        case 11: _t->updateGridLinesSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->updateNodeSizeSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->updateUpdateRateSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->showGridLinesSlot(); break;
        case 15: _t->showNodeIdSlot(); break;
        case 16: _t->showNodeSysIdSlot(); break;
        case 17: _t->showMetaSlot(); break;
        case 18: _t->showPacketSlot(); break;
        case 19: _t->showWirelessCirclesSlot(); break;
        case 20: _t->showPacketStatsSlot(); break;
        case 21: _t->showNodePositionStatsSlot(); break;
        case 22: _t->showIpSlot(); break;
        case 23: _t->showMacSlot(); break;
        case 24: _t->showRoutePathSlot(); break;
        case 25: _t->showBatteryCapacitySlot(); break;
        case 26: _t->buttonAnimationGroupFinishedSlot(); break;
        case 27: _t->showPropertiesSlot(); break;
        case 28: _t->pauseAtTimeSlot(); break;
        case 29: _t->stepSlot(); break;
        case 30: _t->enableMousePositionSlot(); break;
        default: ;
        }
    }
}

const QMetaObject *netanim::AnimatorMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netanim::AnimatorMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSnetanimSCOPEAnimatorModeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Mode::qt_metacast(_clname);
}

int netanim::AnimatorMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Mode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 31;
    }
    return _id;
}
QT_WARNING_POP
