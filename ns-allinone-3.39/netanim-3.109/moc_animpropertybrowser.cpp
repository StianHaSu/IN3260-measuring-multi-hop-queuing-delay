/****************************************************************************
** Meta object code from reading C++ file 'animpropertybrowser.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "animpropertybrowser.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animpropertybrowser.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSnetanimSCOPEAnimPropertyBroswerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSnetanimSCOPEAnimPropertyBroswerENDCLASS = QtMocHelpers::stringData(
    "netanim::AnimPropertyBroswer",
    "nodeIdSelectorSlot",
    "",
    "newIndex",
    "valueChangedSlot",
    "QtProperty*",
    "modeChangedSlot",
    "mode"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSnetanimSCOPEAnimPropertyBroswerENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[29];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[17];
    char stringdata5[12];
    char stringdata6[16];
    char stringdata7[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSnetanimSCOPEAnimPropertyBroswerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSnetanimSCOPEAnimPropertyBroswerENDCLASS_t qt_meta_stringdata_CLASSnetanimSCOPEAnimPropertyBroswerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28),  // "netanim::AnimPropertyBroswer"
        QT_MOC_LITERAL(29, 18),  // "nodeIdSelectorSlot"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 8),  // "newIndex"
        QT_MOC_LITERAL(58, 16),  // "valueChangedSlot"
        QT_MOC_LITERAL(75, 11),  // "QtProperty*"
        QT_MOC_LITERAL(87, 15),  // "modeChangedSlot"
        QT_MOC_LITERAL(103, 4)   // "mode"
    },
    "netanim::AnimPropertyBroswer",
    "nodeIdSelectorSlot",
    "",
    "newIndex",
    "valueChangedSlot",
    "QtProperty*",
    "modeChangedSlot",
    "mode"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSnetanimSCOPEAnimPropertyBroswerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x08,    1 /* Private */,
       4,    2,   53,    2, 0x08,    3 /* Private */,
       4,    2,   58,    2, 0x08,    6 /* Private */,
       4,    2,   63,    2, 0x08,    9 /* Private */,
       4,    2,   68,    2, 0x08,   12 /* Private */,
       6,    1,   73,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Double,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QColor,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject netanim::AnimPropertyBroswer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSnetanimSCOPEAnimPropertyBroswerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSnetanimSCOPEAnimPropertyBroswerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSnetanimSCOPEAnimPropertyBroswerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AnimPropertyBroswer, std::true_type>,
        // method 'nodeIdSelectorSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'valueChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'valueChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'valueChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'valueChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'modeChangedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void netanim::AnimPropertyBroswer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AnimPropertyBroswer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nodeIdSelectorSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->valueChangedSlot((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->valueChangedSlot((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 3: _t->valueChangedSlot((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2]))); break;
        case 4: _t->valueChangedSlot((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 5: _t->modeChangedSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *netanim::AnimPropertyBroswer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netanim::AnimPropertyBroswer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSnetanimSCOPEAnimPropertyBroswerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int netanim::AnimPropertyBroswer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
