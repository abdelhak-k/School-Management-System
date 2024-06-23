/********************************************************************************
** Form generated from reading UI file 'Wadminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WADMINWINDOW_H
#define UI_WADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_10;
    QPushButton *add_course;
    QPushButton *display_edit_course;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout;
    QPushButton *add_student_button;
    QPushButton *Display_students;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *add_teacher_button;
    QPushButton *display_all_teachers_button;
    QLabel *label_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *teacher_ID_from_user;
    QPushButton *display_edit_teacher_button;
    QPushButton *delete_teacher_button;
    QPushButton *assinged_courses_of_prof;
    QLabel *label_6;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *student_ID_from_user;
    QPushButton *display_edit_student;
    QPushButton *display_edit_grade;
    QPushButton *display_edit_absence;
    QPushButton *delete_student_button;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName("AdminWindow");
        AdminWindow->setWindowModality(Qt::NonModal);
        AdminWindow->resize(1280, 720);
        AdminWindow->setMaximumSize(QSize(1280, 720));
        centralwidget = new QWidget(AdminWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(850, 160, 221, 91));
        verticalLayout_10 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        add_course = new QPushButton(layoutWidget_3);
        add_course->setObjectName("add_course");

        verticalLayout_10->addWidget(add_course);

        display_edit_course = new QPushButton(layoutWidget_3);
        display_edit_course->setObjectName("display_edit_course");

        verticalLayout_10->addWidget(display_edit_course);

        layoutWidget_4 = new QWidget(centralwidget);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(270, 160, 241, 81));
        verticalLayout = new QVBoxLayout(layoutWidget_4);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        add_student_button = new QPushButton(layoutWidget_4);
        add_student_button->setObjectName("add_student_button");

        verticalLayout->addWidget(add_student_button);

        Display_students = new QPushButton(layoutWidget_4);
        Display_students->setObjectName("Display_students");

        verticalLayout->addWidget(Display_students);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(570, 160, 231, 91));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        add_teacher_button = new QPushButton(layoutWidget_2);
        add_teacher_button->setObjectName("add_teacher_button");

        verticalLayout_2->addWidget(add_teacher_button);

        display_all_teachers_button = new QPushButton(layoutWidget_2);
        display_all_teachers_button->setObjectName("display_all_teachers_button");

        verticalLayout_2->addWidget(display_all_teachers_button);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(350, 270, 91, 21));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(570, 290, 231, 191));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        teacher_ID_from_user = new QLineEdit(layoutWidget);
        teacher_ID_from_user->setObjectName("teacher_ID_from_user");

        verticalLayout_6->addWidget(teacher_ID_from_user, 0, Qt::AlignHCenter);

        display_edit_teacher_button = new QPushButton(layoutWidget);
        display_edit_teacher_button->setObjectName("display_edit_teacher_button");

        verticalLayout_6->addWidget(display_edit_teacher_button);

        delete_teacher_button = new QPushButton(layoutWidget);
        delete_teacher_button->setObjectName("delete_teacher_button");

        verticalLayout_6->addWidget(delete_teacher_button);

        assinged_courses_of_prof = new QPushButton(layoutWidget);
        assinged_courses_of_prof->setObjectName("assinged_courses_of_prof");

        verticalLayout_6->addWidget(assinged_courses_of_prof);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(650, 270, 91, 21));
        layoutWidget_5 = new QWidget(centralwidget);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(270, 290, 231, 231));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        student_ID_from_user = new QLineEdit(layoutWidget_5);
        student_ID_from_user->setObjectName("student_ID_from_user");

        verticalLayout_4->addWidget(student_ID_from_user, 0, Qt::AlignHCenter);

        display_edit_student = new QPushButton(layoutWidget_5);
        display_edit_student->setObjectName("display_edit_student");

        verticalLayout_4->addWidget(display_edit_student);

        display_edit_grade = new QPushButton(layoutWidget_5);
        display_edit_grade->setObjectName("display_edit_grade");

        verticalLayout_4->addWidget(display_edit_grade);

        display_edit_absence = new QPushButton(layoutWidget_5);
        display_edit_absence->setObjectName("display_edit_absence");

        verticalLayout_4->addWidget(display_edit_absence);

        delete_student_button = new QPushButton(layoutWidget_5);
        delete_student_button->setObjectName("delete_student_button");

        verticalLayout_4->addWidget(delete_student_button);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(890, 130, 141, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 130, 141, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(600, 130, 141, 20));
        AdminWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AdminWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1280, 25));
        AdminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminWindow);
        statusbar->setObjectName("statusbar");
        AdminWindow->setStatusBar(statusbar);

        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "Admin Window", nullptr));
        add_course->setText(QCoreApplication::translate("AdminWindow", "Add Course", nullptr));
        display_edit_course->setText(QCoreApplication::translate("AdminWindow", "Display/Edit Course Info", nullptr));
        add_student_button->setText(QCoreApplication::translate("AdminWindow", "Add Student", nullptr));
        Display_students->setText(QCoreApplication::translate("AdminWindow", "Display All Students", nullptr));
        add_teacher_button->setText(QCoreApplication::translate("AdminWindow", "Add Teacher", nullptr));
        display_all_teachers_button->setText(QCoreApplication::translate("AdminWindow", "Display All Teachers", nullptr));
        label_5->setText(QCoreApplication::translate("AdminWindow", "Student ID", nullptr));
#if QT_CONFIG(whatsthis)
        teacher_ID_from_user->setWhatsThis(QCoreApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        teacher_ID_from_user->setText(QString());
        display_edit_teacher_button->setText(QCoreApplication::translate("AdminWindow", "Display/Edit Teacher Information", nullptr));
        delete_teacher_button->setText(QCoreApplication::translate("AdminWindow", "Delete Teacher", nullptr));
        assinged_courses_of_prof->setText(QCoreApplication::translate("AdminWindow", "Display/Edit assinged courses", nullptr));
        label_6->setText(QCoreApplication::translate("AdminWindow", "Teacher ID", nullptr));
#if QT_CONFIG(whatsthis)
        student_ID_from_user->setWhatsThis(QCoreApplication::translate("AdminWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        student_ID_from_user->setText(QString());
        display_edit_student->setText(QCoreApplication::translate("AdminWindow", "Display/Edit Student Information", nullptr));
        display_edit_grade->setText(QCoreApplication::translate("AdminWindow", "Display/Edit Student Grade", nullptr));
        display_edit_absence->setText(QCoreApplication::translate("AdminWindow", "Display/Edit Student absence", nullptr));
        delete_student_button->setText(QCoreApplication::translate("AdminWindow", "Delete Student", nullptr));
        label_3->setText(QCoreApplication::translate("AdminWindow", "courses managment", nullptr));
        label->setText(QCoreApplication::translate("AdminWindow", "Students managment", nullptr));
        label_2->setText(QCoreApplication::translate("AdminWindow", "teachers managment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WADMINWINDOW_H
