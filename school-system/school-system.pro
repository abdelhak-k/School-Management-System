QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Waddstudent.cpp \
    Waddteacher.cpp \
    Wadminwindow.cpp \
    Wcreateaccount.cpp \
    Wlogindialog.cpp \
    course.cpp \
    datetime.cpp \
    display_assinged_courses.cpp \
    display_edit_absence.cpp \
    display_edit_grades.cpp \
    displaystudents.cpp \
    displayteachers.cpp \
    edit_display_course.cpp \
    edit_grade_dialog.cpp \
    edit_teacher_dialog.cpp \
    grade.cpp \
    main.cpp \
    mainwindow.cpp \
    person.cpp \
    prof.cpp \
    selectyear.cpp \
    student.cpp \
    waddcourse.cpp \
    wdisplay_edit_sutdent.cpp

HEADERS += \
    Waddstudent.h \
    Waddteacher.h \
    Wadminwindow.h \
    Wcreateaccount.h \
    Wlogindialog.h \
    course.h \
    datetime.h \
    display_assinged_courses.h \
    display_edit_absence.h \
    display_edit_grades.h \
    displaystudents.h \
    displayteachers.h \
    edit_display_course.h \
    edit_grade_dialog.h \
    edit_teacher_dialog.h \
    grade.h \
    mainwindow.h \
    person.h \
    prof.h \
    selectyear.h \
    student.h \
    waddcourse.h \
    wdisplay_edit_sutdent.h

FORMS += \
    Waddstudent.ui \
    Waddteacher.ui \
    Wadminwindow.ui \
    Wcreateaccount.ui \
    Wlogindialog.ui \
    display_assinged_courses.ui \
    display_edit_absence.ui \
    display_edit_grades.ui \
    displaystudents.ui \
    displayteachers.ui \
    edit_display_course.ui \
    edit_grade_dialog.ui \
    edit_teacher_dialog.ui \
    mainwindow.ui \
    selectyear.ui \
    waddcourse.ui \
    wdisplay_edit_sutdent.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../imgs/imgs.qrc \
    data.qrc


HEADERS += \
    Wlogindialog.h \
    course.h \
    datetime.h \
    grade.h \
    mainwindow.h \
    person.h \
    prof.h \
    student.h

FORMS += \
    Wlogindialog.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    data.qrc
