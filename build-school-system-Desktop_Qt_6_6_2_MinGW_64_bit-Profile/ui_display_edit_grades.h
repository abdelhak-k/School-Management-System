/********************************************************************************
** Form generated from reading UI file 'display_edit_grades.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_EDIT_GRADES_H
#define UI_DISPLAY_EDIT_GRADES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Display_Edit_Grades
{
public:
    QTableWidget *tableWidget;
    QPushButton *cancelButton;
    QPushButton *editButton;

    void setupUi(QDialog *Display_Edit_Grades)
    {
        if (Display_Edit_Grades->objectName().isEmpty())
            Display_Edit_Grades->setObjectName("Display_Edit_Grades");
        Display_Edit_Grades->resize(565, 298);
        tableWidget = new QTableWidget(Display_Edit_Grades);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(40, 20, 501, 192));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        cancelButton = new QPushButton(Display_Edit_Grades);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(190, 240, 83, 29));
        editButton = new QPushButton(Display_Edit_Grades);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(300, 240, 83, 29));

        retranslateUi(Display_Edit_Grades);

        QMetaObject::connectSlotsByName(Display_Edit_Grades);
    } // setupUi

    void retranslateUi(QDialog *Display_Edit_Grades)
    {
        Display_Edit_Grades->setWindowTitle(QCoreApplication::translate("Display_Edit_Grades", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Display_Edit_Grades", "Course name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Display_Edit_Grades", "Mid Term", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Display_Edit_Grades", "Final Exam", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Display_Edit_Grades", "Cc Grade", nullptr));
        cancelButton->setText(QCoreApplication::translate("Display_Edit_Grades", "cancel", nullptr));
        editButton->setText(QCoreApplication::translate("Display_Edit_Grades", "edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Display_Edit_Grades: public Ui_Display_Edit_Grades {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_EDIT_GRADES_H
