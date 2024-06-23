/********************************************************************************
** Form generated from reading UI file 'wdisplay_edit_sutdent.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WDISPLAY_EDIT_SUTDENT_H
#define UI_WDISPLAY_EDIT_SUTDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Wdisplay_edit_sutdent
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *last_name;
    QLineEdit *first_name;
    QLineEdit *phone;
    QLineEdit *gender;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *ID;
    QLineEdit *group;
    QLineEdit *scholar_year;
    QLineEdit *email;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *day;
    QLineEdit *month;
    QLineEdit *year;
    QPushButton *editButton;
    QPushButton *Cancel_button;

    void setupUi(QDialog *Wdisplay_edit_sutdent)
    {
        if (Wdisplay_edit_sutdent->objectName().isEmpty())
            Wdisplay_edit_sutdent->setObjectName("Wdisplay_edit_sutdent");
        Wdisplay_edit_sutdent->resize(696, 479);
        layoutWidget = new QWidget(Wdisplay_edit_sutdent);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(130, 90, 181, 201));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        last_name = new QLineEdit(layoutWidget);
        last_name->setObjectName("last_name");
        last_name->setReadOnly(false);

        verticalLayout_2->addWidget(last_name);

        first_name = new QLineEdit(layoutWidget);
        first_name->setObjectName("first_name");
        first_name->setReadOnly(false);

        verticalLayout_2->addWidget(first_name);

        phone = new QLineEdit(layoutWidget);
        phone->setObjectName("phone");
        phone->setReadOnly(false);

        verticalLayout_2->addWidget(phone);

        gender = new QLineEdit(layoutWidget);
        gender->setObjectName("gender");
        gender->setReadOnly(false);

        verticalLayout_2->addWidget(gender);

        layoutWidget_3 = new QWidget(Wdisplay_edit_sutdent);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(340, 90, 90, 201));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_3);
        label_10->setObjectName("label_10");

        verticalLayout_6->addWidget(label_10);

        label_12 = new QLabel(layoutWidget_3);
        label_12->setObjectName("label_12");

        verticalLayout_6->addWidget(label_12);

        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName("label_13");

        verticalLayout_6->addWidget(label_13);

        label_14 = new QLabel(layoutWidget_3);
        label_14->setObjectName("label_14");

        verticalLayout_6->addWidget(label_14);

        label_15 = new QLabel(layoutWidget_3);
        label_15->setObjectName("label_15");

        verticalLayout_6->addWidget(label_15);

        layoutWidget_4 = new QWidget(Wdisplay_edit_sutdent);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(430, 90, 191, 172));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        ID = new QLineEdit(layoutWidget_4);
        ID->setObjectName("ID");
        ID->setReadOnly(false);

        verticalLayout_7->addWidget(ID);

        group = new QLineEdit(layoutWidget_4);
        group->setObjectName("group");
        group->setReadOnly(false);

        verticalLayout_7->addWidget(group);

        scholar_year = new QLineEdit(layoutWidget_4);
        scholar_year->setObjectName("scholar_year");
        scholar_year->setReadOnly(false);

        verticalLayout_7->addWidget(scholar_year);

        email = new QLineEdit(layoutWidget_4);
        email->setObjectName("email");
        email->setReadOnly(false);

        verticalLayout_7->addWidget(email);

        layoutWidget_5 = new QWidget(Wdisplay_edit_sutdent);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(50, 90, 81, 201));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget_5);
        label_17->setObjectName("label_17");

        verticalLayout_8->addWidget(label_17);

        label_18 = new QLabel(layoutWidget_5);
        label_18->setObjectName("label_18");

        verticalLayout_8->addWidget(label_18);

        label_19 = new QLabel(layoutWidget_5);
        label_19->setObjectName("label_19");

        verticalLayout_8->addWidget(label_19);

        label_20 = new QLabel(layoutWidget_5);
        label_20->setObjectName("label_20");

        verticalLayout_8->addWidget(label_20);

        layoutWidget1 = new QWidget(Wdisplay_edit_sutdent);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(430, 260, 189, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        day = new QLineEdit(layoutWidget1);
        day->setObjectName("day");
        day->setReadOnly(false);

        horizontalLayout_4->addWidget(day);

        month = new QLineEdit(layoutWidget1);
        month->setObjectName("month");
        month->setReadOnly(false);

        horizontalLayout_4->addWidget(month);

        year = new QLineEdit(layoutWidget1);
        year->setObjectName("year");
        year->setReadOnly(false);

        horizontalLayout_4->addWidget(year);

        editButton = new QPushButton(Wdisplay_edit_sutdent);
        editButton->setObjectName("editButton");
        editButton->setGeometry(QRect(300, 370, 83, 29));
        Cancel_button = new QPushButton(Wdisplay_edit_sutdent);
        Cancel_button->setObjectName("Cancel_button");
        Cancel_button->setGeometry(QRect(300, 400, 83, 29));

        retranslateUi(Wdisplay_edit_sutdent);

        QMetaObject::connectSlotsByName(Wdisplay_edit_sutdent);
    } // setupUi

    void retranslateUi(QDialog *Wdisplay_edit_sutdent)
    {
        Wdisplay_edit_sutdent->setWindowTitle(QCoreApplication::translate("Wdisplay_edit_sutdent", "Dialog", nullptr));
        label_10->setText(QCoreApplication::translate("Wdisplay_edit_sutdent", "ID:", nullptr));
        label_12->setText(QCoreApplication::translate("Wdisplay_edit_sutdent", "Group:", nullptr));
        label_13->setText(QCoreApplication::translate("Wdisplay_edit_sutdent", "Scholar Year:", nullptr));
        label_14->setText(QCoreApplication::translate("Wdisplay_edit_sutdent", "Email:", nullptr));
        label_15->setText(QCoreApplication::translate("Wdisplay_edit_sutdent", "Date of Birth:", nullptr));
        label_17->setText(QCoreApplication::translate("Wdisplay_edit_sutdent", "Last Name", nullptr));
        label_18->setText(QCoreApplication::translate("Wdisplay_edit_sutdent", "First Name", nullptr));
        label_19->setText(QCoreApplication::translate("Wdisplay_edit_sutdent", "Phone", nullptr));
        label_20->setText(QCoreApplication::translate("Wdisplay_edit_sutdent", "Gender", nullptr));
        editButton->setText(QCoreApplication::translate("Wdisplay_edit_sutdent", "Edit", nullptr));
        Cancel_button->setText(QCoreApplication::translate("Wdisplay_edit_sutdent", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wdisplay_edit_sutdent: public Ui_Wdisplay_edit_sutdent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WDISPLAY_EDIT_SUTDENT_H
