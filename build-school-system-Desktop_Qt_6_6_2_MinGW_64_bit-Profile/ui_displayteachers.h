/********************************************************************************
** Form generated from reading UI file 'displayteachers.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYTEACHERS_H
#define UI_DISPLAYTEACHERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_displayTeachers
{
public:
    QTableWidget *tableWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Delete_teacher;
    QPushButton *Edit_teacher;
    QPushButton *Assign_courses;

    void setupUi(QDialog *displayTeachers)
    {
        if (displayTeachers->objectName().isEmpty())
            displayTeachers->setObjectName("displayTeachers");
        displayTeachers->resize(927, 566);
        tableWidget = new QTableWidget(displayTeachers);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
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
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(30, 20, 871, 421));
        widget = new QWidget(displayTeachers);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(320, 490, 381, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Delete_teacher = new QPushButton(widget);
        Delete_teacher->setObjectName("Delete_teacher");

        horizontalLayout->addWidget(Delete_teacher);

        Edit_teacher = new QPushButton(widget);
        Edit_teacher->setObjectName("Edit_teacher");

        horizontalLayout->addWidget(Edit_teacher);

        Assign_courses = new QPushButton(widget);
        Assign_courses->setObjectName("Assign_courses");

        horizontalLayout->addWidget(Assign_courses);


        retranslateUi(displayTeachers);

        QMetaObject::connectSlotsByName(displayTeachers);
    } // setupUi

    void retranslateUi(QDialog *displayTeachers)
    {
        displayTeachers->setWindowTitle(QCoreApplication::translate("displayTeachers", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("displayTeachers", "First name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("displayTeachers", "Last name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("displayTeachers", "email", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("displayTeachers", "phone", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("displayTeachers", "dateOfBirth", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("displayTeachers", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("displayTeachers", "specialization", nullptr));
        Delete_teacher->setText(QCoreApplication::translate("displayTeachers", "Delete", nullptr));
        Edit_teacher->setText(QCoreApplication::translate("displayTeachers", "Edit", nullptr));
        Assign_courses->setText(QCoreApplication::translate("displayTeachers", "Display/Edit assinged courses", nullptr));
    } // retranslateUi

};

namespace Ui {
    class displayTeachers: public Ui_displayTeachers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYTEACHERS_H
