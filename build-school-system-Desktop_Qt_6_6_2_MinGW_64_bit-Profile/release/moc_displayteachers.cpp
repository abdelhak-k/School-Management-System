/****************************************************************************
** Meta object code from reading C++ file 'displayteachers.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../school-system/displayteachers.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'displayteachers.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSdisplayTeachersENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSdisplayTeachersENDCLASS = QtMocHelpers::stringData(
    "displayTeachers",
    "on_tableWidget_cellClicked",
    "",
    "row",
    "column",
    "on_Edit_teacher_clicked",
    "on_Delete_teacher_clicked",
    "on_Assign_courses_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSdisplayTeachersENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[16];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[7];
    char stringdata5[24];
    char stringdata6[26];
    char stringdata7[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSdisplayTeachersENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSdisplayTeachersENDCLASS_t qt_meta_stringdata_CLASSdisplayTeachersENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "displayTeachers"
        QT_MOC_LITERAL(16, 26),  // "on_tableWidget_cellClicked"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 3),  // "row"
        QT_MOC_LITERAL(48, 6),  // "column"
        QT_MOC_LITERAL(55, 23),  // "on_Edit_teacher_clicked"
        QT_MOC_LITERAL(79, 25),  // "on_Delete_teacher_clicked"
        QT_MOC_LITERAL(105, 25)   // "on_Assign_courses_clicked"
    },
    "displayTeachers",
    "on_tableWidget_cellClicked",
    "",
    "row",
    "column",
    "on_Edit_teacher_clicked",
    "on_Delete_teacher_clicked",
    "on_Assign_courses_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSdisplayTeachersENDCLASS[] = {

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
       6,    0,   44,    2, 0x08,    5 /* Private */,
       7,    0,   45,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject displayTeachers::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSdisplayTeachersENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSdisplayTeachersENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSdisplayTeachersENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<displayTeachers, std::true_type>,
        // method 'on_tableWidget_cellClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_Edit_teacher_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Delete_teacher_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Assign_courses_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void displayTeachers::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<displayTeachers *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_tableWidget_cellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->on_Edit_teacher_clicked(); break;
        case 2: _t->on_Delete_teacher_clicked(); break;
        case 3: _t->on_Assign_courses_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *displayTeachers::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *displayTeachers::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSdisplayTeachersENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int displayTeachers::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
