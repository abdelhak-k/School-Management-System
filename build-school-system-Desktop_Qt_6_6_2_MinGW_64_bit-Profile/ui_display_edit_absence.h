/********************************************************************************
** Form generated from reading UI file 'display_edit_absence.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAY_EDIT_ABSENCE_H
#define UI_DISPLAY_EDIT_ABSENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_display_edit_absence
{
public:
    QTableWidget *tableWidget;
    QPushButton *save;
    QSpinBox *spinBox;

    void setupUi(QDialog *display_edit_absence)
    {
        if (display_edit_absence->objectName().isEmpty())
            display_edit_absence->setObjectName("display_edit_absence");
        display_edit_absence->resize(550, 437);
        tableWidget = new QTableWidget(display_edit_absence);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font;
        font.setPointSize(6);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(170, 30, 251, 311));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        save = new QPushButton(display_edit_absence);
        save->setObjectName("save");
        save->setGeometry(QRect(200, 360, 83, 29));
        spinBox = new QSpinBox(display_edit_absence);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(320, 360, 48, 29));

        retranslateUi(display_edit_absence);

        QMetaObject::connectSlotsByName(display_edit_absence);
    } // setupUi

    void retranslateUi(QDialog *display_edit_absence)
    {
        display_edit_absence->setWindowTitle(QCoreApplication::translate("display_edit_absence", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("display_edit_absence", "Course name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("display_edit_absence", "Number of absences", nullptr));
        save->setText(QCoreApplication::translate("display_edit_absence", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class display_edit_absence: public Ui_display_edit_absence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAY_EDIT_ABSENCE_H
