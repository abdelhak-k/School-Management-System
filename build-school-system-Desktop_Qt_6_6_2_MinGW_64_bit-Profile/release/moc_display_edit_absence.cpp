/****************************************************************************
** Meta object code from reading C++ file 'display_edit_absence.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../school-system/display_edit_absence.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'display_edit_absence.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdisplay_edit_absenceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdisplay_edit_absenceENDCLASS = QtMocHelpers::stringData(
    "display_edit_absence",
    "on_tableWidget_cellChanged",
    "",
    "row",
    "column",
    "on_save_clicked",
    "on_tableWidget_cellClicked",
    "on_spinBox_valueChanged",
    "arg1"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdisplay_edit_absenceENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[21];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[7];
    char stringdata5[16];
    char stringdata6[27];
    char stringdata7[24];
    char stringdata8[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdisplay_edit_absenceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdisplay_edit_absenceENDCLASS_t qt_meta_stringdata_CLASSdisplay_edit_absenceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "display_edit_absence"
        QT_MOC_LITERAL(21, 26),  // "on_tableWidget_cellChanged"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 3),  // "row"
        QT_MOC_LITERAL(53, 6),  // "column"
        QT_MOC_LITERAL(60, 15),  // "on_save_clicked"
        QT_MOC_LITERAL(76, 26),  // "on_tableWidget_cellClicked"
        QT_MOC_LITERAL(103, 23),  // "on_spinBox_valueChanged"
        QT_MOC_LITERAL(127, 4)   // "arg1"
    },
    "display_edit_absence",
    "on_tableWidget_cellChanged",
    "",
    "row",
    "column",
    "on_save_clicked",
    "on_tableWidget_cellClicked",
    "on_spinBox_valueChanged",
    "arg1"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdisplay_edit_absenceENDCLASS[] = {

 // content:
      12,       // revision
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
       5,    0,   43,    2, 0x08,    4 /* Private */,
       6,    2,   44,    2, 0x08,    5 /* Private */,
       7,    1,   49,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject display_edit_absence::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSdisplay_edit_absenceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdisplay_edit_absenceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdisplay_edit_absenceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<display_edit_absence, std::true_type>,
        // method 'on_tableWidget_cellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_save_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tableWidget_cellClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_spinBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void display_edit_absence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<display_edit_absence *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_tableWidget_cellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->on_save_clicked(); break;
        case 2: _t->on_tableWidget_cellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->on_spinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *display_edit_absence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *display_edit_absence::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdisplay_edit_absenceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int display_edit_absence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
