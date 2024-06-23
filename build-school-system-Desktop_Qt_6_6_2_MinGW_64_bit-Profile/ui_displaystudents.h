/********************************************************************************
** Form generated from reading UI file 'displaystudents.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYSTUDENTS_H
#define UI_DISPLAYSTUDENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayStudents
{
public:
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Edit;
    QPushButton *Delete;
    QPushButton *EditGrades;
    QPushButton *edit_absence;

    void setupUi(QDialog *DisplayStudents)
    {
        if (DisplayStudents->objectName().isEmpty())
            DisplayStudents->setObjectName("DisplayStudents");
        DisplayStudents->resize(741, 510);
        tableWidget = new QTableWidget(DisplayStudents);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(60, 30, 641, 421));
        layoutWidget = new QWidget(DisplayStudents);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 460, 521, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Edit = new QPushButton(layoutWidget);
        Edit->setObjectName("Edit");

        horizontalLayout->addWidget(Edit);

        Delete = new QPushButton(layoutWidget);
        Delete->setObjectName("Delete");

        horizontalLayout->addWidget(Delete);

        EditGrades = new QPushButton(layoutWidget);
        EditGrades->setObjectName("EditGrades");

        horizontalLayout->addWidget(EditGrades);

        edit_absence = new QPushButton(layoutWidget);
        edit_absence->setObjectName("edit_absence");

        horizontalLayout->addWidget(edit_absence);


        retranslateUi(DisplayStudents);

        QMetaObject::connectSlotsByName(DisplayStudents);
    } // setupUi

    void retranslateUi(QDialog *DisplayStudents)
    {
        DisplayStudents->setWindowTitle(QCoreApplication::translate("DisplayStudents", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DisplayStudents", "First name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DisplayStudents", "Last name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DisplayStudents", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DisplayStudents", "scholar year", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DisplayStudents", "group", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DisplayStudents", "Date of birth", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DisplayStudents", "Phone", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DisplayStudents", "Email", nullptr));
        Edit->setText(QCoreApplication::translate("DisplayStudents", "Edit", nullptr));
        Delete->setText(QCoreApplication::translate("DisplayStudents", "Delete", nullptr));
        EditGrades->setText(QCoreApplication::translate("DisplayStudents", "Edit/Display Grades", nullptr));
        edit_absence->setText(QCoreApplication::translate("DisplayStudents", "Edit/Display absences", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayStudents: public Ui_DisplayStudents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYSTUDENTS_H
