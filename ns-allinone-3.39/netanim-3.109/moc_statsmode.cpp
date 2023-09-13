/****************************************************************************
** Meta object code from reading C++ file 'statsmode.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "statsmode.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statsmode.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSnetanimSCOPENodeButtonENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSnetanimSCOPENodeButtonENDCLASS = QtMocHelpers::stringData(
    "netanim::NodeButton",
    "buttonClickedSlot",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSnetanimSCOPENodeButtonENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[20];
    char stringdata1[18];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSnetanimSCOPENodeButtonENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSnetanimSCOPENodeButtonENDCLASS_t qt_meta_stringdata_CLASSnetanimSCOPENodeButtonENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "netanim::NodeButton"
        QT_MOC_LITERAL(20, 17),  // "buttonClickedSlot"
        QT_MOC_LITERAL(38, 0)   // ""
    },
    "netanim::NodeButton",
    "buttonClickedSlot",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSnetanimSCOPENodeButtonENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject netanim::NodeButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSnetanimSCOPENodeButtonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSnetanimSCOPENodeButtonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSnetanimSCOPENodeButtonENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NodeButton, std::true_type>,
        // method 'buttonClickedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void netanim::NodeButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NodeButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->buttonClickedSlot(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *netanim::NodeButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netanim::NodeButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSnetanimSCOPENodeButtonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int netanim::NodeButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSnetanimSCOPEStatsModeENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSnetanimSCOPEStatsModeENDCLASS = QtMocHelpers::stringData(
    "netanim::StatsMode",
    "testSlot",
    "",
    "clickRoutingTraceFileOpenSlot",
    "selectAllNodesSlot",
    "deselectAllNodesSlot",
    "statTypeChangedSlot",
    "index",
    "updateTimelineSlot",
    "value",
    "fontSizeSlot",
    "clickFlowMonTraceFileOpenSlot",
    "allowedNodesChangedSlot",
    "allowedNodes",
    "counterIndexChangedSlot",
    "counterString",
    "showChartSlot"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSnetanimSCOPEStatsModeENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[19];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[30];
    char stringdata4[19];
    char stringdata5[21];
    char stringdata6[20];
    char stringdata7[6];
    char stringdata8[19];
    char stringdata9[6];
    char stringdata10[13];
    char stringdata11[30];
    char stringdata12[24];
    char stringdata13[13];
    char stringdata14[24];
    char stringdata15[14];
    char stringdata16[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSnetanimSCOPEStatsModeENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSnetanimSCOPEStatsModeENDCLASS_t qt_meta_stringdata_CLASSnetanimSCOPEStatsModeENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "netanim::StatsMode"
        QT_MOC_LITERAL(19, 8),  // "testSlot"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 29),  // "clickRoutingTraceFileOpenSlot"
        QT_MOC_LITERAL(59, 18),  // "selectAllNodesSlot"
        QT_MOC_LITERAL(78, 20),  // "deselectAllNodesSlot"
        QT_MOC_LITERAL(99, 19),  // "statTypeChangedSlot"
        QT_MOC_LITERAL(119, 5),  // "index"
        QT_MOC_LITERAL(125, 18),  // "updateTimelineSlot"
        QT_MOC_LITERAL(144, 5),  // "value"
        QT_MOC_LITERAL(150, 12),  // "fontSizeSlot"
        QT_MOC_LITERAL(163, 29),  // "clickFlowMonTraceFileOpenSlot"
        QT_MOC_LITERAL(193, 23),  // "allowedNodesChangedSlot"
        QT_MOC_LITERAL(217, 12),  // "allowedNodes"
        QT_MOC_LITERAL(230, 23),  // "counterIndexChangedSlot"
        QT_MOC_LITERAL(254, 13),  // "counterString"
        QT_MOC_LITERAL(268, 13)   // "showChartSlot"
    },
    "netanim::StatsMode",
    "testSlot",
    "",
    "clickRoutingTraceFileOpenSlot",
    "selectAllNodesSlot",
    "deselectAllNodesSlot",
    "statTypeChangedSlot",
    "index",
    "updateTimelineSlot",
    "value",
    "fontSizeSlot",
    "clickFlowMonTraceFileOpenSlot",
    "allowedNodesChangedSlot",
    "allowedNodes",
    "counterIndexChangedSlot",
    "counterString",
    "showChartSlot"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSnetanimSCOPEStatsModeENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x0a,    1 /* Public */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    1,   84,    2, 0x08,    5 /* Private */,
       8,    1,   87,    2, 0x08,    7 /* Private */,
      10,    1,   90,    2, 0x08,    9 /* Private */,
      11,    0,   93,    2, 0x08,   11 /* Private */,
      12,    1,   94,    2, 0x08,   12 /* Private */,
      14,    1,   97,    2, 0x08,   14 /* Private */,
      16,    0,  100,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject netanim::StatsMode::staticMetaObject = { {
    QMetaObject::SuperData::link<Mode::staticMetaObject>(),
    qt_meta_stringdata_CLASSnetanimSCOPEStatsModeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSnetanimSCOPEStatsModeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSnetanimSCOPEStatsModeENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StatsMode, std::true_type>,
        // method 'testSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clickRoutingTraceFileOpenSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectAllNodesSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deselectAllNodesSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'statTypeChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateTimelineSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'fontSizeSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'clickFlowMonTraceFileOpenSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'allowedNodesChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'counterIndexChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'showChartSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void netanim::StatsMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatsMode *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->testSlot(); break;
        case 1: _t->clickRoutingTraceFileOpenSlot(); break;
        case 2: _t->selectAllNodesSlot(); break;
        case 3: _t->deselectAllNodesSlot(); break;
        case 4: _t->statTypeChangedSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->updateTimelineSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->fontSizeSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->clickFlowMonTraceFileOpenSlot(); break;
        case 8: _t->allowedNodesChangedSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->counterIndexChangedSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->showChartSlot(); break;
        default: ;
        }
    }
}

const QMetaObject *netanim::StatsMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netanim::StatsMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSnetanimSCOPEStatsModeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Mode::qt_metacast(_clname);
}

int netanim::StatsMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Mode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
