/****************************************************************************
** Meta object code from reading C++ file 'edit_display_course.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../school-system/edit_display_course.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit_display_course.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
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
struct qt_meta_stringdata_CLASSedit_display_courseENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSedit_display_courseENDCLASS = QtMocHelpers::stringData(
    "edit_display_course",
    "on_table_cellClicked",
    "",
    "row",
    "column",
    "on_Delete_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSedit_display_courseENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[20];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[7];
    char stringdata5[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSedit_display_courseENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSedit_display_courseENDCLASS_t qt_meta_stringdata_CLASSedit_display_courseENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "edit_display_course"
        QT_MOC_LITERAL(20, 20),  // "on_table_cellClicked"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 3),  // "row"
        QT_MOC_LITERAL(46, 6),  // "column"
        QT_MOC_LITERAL(53, 17)   // "on_Delete_clicked"
    },
    "edit_display_course",
    "on_table_cellClicked",
    "",
    "row",
    "column",
    "on_Delete_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSedit_display_courseENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   26,    2, 0x08,    1 /* Private */,
       5,    0,   31,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject edit_display_course::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSedit_display_courseENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSedit_display_courseENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSedit_display_courseENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<edit_display_course, std::true_type>,
        // method 'on_table_cellClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_Delete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void edit_display_course::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<edit_display_course *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_table_cellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->on_Delete_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *edit_display_course::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edit_display_course::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSedit_display_courseENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int edit_display_course::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
