/********************************************************************************
** Form generated from reading UI file 'edit_display_course.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_DISPLAY_COURSE_H
#define UI_EDIT_DISPLAY_COURSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_edit_display_course
{
public:
    QTableWidget *table;
    QPushButton *Delete;

    void setupUi(QDialog *edit_display_course)
    {
        if (edit_display_course->objectName().isEmpty())
            edit_display_course->setObjectName("edit_display_course");
        edit_display_course->resize(474, 351);
        table = new QTableWidget(edit_display_course);
        if (table->columnCount() < 3)
            table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        table->setObjectName("table");
        table->setGeometry(QRect(50, 20, 391, 291));
        Delete = new QPushButton(edit_display_course);
        Delete->setObjectName("Delete");
        Delete->setGeometry(QRect(200, 320, 83, 29));

        retranslateUi(edit_display_course);

        QMetaObject::connectSlotsByName(edit_display_course);
    } // setupUi

    void retranslateUi(QDialog *edit_display_course)
    {
        edit_display_course->setWindowTitle(QCoreApplication::translate("edit_display_course", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("edit_display_course", "Course Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("edit_display_course", "Course ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("edit_display_course", "Course Coef", nullptr));
        Delete->setText(QCoreApplication::translate("edit_display_course", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_display_course: public Ui_edit_display_course {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_DISPLAY_COURSE_H
