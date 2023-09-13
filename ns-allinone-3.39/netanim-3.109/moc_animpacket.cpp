/****************************************************************************
** Meta object code from reading C++ file 'animpacket.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "animpacket.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animpacket.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSnetanimSCOPEAnimWirelessCirclesENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSnetanimSCOPEAnimWirelessCirclesENDCLASS = QtMocHelpers::stringData(
    "netanim::AnimWirelessCircles",
    "rect"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSnetanimSCOPEAnimWirelessCirclesENDCLASS_t {
    uint offsetsAndSizes[4];
    char stringdata0[29];
    char stringdata1[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSnetanimSCOPEAnimWirelessCirclesENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSnetanimSCOPEAnimWirelessCirclesENDCLASS_t qt_meta_stringdata_CLASSnetanimSCOPEAnimWirelessCirclesENDCLASS = {
    {
        QT_MOC_LITERAL(0, 28),  // "netanim::AnimWirelessCircles"
        QT_MOC_LITERAL(29, 4)   // "rect"
    },
    "netanim::AnimWirelessCircles",
    "rect"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSnetanimSCOPEAnimWirelessCirclesENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QRectF, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject netanim::AnimWirelessCircles::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSnetanimSCOPEAnimWirelessCirclesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSnetanimSCOPEAnimWirelessCirclesENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSnetanimSCOPEAnimWirelessCirclesENDCLASS_t,
        // property 'rect'
        QtPrivate::TypeAndForceComplete<QRectF, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AnimWirelessCircles, std::true_type>
    >,
    nullptr
} };

void netanim::AnimWirelessCircles::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AnimWirelessCircles *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRectF*>(_v) = _t->rect(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AnimWirelessCircles *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRect(*reinterpret_cast< QRectF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *netanim::AnimWirelessCircles::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netanim::AnimWirelessCircles::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSnetanimSCOPEAnimWirelessCirclesENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsEllipseItem"))
        return static_cast< QGraphicsEllipseItem*>(this);
    return QObject::qt_metacast(_clname);
}

int netanim::AnimWirelessCircles::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSnetanimSCOPEAnimPacketENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSnetanimSCOPEAnimPacketENDCLASS = QtMocHelpers::stringData(
    "netanim::AnimPacket",
    "pos"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSnetanimSCOPEAnimPacketENDCLASS_t {
    uint offsetsAndSizes[4];
    char stringdata0[20];
    char stringdata1[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSnetanimSCOPEAnimPacketENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSnetanimSCOPEAnimPacketENDCLASS_t qt_meta_stringdata_CLASSnetanimSCOPEAnimPacketENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "netanim::AnimPacket"
        QT_MOC_LITERAL(20, 3)   // "pos"
    },
    "netanim::AnimPacket",
    "pos"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSnetanimSCOPEAnimPacketENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPointF, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject netanim::AnimPacket::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSnetanimSCOPEAnimPacketENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSnetanimSCOPEAnimPacketENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSnetanimSCOPEAnimPacketENDCLASS_t,
        // property 'pos'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AnimPacket, std::true_type>
    >,
    nullptr
} };

void netanim::AnimPacket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AnimPacket *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->pos(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AnimPacket *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPos(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *netanim::AnimPacket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netanim::AnimPacket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSnetanimSCOPEAnimPacketENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int netanim::AnimPacket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
