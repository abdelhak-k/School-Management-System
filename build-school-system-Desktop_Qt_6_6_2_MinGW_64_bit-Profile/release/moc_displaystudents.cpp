/****************************************************************************
** Meta object code from reading C++ file 'displaystudents.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../school-system/displaystudents.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'displaystudents.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDisplayStudentsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDisplayStudentsENDCLASS = QtMocHelpers::stringData(
    "DisplayStudents",
    "on_tableWidget_cellClicked",
    "",
    "row",
    "column",
    "on_editButton_clicked",
    "on_Delete_clicked",
    "on_EditGrades_clicked",
    "on_edit_absence_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDisplayStudentsENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[16];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[7];
    char stringdata5[22];
    char stringdata6[18];
    char stringdata7[22];
    char stringdata8[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDisplayStudentsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDisplayStudentsENDCLASS_t qt_meta_stringdata_CLASSDisplayStudentsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "DisplayStudents"
        QT_MOC_LITERAL(16, 26),  // "on_tableWidget_cellClicked"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 3),  // "row"
        QT_MOC_LITERAL(48, 6),  // "column"
        QT_MOC_LITERAL(55, 21),  // "on_editButton_clicked"
        QT_MOC_LITERAL(77, 17),  // "on_Delete_clicked"
        QT_MOC_LITERAL(95, 21),  // "on_EditGrades_clicked"
        QT_MOC_LITERAL(117, 23)   // "on_edit_absence_clicked"
    },
    "DisplayStudents",
    "on_tableWidget_cellClicked",
    "",
    "row",
    "column",
    "on_editButton_clicked",
    "on_Delete_clicked",
    "on_EditGrades_clicked",
    "on_edit_absence_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDisplayStudentsENDCLASS[] = {

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
       1,    2,   44,    2, 0x08,    1 /* Private */,
       5,    0,   49,    2, 0x08,    4 /* Private */,
       6,    0,   50,    2, 0x08,    5 /* Private */,
       7,    0,   51,    2, 0x08,    6 /* Private */,
       8,    0,   52,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DisplayStudents::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSDisplayStudentsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDisplayStudentsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDisplayStudentsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DisplayStudents, std::true_type>,
        // method 'on_tableWidget_cellClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_editButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Delete_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_EditGrades_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_edit_absence_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DisplayStudents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DisplayStudents *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_tableWidget_cellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->on_editButton_clicked(); break;
        case 2: _t->on_Delete_clicked(); break;
        case 3: _t->on_EditGrades_clicked(); break;
        case 4: _t->on_edit_absence_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *DisplayStudents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisplayStudents::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDisplayStudentsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DisplayStudents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
