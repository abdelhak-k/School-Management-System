/****************************************************************************
** Meta object code from reading C++ file 'display_assinged_courses.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../school-system/display_assinged_courses.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'display_assinged_courses.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDisplay_assinged_coursesENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDisplay_assinged_coursesENDCLASS = QtMocHelpers::stringData(
    "Display_assinged_courses",
    "addCourse",
    "",
    "deleteCourse",
    "saveCourses",
    "handleCellChanged",
    "row",
    "column",
    "handleCellClicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDisplay_assinged_coursesENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[25];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[12];
    char stringdata5[18];
    char stringdata6[4];
    char stringdata7[7];
    char stringdata8[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDisplay_assinged_coursesENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDisplay_assinged_coursesENDCLASS_t qt_meta_stringdata_CLASSDisplay_assinged_coursesENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "Display_assinged_courses"
        QT_MOC_LITERAL(25, 9),  // "addCourse"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 12),  // "deleteCourse"
        QT_MOC_LITERAL(49, 11),  // "saveCourses"
        QT_MOC_LITERAL(61, 17),  // "handleCellChanged"
        QT_MOC_LITERAL(79, 3),  // "row"
        QT_MOC_LITERAL(83, 6),  // "column"
        QT_MOC_LITERAL(90, 17)   // "handleCellClicked"
    },
    "Display_assinged_courses",
    "addCourse",
    "",
    "deleteCourse",
    "saveCourses",
    "handleCellChanged",
    "row",
    "column",
    "handleCellClicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDisplay_assinged_coursesENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    2,   47,    2, 0x08,    4 /* Private */,
       8,    2,   52,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject Display_assinged_courses::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSDisplay_assinged_coursesENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDisplay_assinged_coursesENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDisplay_assinged_coursesENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Display_assinged_courses, std::true_type>,
        // method 'addCourse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteCourse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveCourses'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleCellChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'handleCellClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Display_assinged_courses::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Display_assinged_courses *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addCourse(); break;
        case 1: _t->deleteCourse(); break;
        case 2: _t->saveCourses(); break;
        case 3: _t->handleCellChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->handleCellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *Display_assinged_courses::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Display_assinged_courses::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDisplay_assinged_coursesENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Display_assinged_courses::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
