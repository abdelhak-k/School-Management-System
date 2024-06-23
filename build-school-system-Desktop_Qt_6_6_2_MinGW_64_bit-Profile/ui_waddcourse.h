/********************************************************************************
** Form generated from reading UI file 'waddcourse.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WADDCOURSE_H
#define UI_WADDCOURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaddCourse
{
public:
    QLineEdit *CourseName;
    QLineEdit *courseID;
    QLineEdit *CourseCoef;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *addCourse;

    void setupUi(QWidget *WaddCourse)
    {
        if (WaddCourse->objectName().isEmpty())
            WaddCourse->setObjectName("WaddCourse");
        WaddCourse->resize(339, 334);
        CourseName = new QLineEdit(WaddCourse);
        CourseName->setObjectName("CourseName");
        CourseName->setGeometry(QRect(30, 110, 113, 28));
        courseID = new QLineEdit(WaddCourse);
        courseID->setObjectName("courseID");
        courseID->setGeometry(QRect(190, 110, 113, 28));
        CourseCoef = new QLineEdit(WaddCourse);
        CourseCoef->setObjectName("CourseCoef");
        CourseCoef->setGeometry(QRect(110, 210, 113, 28));
        label = new QLabel(WaddCourse);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 90, 101, 20));
        label_2 = new QLabel(WaddCourse);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 190, 91, 20));
        label_3 = new QLabel(WaddCourse);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 90, 71, 20));
        addCourse = new QPushButton(WaddCourse);
        addCourse->setObjectName("addCourse");
        addCourse->setGeometry(QRect(120, 280, 91, 29));

        retranslateUi(WaddCourse);

        QMetaObject::connectSlotsByName(WaddCourse);
    } // setupUi

    void retranslateUi(QWidget *WaddCourse)
    {
        WaddCourse->setWindowTitle(QCoreApplication::translate("WaddCourse", "Form", nullptr));
        label->setText(QCoreApplication::translate("WaddCourse", "Course name:", nullptr));
        label_2->setText(QCoreApplication::translate("WaddCourse", "Course Coef:", nullptr));
        label_3->setText(QCoreApplication::translate("WaddCourse", "Course ID:", nullptr));
        addCourse->setText(QCoreApplication::translate("WaddCourse", "Add Course", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WaddCourse: public Ui_WaddCourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WADDCOURSE_H
