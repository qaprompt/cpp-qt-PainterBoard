/****************************************************************************
** Meta object code from reading C++ file 'QtnOfficeStyle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ribbon/src/styles/QtnOfficeStyle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnOfficeStyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtitan__OfficeStyle_t {
    QByteArrayData data[22];
    char stringdata0[336];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtitan__OfficeStyle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtitan__OfficeStyle_t qt_meta_stringdata_Qtitan__OfficeStyle = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Qtitan::OfficeStyle"
QT_MOC_LITERAL(1, 20, 5), // "theme"
QT_MOC_LITERAL(2, 26, 5), // "Theme"
QT_MOC_LITERAL(3, 32, 16), // "animationEnabled"
QT_MOC_LITERAL(4, 49, 13), // "ignoreDialogs"
QT_MOC_LITERAL(5, 63, 16), // "ignoreScrollBars"
QT_MOC_LITERAL(6, 80, 20), // "ignoreMDIWindowTitle"
QT_MOC_LITERAL(7, 101, 8), // "DPIAware"
QT_MOC_LITERAL(8, 110, 14), // "Office2007Blue"
QT_MOC_LITERAL(9, 125, 15), // "Office2007Black"
QT_MOC_LITERAL(10, 141, 16), // "Office2007Silver"
QT_MOC_LITERAL(11, 158, 14), // "Office2007Aqua"
QT_MOC_LITERAL(12, 173, 14), // "Windows7Scenic"
QT_MOC_LITERAL(13, 188, 16), // "Office2010Silver"
QT_MOC_LITERAL(14, 205, 14), // "Office2010Blue"
QT_MOC_LITERAL(15, 220, 15), // "Office2010Black"
QT_MOC_LITERAL(16, 236, 15), // "Office2013White"
QT_MOC_LITERAL(17, 252, 14), // "Office2013Gray"
QT_MOC_LITERAL(18, 267, 14), // "Office2013Dark"
QT_MOC_LITERAL(19, 282, 18), // "Office2016Colorful"
QT_MOC_LITERAL(20, 301, 15), // "Office2016White"
QT_MOC_LITERAL(21, 317, 18) // "Office2016DarkGray"

    },
    "Qtitan::OfficeStyle\0theme\0Theme\0"
    "animationEnabled\0ignoreDialogs\0"
    "ignoreScrollBars\0ignoreMDIWindowTitle\0"
    "DPIAware\0Office2007Blue\0Office2007Black\0"
    "Office2007Silver\0Office2007Aqua\0"
    "Windows7Scenic\0Office2010Silver\0"
    "Office2010Blue\0Office2010Black\0"
    "Office2013White\0Office2013Gray\0"
    "Office2013Dark\0Office2016Colorful\0"
    "Office2016White\0Office2016DarkGray"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtitan__OfficeStyle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       1,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, QMetaType::Bool, 0x00095103,
       4, QMetaType::Bool, 0x00095003,
       5, QMetaType::Bool, 0x00095003,
       6, QMetaType::Bool, 0x00095003,
       7, QMetaType::Bool, 0x00095103,

 // enums: name, alias, flags, count, data
       2,    2, 0x0,   14,   37,

 // enum data: key, value
       8, uint(Qtitan::OfficeStyle::Office2007Blue),
       9, uint(Qtitan::OfficeStyle::Office2007Black),
      10, uint(Qtitan::OfficeStyle::Office2007Silver),
      11, uint(Qtitan::OfficeStyle::Office2007Aqua),
      12, uint(Qtitan::OfficeStyle::Windows7Scenic),
      13, uint(Qtitan::OfficeStyle::Office2010Silver),
      14, uint(Qtitan::OfficeStyle::Office2010Blue),
      15, uint(Qtitan::OfficeStyle::Office2010Black),
      16, uint(Qtitan::OfficeStyle::Office2013White),
      17, uint(Qtitan::OfficeStyle::Office2013Gray),
      18, uint(Qtitan::OfficeStyle::Office2013Dark),
      19, uint(Qtitan::OfficeStyle::Office2016Colorful),
      20, uint(Qtitan::OfficeStyle::Office2016White),
      21, uint(Qtitan::OfficeStyle::Office2016DarkGray),

       0        // eod
};

void Qtitan::OfficeStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OfficeStyle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Theme*>(_v) = _t->getTheme(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isAnimationEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isDialogsIgnored(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isScrollBarsIgnored(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isMDIWindowTitleIgnored(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isDPIAware(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OfficeStyle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTheme(*reinterpret_cast< Theme*>(_v)); break;
        case 1: _t->setAnimationEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setDialogsIgnored(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setScrollBarsIgnored(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setMDIWindowTitleIgnored(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setDPIAware(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Qtitan::OfficeStyle::staticMetaObject = { {
    &CommonStyle::staticMetaObject,
    qt_meta_stringdata_Qtitan__OfficeStyle.data,
    qt_meta_data_Qtitan__OfficeStyle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Qtitan::OfficeStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtitan::OfficeStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__OfficeStyle.stringdata0))
        return static_cast<void*>(this);
    return CommonStyle::qt_metacast(_clname);
}

int Qtitan::OfficeStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CommonStyle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_Qtitan__OfficeStylePlugin_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtitan__OfficeStylePlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtitan__OfficeStylePlugin_t qt_meta_stringdata_Qtitan__OfficeStylePlugin = {
    {
QT_MOC_LITERAL(0, 0, 25) // "Qtitan::OfficeStylePlugin"

    },
    "Qtitan::OfficeStylePlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtitan__OfficeStylePlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Qtitan::OfficeStylePlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Qtitan::OfficeStylePlugin::staticMetaObject = { {
    &QStylePlugin::staticMetaObject,
    qt_meta_stringdata_Qtitan__OfficeStylePlugin.data,
    qt_meta_data_Qtitan__OfficeStylePlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Qtitan::OfficeStylePlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtitan::OfficeStylePlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__OfficeStylePlugin.stringdata0))
        return static_cast<void*>(this);
    return QStylePlugin::qt_metacast(_clname);
}

int Qtitan::OfficeStylePlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStylePlugin::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
