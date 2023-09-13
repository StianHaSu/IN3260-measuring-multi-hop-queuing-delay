/****************************************************************************
** Meta object code from reading C++ file 'fileeditfactory.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qtpropertybrowser/src/fileeditfactory.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileeditfactory.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFileEditFactoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFileEditFactoryENDCLASS = QtMocHelpers::stringData(
    "FileEditFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "property",
    "value",
    "slotFilterChanged",
    "filter",
    "slotSetValue",
    "slotEditorDestroyed",
    "object"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFileEditFactoryENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[16];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[9];
    char stringdata5[6];
    char stringdata6[18];
    char stringdata7[7];
    char stringdata8[13];
    char stringdata9[20];
    char stringdata10[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFileEditFactoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFileEditFactoryENDCLASS_t qt_meta_stringdata_CLASSFileEditFactoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "FileEditFactory"
        QT_MOC_LITERAL(16, 19),  // "slotPropertyChanged"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 11),  // "QtProperty*"
        QT_MOC_LITERAL(49, 8),  // "property"
        QT_MOC_LITERAL(58, 5),  // "value"
        QT_MOC_LITERAL(64, 17),  // "slotFilterChanged"
        QT_MOC_LITERAL(82, 6),  // "filter"
        QT_MOC_LITERAL(89, 12),  // "slotSetValue"
        QT_MOC_LITERAL(102, 19),  // "slotEditorDestroyed"
        QT_MOC_LITERAL(122, 6)   // "object"
    },
    "FileEditFactory",
    "slotPropertyChanged",
    "",
    "QtProperty*",
    "property",
    "value",
    "slotFilterChanged",
    "filter",
    "slotSetValue",
    "slotEditorDestroyed",
    "object"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFileEditFactoryENDCLASS[] = {

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
       6,    2,   43,    2, 0x08,    4 /* Private */,
       8,    1,   48,    2, 0x08,    7 /* Private */,
       9,    1,   51,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    7,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QObjectStar,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject FileEditFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QtAbstractEditorFactory<FilePathManager>::staticMetaObject>(),
    qt_meta_stringdata_CLASSFileEditFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFileEditFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFileEditFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileEditFactory, std::true_type>,
        // method 'slotPropertyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotFilterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QtProperty *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotSetValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotEditorDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void FileEditFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileEditFactory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotPropertyChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->slotFilterChanged((*reinterpret_cast< std::add_pointer_t<QtProperty*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->slotSetValue((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->slotEditorDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *FileEditFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileEditFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFileEditFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QtAbstractEditorFactory<FilePathManager>::qt_metacast(_clname);
}

int FileEditFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtAbstractEditorFactory<FilePathManager>::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
