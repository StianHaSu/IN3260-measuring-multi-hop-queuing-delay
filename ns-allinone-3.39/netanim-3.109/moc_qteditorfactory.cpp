/****************************************************************************
** Meta object code from reading C++ file 'qteditorfactory.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtpropertybrowser/src/qteditorfactory.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qteditorfactory.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQtSpinBoxFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtSpinBoxFactoryENDCLASS = QtMocHelpers::stringData(
    "QtSpinBoxFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotRangeChanged",
    "slotSingleStepChanged",
    "slotReadOnlyChanged",
    "slotSetValue",
    "slotEditorDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtSpinBoxFactoryENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[17];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[17];
    char stringdata5[22];
    char stringdata6[20];
    char stringdata7[13];
    char stringdata8[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtSpinBoxFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtSpinBoxFactoryENDCLASS_t qt_meta_stringdata_CLASSQtSpinBoxFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "QtSpinBoxFactory"
        QT_MOC_LITERAL(17, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 11),  // "QtProperty*"
        QT_MOC_LITERAL(50, 16),  // "slotRangeChanged"
        QT_MOC_LITERAL(67, 21),  // "slotSingleStepChanged"
        QT_MOC_LITERAL(89, 19),  // "slotReadOnlyChanged"
        QT_MOC_LITERAL(109, 12),  // "slotSetValue"
        QT_MOC_LITERAL(122, 19)   // "slotEditorDestroyed"
    },
    "QtSpinBoxFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotRangeChanged",
    "slotSingleStepChanged",
    "slotReadOnlyChanged",
    "slotSetValue",
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtSpinBoxFactoryENDCLASS[] = {

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
       1,    2,   50,    2, 0x08,    1 /* Private */,
       4,    3,   55,    2, 0x08,    4 /* Private */,
       5,    2,   62,    2, 0x08,    8 /* Private */,
       6,    2,   67,    2, 0x08,   11 /* Private */,
       7,    1,   72,    2, 0x08,   14 /* Private */,
       8,    1,   75,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtSpinBoxFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtIntPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtSpinBoxFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtSpinBoxFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtSpinBoxFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtSpinBoxFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotRangeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotSingleStepChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotReadOnlyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QtSpinBoxFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtSpinBoxFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->d_func()->slotSingleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotReadOnlyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtSpinBoxFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSpinBoxFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtSpinBoxFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacast(_clname);
}

int QtSpinBoxFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacall(_c, _id, _a);
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtSliderFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtSliderFactoryENDCLASS = QtMocHelpers::stringData(
    "QtSliderFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotRangeChanged",
    "slotSingleStepChanged",
    "slotSetValue",
    "slotEditorDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtSliderFactoryENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[16];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[17];
    char stringdata5[22];
    char stringdata6[13];
    char stringdata7[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtSliderFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtSliderFactoryENDCLASS_t qt_meta_stringdata_CLASSQtSliderFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "QtSliderFactory"
        QT_MOC_LITERAL(16, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 11),  // "QtProperty*"
        QT_MOC_LITERAL(49, 16),  // "slotRangeChanged"
        QT_MOC_LITERAL(66, 21),  // "slotSingleStepChanged"
        QT_MOC_LITERAL(88, 12),  // "slotSetValue"
        QT_MOC_LITERAL(101, 19)   // "slotEditorDestroyed"
    },
    "QtSliderFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotRangeChanged",
    "slotSingleStepChanged",
    "slotSetValue",
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtSliderFactoryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x08,    1 /* Private */,
       4,    3,   49,    2, 0x08,    4 /* Private */,
       5,    2,   56,    2, 0x08,    8 /* Private */,
       6,    1,   61,    2, 0x08,   11 /* Private */,
       7,    1,   64,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtSliderFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtIntPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtSliderFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtSliderFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtSliderFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtSliderFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotRangeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotSingleStepChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QtSliderFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtSliderFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->d_func()->slotSingleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtSliderFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSliderFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtSliderFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacast(_clname);
}

int QtSliderFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtScrollBarFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtScrollBarFactoryENDCLASS = QtMocHelpers::stringData(
    "QtScrollBarFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotRangeChanged",
    "slotSingleStepChanged",
    "slotSetValue",
    "slotEditorDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtScrollBarFactoryENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[19];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[17];
    char stringdata5[22];
    char stringdata6[13];
    char stringdata7[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtScrollBarFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtScrollBarFactoryENDCLASS_t qt_meta_stringdata_CLASSQtScrollBarFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "QtScrollBarFactory"
        QT_MOC_LITERAL(19, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 11),  // "QtProperty*"
        QT_MOC_LITERAL(52, 16),  // "slotRangeChanged"
        QT_MOC_LITERAL(69, 21),  // "slotSingleStepChanged"
        QT_MOC_LITERAL(91, 12),  // "slotSetValue"
        QT_MOC_LITERAL(104, 19)   // "slotEditorDestroyed"
    },
    "QtScrollBarFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotRangeChanged",
    "slotSingleStepChanged",
    "slotSetValue",
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtScrollBarFactoryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x08,    1 /* Private */,
       4,    3,   49,    2, 0x08,    4 /* Private */,
       5,    2,   56,    2, 0x08,    8 /* Private */,
       6,    1,   61,    2, 0x08,   11 /* Private */,
       7,    1,   64,    2, 0x08,   13 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtScrollBarFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtIntPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtScrollBarFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtScrollBarFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtScrollBarFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtScrollBarFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotRangeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotSingleStepChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QtScrollBarFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtScrollBarFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 2: _t->d_func()->slotSingleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtScrollBarFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtScrollBarFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtScrollBarFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacast(_clname);
}

int QtScrollBarFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtIntPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtCheckBoxFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtCheckBoxFactoryENDCLASS = QtMocHelpers::stringData(
    "QtCheckBoxFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotTextVisibleChanged",
    "slotSetValue",
    "slotEditorDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtCheckBoxFactoryENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[18];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[23];
    char stringdata5[13];
    char stringdata6[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtCheckBoxFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtCheckBoxFactoryENDCLASS_t qt_meta_stringdata_CLASSQtCheckBoxFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QtCheckBoxFactory"
        QT_MOC_LITERAL(18, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 11),  // "QtProperty*"
        QT_MOC_LITERAL(51, 22),  // "slotTextVisibleChanged"
        QT_MOC_LITERAL(74, 12),  // "slotSetValue"
        QT_MOC_LITERAL(87, 19)   // "slotEditorDestroyed"
    },
    "QtCheckBoxFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotTextVisibleChanged",
    "slotSetValue",
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtCheckBoxFactoryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x08,    1 /* Private */,
       4,    2,   43,    2, 0x08,    4 /* Private */,
       5,    1,   48,    2, 0x08,    7 /* Private */,
       6,    1,   51,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtCheckBoxFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtBoolPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtCheckBoxFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtCheckBoxFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtCheckBoxFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtCheckBoxFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotTextVisibleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QtCheckBoxFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtCheckBoxFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->d_func()->slotTextVisibleChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtCheckBoxFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCheckBoxFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtCheckBoxFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtBoolPropertyManager>::qt_metacast(_clname);
}

int QtCheckBoxFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtBoolPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtDoubleSpinBoxFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtDoubleSpinBoxFactoryENDCLASS = QtMocHelpers::stringData(
    "QtDoubleSpinBoxFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotRangeChanged",
    "slotSingleStepChanged",
    "slotDecimalsChanged",
    "slotReadOnlyChanged",
    "slotSetValue",
    "slotEditorDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtDoubleSpinBoxFactoryENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[23];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[17];
    char stringdata5[22];
    char stringdata6[20];
    char stringdata7[20];
    char stringdata8[13];
    char stringdata9[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtDoubleSpinBoxFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtDoubleSpinBoxFactoryENDCLASS_t qt_meta_stringdata_CLASSQtDoubleSpinBoxFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "QtDoubleSpinBoxFactory"
        QT_MOC_LITERAL(23, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 11),  // "QtProperty*"
        QT_MOC_LITERAL(56, 16),  // "slotRangeChanged"
        QT_MOC_LITERAL(73, 21),  // "slotSingleStepChanged"
        QT_MOC_LITERAL(95, 19),  // "slotDecimalsChanged"
        QT_MOC_LITERAL(115, 19),  // "slotReadOnlyChanged"
        QT_MOC_LITERAL(135, 12),  // "slotSetValue"
        QT_MOC_LITERAL(148, 19)   // "slotEditorDestroyed"
    },
    "QtDoubleSpinBoxFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotRangeChanged",
    "slotSingleStepChanged",
    "slotDecimalsChanged",
    "slotReadOnlyChanged",
    "slotSetValue",
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtDoubleSpinBoxFactoryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   56,    2, 0x08,    1 /* Private */,
       4,    3,   61,    2, 0x08,    4 /* Private */,
       5,    2,   68,    2, 0x08,    8 /* Private */,
       6,    2,   73,    2, 0x08,   11 /* Private */,
       7,    2,   78,    2, 0x08,   14 /* Private */,
       8,    1,   83,    2, 0x08,   17 /* Private */,
       9,    1,   86,    2, 0x08,   19 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Double,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtDoubleSpinBoxFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtDoublePropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtDoubleSpinBoxFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtDoubleSpinBoxFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtDoubleSpinBoxFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtDoubleSpinBoxFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'slotRangeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'slotSingleStepChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'slotDecimalsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotReadOnlyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QtDoubleSpinBoxFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtDoubleSpinBoxFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 2: _t->d_func()->slotSingleStepChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 3: _t->d_func()->slotDecimalsChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->d_func()->slotReadOnlyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 5: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 6: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtDoubleSpinBoxFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDoubleSpinBoxFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtDoubleSpinBoxFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtDoublePropertyManager>::qt_metacast(_clname);
}

int QtDoubleSpinBoxFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtDoublePropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtLineEditFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtLineEditFactoryENDCLASS = QtMocHelpers::stringData(
    "QtLineEditFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotRegExpChanged",
    "slotEchoModeChanged",
    "slotReadOnlyChanged",
    "slotSetValue",
    "slotEditorDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtLineEditFactoryENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[18];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[18];
    char stringdata5[20];
    char stringdata6[20];
    char stringdata7[13];
    char stringdata8[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtLineEditFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtLineEditFactoryENDCLASS_t qt_meta_stringdata_CLASSQtLineEditFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QtLineEditFactory"
        QT_MOC_LITERAL(18, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 11),  // "QtProperty*"
        QT_MOC_LITERAL(51, 17),  // "slotRegExpChanged"
        QT_MOC_LITERAL(69, 19),  // "slotEchoModeChanged"
        QT_MOC_LITERAL(89, 19),  // "slotReadOnlyChanged"
        QT_MOC_LITERAL(109, 12),  // "slotSetValue"
        QT_MOC_LITERAL(122, 19)   // "slotEditorDestroyed"
    },
    "QtLineEditFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotRegExpChanged",
    "slotEchoModeChanged",
    "slotReadOnlyChanged",
    "slotSetValue",
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtLineEditFactoryENDCLASS[] = {

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
       1,    2,   50,    2, 0x08,    1 /* Private */,
       4,    2,   55,    2, 0x08,    4 /* Private */,
       5,    2,   60,    2, 0x08,    7 /* Private */,
       6,    2,   65,    2, 0x08,   10 /* Private */,
       7,    1,   70,    2, 0x08,   13 /* Private */,
       8,    1,   73,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QRegularExpression,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtLineEditFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtStringPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtLineEditFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtLineEditFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtLineEditFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtLineEditFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotRegExpChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRegularExpression &, std::false_type>,
        // method 'slotEchoModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotReadOnlyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QtLineEditFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtLineEditFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->d_func()->slotRegExpChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QRegularExpression>>(_a[2]))); break;
        case 2: _t->d_func()->slotEchoModeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->d_func()->slotReadOnlyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtLineEditFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtLineEditFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtLineEditFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtStringPropertyManager>::qt_metacast(_clname);
}

int QtLineEditFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtStringPropertyManager>::qt_metacall(_c, _id, _a);
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtDateEditFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtDateEditFactoryENDCLASS = QtMocHelpers::stringData(
    "QtDateEditFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotRangeChanged",
    "slotSetValue",
    "slotEditorDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtDateEditFactoryENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[18];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[17];
    char stringdata5[13];
    char stringdata6[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtDateEditFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtDateEditFactoryENDCLASS_t qt_meta_stringdata_CLASSQtDateEditFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QtDateEditFactory"
        QT_MOC_LITERAL(18, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 11),  // "QtProperty*"
        QT_MOC_LITERAL(51, 16),  // "slotRangeChanged"
        QT_MOC_LITERAL(68, 12),  // "slotSetValue"
        QT_MOC_LITERAL(81, 19)   // "slotEditorDestroyed"
    },
    "QtDateEditFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotRangeChanged",
    "slotSetValue",
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtDateEditFactoryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x08,    1 /* Private */,
       4,    3,   43,    2, 0x08,    4 /* Private */,
       5,    1,   50,    2, 0x08,    8 /* Private */,
       6,    1,   53,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QDate,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QDate, QMetaType::QDate,    2,    2,    2,
    QMetaType::Void, QMetaType::QDate,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtDateEditFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtDatePropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtDateEditFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtDateEditFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtDateEditFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtDateEditFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'slotRangeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QtDateEditFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtDateEditFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2]))); break;
        case 1: _t->d_func()->slotRangeChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QDate>>(_a[3]))); break;
        case 2: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 3: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtDateEditFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDateEditFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtDateEditFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtDatePropertyManager>::qt_metacast(_clname);
}

int QtDateEditFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtDatePropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtTimeEditFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtTimeEditFactoryENDCLASS = QtMocHelpers::stringData(
    "QtTimeEditFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotSetValue",
    "slotEditorDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtTimeEditFactoryENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[18];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[13];
    char stringdata5[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtTimeEditFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtTimeEditFactoryENDCLASS_t qt_meta_stringdata_CLASSQtTimeEditFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "QtTimeEditFactory"
        QT_MOC_LITERAL(18, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 11),  // "QtProperty*"
        QT_MOC_LITERAL(51, 12),  // "slotSetValue"
        QT_MOC_LITERAL(64, 19)   // "slotEditorDestroyed"
    },
    "QtTimeEditFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotSetValue",
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtTimeEditFactoryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x08,    1 /* Private */,
       4,    1,   37,    2, 0x08,    4 /* Private */,
       5,    1,   40,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QTime,    2,    2,
    QMetaType::Void, QMetaType::QTime,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtTimeEditFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtTimePropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtTimeEditFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtTimeEditFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtTimeEditFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtTimeEditFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QTime &, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QtTimeEditFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtTimeEditFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTime>>(_a[2]))); break;
        case 1: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtTimeEditFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtTimeEditFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtTimeEditFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtTimePropertyManager>::qt_metacast(_clname);
}

int QtTimeEditFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtTimePropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtDateTimeEditFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtDateTimeEditFactoryENDCLASS = QtMocHelpers::stringData(
    "QtDateTimeEditFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotSetValue",
    "slotEditorDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtDateTimeEditFactoryENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[22];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[13];
    char stringdata5[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtDateTimeEditFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtDateTimeEditFactoryENDCLASS_t qt_meta_stringdata_CLASSQtDateTimeEditFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "QtDateTimeEditFactory"
        QT_MOC_LITERAL(22, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 11),  // "QtProperty*"
        QT_MOC_LITERAL(55, 12),  // "slotSetValue"
        QT_MOC_LITERAL(68, 19)   // "slotEditorDestroyed"
    },
    "QtDateTimeEditFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotSetValue",
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtDateTimeEditFactoryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x08,    1 /* Private */,
       4,    1,   37,    2, 0x08,    4 /* Private */,
       5,    1,   40,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QDateTime,    2,    2,
    QMetaType::Void, QMetaType::QDateTime,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtDateTimeEditFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtDateTimePropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtDateTimeEditFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtDateTimeEditFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtDateTimeEditFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtDateTimeEditFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QtDateTimeEditFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtDateTimeEditFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2]))); break;
        case 1: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[1]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtDateTimeEditFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDateTimeEditFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtDateTimeEditFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtDateTimePropertyManager>::qt_metacast(_clname);
}

int QtDateTimeEditFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtDateTimePropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtKeySequenceEditorFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtKeySequenceEditorFactoryENDCLASS = QtMocHelpers::stringData(
    "QtKeySequenceEditorFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "QKeySequence",
    "slotSetValue",
    "slotEditorDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtKeySequenceEditorFactoryENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[27];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[13];
    char stringdata5[13];
    char stringdata6[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtKeySequenceEditorFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtKeySequenceEditorFactoryENDCLASS_t qt_meta_stringdata_CLASSQtKeySequenceEditorFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "QtKeySequenceEditorFactory"
        QT_MOC_LITERAL(27, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 11),  // "QtProperty*"
        QT_MOC_LITERAL(60, 12),  // "QKeySequence"
        QT_MOC_LITERAL(73, 12),  // "slotSetValue"
        QT_MOC_LITERAL(86, 19)   // "slotEditorDestroyed"
    },
    "QtKeySequenceEditorFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "QKeySequence",
    "slotSetValue",
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtKeySequenceEditorFactoryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x08,    1 /* Private */,
       5,    1,   37,    2, 0x08,    4 /* Private */,
       6,    1,   40,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtKeySequenceEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtKeySequencePropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtKeySequenceEditorFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtKeySequenceEditorFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtKeySequenceEditorFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtKeySequenceEditorFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QKeySequence &, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QKeySequence &, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QtKeySequenceEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtKeySequenceEditorFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[2]))); break;
        case 1: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[1]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtKeySequenceEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtKeySequenceEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtKeySequenceEditorFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtKeySequencePropertyManager>::qt_metacast(_clname);
}

int QtKeySequenceEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtKeySequencePropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtCharEditorFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtCharEditorFactoryENDCLASS = QtMocHelpers::stringData(
    "QtCharEditorFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotSetValue",
    "slotEditorDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtCharEditorFactoryENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[20];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[13];
    char stringdata5[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtCharEditorFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtCharEditorFactoryENDCLASS_t qt_meta_stringdata_CLASSQtCharEditorFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QtCharEditorFactory"
        QT_MOC_LITERAL(20, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 11),  // "QtProperty*"
        QT_MOC_LITERAL(53, 12),  // "slotSetValue"
        QT_MOC_LITERAL(66, 19)   // "slotEditorDestroyed"
    },
    "QtCharEditorFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotSetValue",
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtCharEditorFactoryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x08,    1 /* Private */,
       4,    1,   37,    2, 0x08,    4 /* Private */,
       5,    1,   40,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QChar,    2,    2,
    QMetaType::Void, QMetaType::QChar,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtCharEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtCharPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtCharEditorFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtCharEditorFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtCharEditorFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtCharEditorFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QChar &, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QChar &, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QtCharEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtCharEditorFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QChar>>(_a[2]))); break;
        case 1: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QChar>>(_a[1]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtCharEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtCharEditorFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtCharPropertyManager>::qt_metacast(_clname);
}

int QtCharEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtCharPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtEnumEditorFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtEnumEditorFactoryENDCLASS = QtMocHelpers::stringData(
    "QtEnumEditorFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotEnumNamesChanged",
    "slotEnumIconsChanged",
    "QMap<int,QIcon>",
    "slotSetValue",
    "slotEditorDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtEnumEditorFactoryENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[20];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[21];
    char stringdata5[21];
    char stringdata6[16];
    char stringdata7[13];
    char stringdata8[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtEnumEditorFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtEnumEditorFactoryENDCLASS_t qt_meta_stringdata_CLASSQtEnumEditorFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QtEnumEditorFactory"
        QT_MOC_LITERAL(20, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 11),  // "QtProperty*"
        QT_MOC_LITERAL(53, 20),  // "slotEnumNamesChanged"
        QT_MOC_LITERAL(74, 20),  // "slotEnumIconsChanged"
        QT_MOC_LITERAL(95, 15),  // "QMap<int,QIcon>"
        QT_MOC_LITERAL(111, 12),  // "slotSetValue"
        QT_MOC_LITERAL(124, 19)   // "slotEditorDestroyed"
    },
    "QtEnumEditorFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotEnumNamesChanged",
    "slotEnumIconsChanged",
    "QMap<int,QIcon>",
    "slotSetValue",
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtEnumEditorFactoryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x08,    1 /* Private */,
       4,    2,   49,    2, 0x08,    4 /* Private */,
       5,    2,   54,    2, 0x08,    7 /* Private */,
       7,    1,   59,    2, 0x08,   10 /* Private */,
       8,    1,   62,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList,    2,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtEnumEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtEnumPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtEnumEditorFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtEnumEditorFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtEnumEditorFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtEnumEditorFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotEnumNamesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'slotEnumIconsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMap<int,QIcon> &, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QtEnumEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtEnumEditorFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->d_func()->slotEnumNamesChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 2: _t->d_func()->slotEnumIconsChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<int,QIcon>>>(_a[2]))); break;
        case 3: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtEnumEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtEnumEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtEnumEditorFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtEnumPropertyManager>::qt_metacast(_clname);
}

int QtEnumEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtEnumPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtCursorEditorFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtCursorEditorFactoryENDCLASS = QtMocHelpers::stringData(
    "QtCursorEditorFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotEnumChanged",
    "slotEditorDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtCursorEditorFactoryENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[22];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[16];
    char stringdata5[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtCursorEditorFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtCursorEditorFactoryENDCLASS_t qt_meta_stringdata_CLASSQtCursorEditorFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "QtCursorEditorFactory"
        QT_MOC_LITERAL(22, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 11),  // "QtProperty*"
        QT_MOC_LITERAL(55, 15),  // "slotEnumChanged"
        QT_MOC_LITERAL(71, 19)   // "slotEditorDestroyed"
    },
    "QtCursorEditorFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotEnumChanged",
    "slotEditorDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtCursorEditorFactoryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x08,    1 /* Private */,
       4,    2,   37,    2, 0x08,    4 /* Private */,
       5,    1,   42,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QCursor,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtCursorEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtCursorPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtCursorEditorFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtCursorEditorFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtCursorEditorFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtCursorEditorFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCursor &, std::false_type>,
        // method 'slotEnumChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void QtCursorEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtCursorEditorFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QCursor>>(_a[2]))); break;
        case 1: _t->d_func()->slotEnumChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtCursorEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCursorEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtCursorEditorFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtCursorPropertyManager>::qt_metacast(_clname);
}

int QtCursorEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtCursorPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtColorEditorFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtColorEditorFactoryENDCLASS = QtMocHelpers::stringData(
    "QtColorEditorFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotEditorDestroyed",
    "slotSetValue"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtColorEditorFactoryENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[21];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[20];
    char stringdata5[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtColorEditorFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtColorEditorFactoryENDCLASS_t qt_meta_stringdata_CLASSQtColorEditorFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "QtColorEditorFactory"
        QT_MOC_LITERAL(21, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 11),  // "QtProperty*"
        QT_MOC_LITERAL(54, 19),  // "slotEditorDestroyed"
        QT_MOC_LITERAL(74, 12)   // "slotSetValue"
    },
    "QtColorEditorFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotEditorDestroyed",
    "slotSetValue"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtColorEditorFactoryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x08,    1 /* Private */,
       4,    1,   37,    2, 0x08,    4 /* Private */,
       5,    1,   40,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QColor,    2,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, QMetaType::QColor,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtColorEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtColorPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtColorEditorFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtColorEditorFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtColorEditorFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtColorEditorFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>
    >,
    nullptr
} };

void QtColorEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtColorEditorFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2]))); break;
        case 1: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 2: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtColorEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtColorEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtColorEditorFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtColorPropertyManager>::qt_metacast(_clname);
}

int QtColorEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtColorPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQtFontEditorFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQtFontEditorFactoryENDCLASS = QtMocHelpers::stringData(
    "QtFontEditorFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotEditorDestroyed",
    "slotSetValue"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQtFontEditorFactoryENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[20];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[20];
    char stringdata5[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQtFontEditorFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQtFontEditorFactoryENDCLASS_t qt_meta_stringdata_CLASSQtFontEditorFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "QtFontEditorFactory"
        QT_MOC_LITERAL(20, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 11),  // "QtProperty*"
        QT_MOC_LITERAL(53, 19),  // "slotEditorDestroyed"
        QT_MOC_LITERAL(73, 12)   // "slotSetValue"
    },
    "QtFontEditorFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "slotEditorDestroyed",
    "slotSetValue"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQtFontEditorFactoryENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x08,    1 /* Private */,
       4,    1,   37,    2, 0x08,    4 /* Private */,
       5,    1,   40,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QFont,    2,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, QMetaType::QFont,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QtFontEditorFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<QtFontPropertyManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSQtFontEditorFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQtFontEditorFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQtFontEditorFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QtFontEditorFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>
    >,
    nullptr
} };

void QtFontEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtFontEditorFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->d_func()->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QFont>>(_a[2]))); break;
        case 1: _t->d_func()->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 2: _t->d_func()->slotSetValue((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QtFontEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtFontEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQtFontEditorFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<QtFontPropertyManager>::qt_metacast(_clname);
}

int QtFontEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<QtFontPropertyManager>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
