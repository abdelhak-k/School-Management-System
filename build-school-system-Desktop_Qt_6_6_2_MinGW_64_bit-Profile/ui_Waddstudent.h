/********************************************************************************
** Form generated from reading UI file 'Waddstudent.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WADDSTUDENT_H
#define UI_WADDSTUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addStudent
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *ID;
    QLineEdit *group;
    QLineEdit *scholar_year;
    QLineEdit *email;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *day;
    QLineEdit *month;
    QLineEdit *year;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_11;
    QPushButton *add_student_button;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *last_name;
    QLineEdit *first_name;
    QLineEdit *phone;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_10;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;

    void setupUi(QDialog *addStudent)
    {
        if (addStudent->objectName().isEmpty())
            addStudent->setObjectName("addStudent");
        addStudent->resize(646, 349);
        layoutWidget = new QWidget(addStudent);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(400, 50, 191, 172));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        ID = new QLineEdit(layoutWidget);
        ID->setObjectName("ID");

        verticalLayout_4->addWidget(ID);

        group = new QLineEdit(layoutWidget);
        group->setObjectName("group");

        verticalLayout_4->addWidget(group);

        scholar_year = new QLineEdit(layoutWidget);
        scholar_year->setObjectName("scholar_year");

        verticalLayout_4->addWidget(scholar_year);

        email = new QLineEdit(layoutWidget);
        email->setObjectName("email");

        verticalLayout_4->addWidget(email);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        day = new QLineEdit(layoutWidget);
        day->setObjectName("day");

        horizontalLayout_2->addWidget(day);

        month = new QLineEdit(layoutWidget);
        month->setObjectName("month");

        horizontalLayout_2->addWidget(month);

        year = new QLineEdit(layoutWidget);
        year->setObjectName("year");

        horizontalLayout_2->addWidget(year);


        verticalLayout_4->addLayout(horizontalLayout_2);

        layoutWidget_2 = new QWidget(addStudent);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(310, 50, 90, 171));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName("label_7");

        verticalLayout_5->addWidget(label_7);

        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName("label_8");

        verticalLayout_5->addWidget(label_8);

        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName("label_9");

        verticalLayout_5->addWidget(label_9);

        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");

        verticalLayout_5->addWidget(label);

        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName("label_11");

        verticalLayout_5->addWidget(label_11);

        add_student_button = new QPushButton(addStudent);
        add_student_button->setObjectName("add_student_button");
        add_student_button->setGeometry(QRect(260, 280, 111, 29));
        layoutWidget1 = new QWidget(addStudent);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(100, 50, 181, 161));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        last_name = new QLineEdit(layoutWidget1);
        last_name->setObjectName("last_name");

        verticalLayout->addWidget(last_name);

        first_name = new QLineEdit(layoutWidget1);
        first_name->setObjectName("first_name");

        verticalLayout->addWidget(first_name);

        phone = new QLineEdit(layoutWidget1);
        phone->setObjectName("phone");

        verticalLayout->addWidget(phone);

        layoutWidget2 = new QWidget(addStudent);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 50, 81, 201));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName("label_3");

        verticalLayout_3->addWidget(label_3);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName("label_4");

        verticalLayout_3->addWidget(label_4);

        label_6 = new QLabel(addStudent);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(320, 230, 291, 20));
        label_10 = new QLabel(addStudent);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(320, 250, 311, 20));
        layoutWidget3 = new QWidget(addStudent);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(120, 220, 146, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget3);
        radioButton->setObjectName("radioButton");

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget3);
        radioButton_2->setObjectName("radioButton_2");

        horizontalLayout->addWidget(radioButton_2);


        retranslateUi(addStudent);

        QMetaObject::connectSlotsByName(addStudent);
    } // setupUi

    void retranslateUi(QDialog *addStudent)
    {
        addStudent->setWindowTitle(QCoreApplication::translate("addStudent", "Dialog", nullptr));
        label_7->setText(QCoreApplication::translate("addStudent", "ID:", nullptr));
        label_8->setText(QCoreApplication::translate("addStudent", "Group:", nullptr));
        label_9->setText(QCoreApplication::translate("addStudent", "Scholar Year:", nullptr));
        label->setText(QCoreApplication::translate("addStudent", "Email:", nullptr));
        label_11->setText(QCoreApplication::translate("addStudent", "Date of Birth:", nullptr));
        add_student_button->setText(QCoreApplication::translate("addStudent", "Add Student", nullptr));
        label_2->setText(QCoreApplication::translate("addStudent", "Last Name", nullptr));
        label_3->setText(QCoreApplication::translate("addStudent", "First Name", nullptr));
        label_5->setText(QCoreApplication::translate("addStudent", "Phone", nullptr));
        label_4->setText(QCoreApplication::translate("addStudent", "Gender", nullptr));
        label_6->setText(QCoreApplication::translate("addStudent", "not adding an email means generating one ", nullptr));
        label_10->setText(QCoreApplication::translate("addStudent", "automatically using the school domain name", nullptr));
        radioButton->setText(QCoreApplication::translate("addStudent", "female", nullptr));
        radioButton_2->setText(QCoreApplication::translate("addStudent", "male", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addStudent: public Ui_addStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WADDSTUDENT_H
