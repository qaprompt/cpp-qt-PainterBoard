/****************************************************************************
** Meta object code from reading C++ file 'QtnRibbonQuickAccessBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ribbon/src/ribbon/QtnRibbonQuickAccessBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtnRibbonQuickAccessBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qtitan__RibbonQuickAccessBar_t {
    QByteArrayData data[9];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qtitan__RibbonQuickAccessBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qtitan__RibbonQuickAccessBar_t qt_meta_stringdata_Qtitan__RibbonQuickAccessBar = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Qtitan::RibbonQuickAccessBar"
QT_MOC_LITERAL(1, 29, 17), // "showCustomizeMenu"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 6), // "QMenu*"
QT_MOC_LITERAL(4, 55, 4), // "menu"
QT_MOC_LITERAL(5, 60, 15), // "customizeAction"
QT_MOC_LITERAL(6, 76, 8), // "QAction*"
QT_MOC_LITERAL(7, 85, 24), // "aboutToShowCustomizeMenu"
QT_MOC_LITERAL(8, 110, 24) // "aboutToHideCustomizeMenu"

    },
    "Qtitan::RibbonQuickAccessBar\0"
    "showCustomizeMenu\0\0QMenu*\0menu\0"
    "customizeAction\0QAction*\0"
    "aboutToShowCustomizeMenu\0"
    "aboutToHideCustomizeMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qtitan__RibbonQuickAccessBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x08 /* Private */,
       7,    0,   40,    2, 0x08 /* Private */,
       8,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Qtitan::RibbonQuickAccessBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RibbonQuickAccessBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showCustomizeMenu((*reinterpret_cast< QMenu*(*)>(_a[1]))); break;
        case 1: _t->customizeAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->aboutToShowCustomizeMenu(); break;
        case 3: _t->aboutToHideCustomizeMenu(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMenu* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RibbonQuickAccessBar::*)(QMenu * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RibbonQuickAccessBar::showCustomizeMenu)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Qtitan::RibbonQuickAccessBar::staticMetaObject = { {
    &QToolBar::staticMetaObject,
    qt_meta_stringdata_Qtitan__RibbonQuickAccessBar.data,
    qt_meta_data_Qtitan__RibbonQuickAccessBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Qtitan::RibbonQuickAccessBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qtitan::RibbonQuickAccessBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qtitan__RibbonQuickAccessBar.stringdata0))
        return static_cast<void*>(this);
    return QToolBar::qt_metacast(_clname);
}

int Qtitan::RibbonQuickAccessBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QToolBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Qtitan::RibbonQuickAccessBar::showCustomizeMenu(QMenu * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
