/********************************************************************************
** Form generated from reading UI file 'Waddteacher.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WADDTEACHER_H
#define UI_WADDTEACHER_H

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

class Ui_Waddteacher
{
public:
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *ID_2;
    QLineEdit *email_2;
    QLineEdit *specialization;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *add_teacher_button;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *last_name_2;
    QLineEdit *first_name_2;
    QLineEdit *phone_2;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label;
    QLabel *label_16;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *day_2;
    QLineEdit *month_2;
    QLineEdit *year_2;

    void setupUi(QDialog *Waddteacher)
    {
        if (Waddteacher->objectName().isEmpty())
            Waddteacher->setObjectName("Waddteacher");
        Waddteacher->resize(643, 442);
        layoutWidget_3 = new QWidget(Waddteacher);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(410, 100, 191, 121));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        ID_2 = new QLineEdit(layoutWidget_3);
        ID_2->setObjectName("ID_2");

        verticalLayout_6->addWidget(ID_2);

        email_2 = new QLineEdit(layoutWidget_3);
        email_2->setObjectName("email_2");

        verticalLayout_6->addWidget(email_2);

        specialization = new QLineEdit(layoutWidget_3);
        specialization->setObjectName("specialization");

        verticalLayout_6->addWidget(specialization);

        layoutWidget_6 = new QWidget(Waddteacher);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(30, 100, 81, 201));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget_6);
        label_18->setObjectName("label_18");

        verticalLayout_8->addWidget(label_18);

        label_19 = new QLabel(layoutWidget_6);
        label_19->setObjectName("label_19");

        verticalLayout_8->addWidget(label_19);

        label_20 = new QLabel(layoutWidget_6);
        label_20->setObjectName("label_20");

        verticalLayout_8->addWidget(label_20);

        label_21 = new QLabel(layoutWidget_6);
        label_21->setObjectName("label_21");

        verticalLayout_8->addWidget(label_21);

        layoutWidget_5 = new QWidget(Waddteacher);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(130, 270, 146, 28));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        radioButton_3 = new QRadioButton(layoutWidget_5);
        radioButton_3->setObjectName("radioButton_3");

        horizontalLayout_4->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(layoutWidget_5);
        radioButton_4->setObjectName("radioButton_4");

        horizontalLayout_4->addWidget(radioButton_4);

        add_teacher_button = new QPushButton(Waddteacher);
        add_teacher_button->setObjectName("add_teacher_button");
        add_teacher_button->setGeometry(QRect(270, 360, 111, 29));
        layoutWidget_7 = new QWidget(Waddteacher);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(110, 100, 181, 161));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        last_name_2 = new QLineEdit(layoutWidget_7);
        last_name_2->setObjectName("last_name_2");

        verticalLayout_2->addWidget(last_name_2);

        first_name_2 = new QLineEdit(layoutWidget_7);
        first_name_2->setObjectName("first_name_2");

        verticalLayout_2->addWidget(first_name_2);

        phone_2 = new QLineEdit(layoutWidget_7);
        phone_2->setObjectName("phone_2");

        verticalLayout_2->addWidget(phone_2);

        layoutWidget_4 = new QWidget(Waddteacher);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(310, 100, 93, 121));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_4);
        label_12->setObjectName("label_12");

        verticalLayout_7->addWidget(label_12);

        label_15 = new QLabel(layoutWidget_4);
        label_15->setObjectName("label_15");

        verticalLayout_7->addWidget(label_15);

        label = new QLabel(layoutWidget_4);
        label->setObjectName("label");

        verticalLayout_7->addWidget(label);

        label_16 = new QLabel(Waddteacher);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(320, 250, 88, 21));
        layoutWidget = new QWidget(Waddteacher);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(410, 240, 189, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        day_2 = new QLineEdit(layoutWidget);
        day_2->setObjectName("day_2");

        horizontalLayout_3->addWidget(day_2);

        month_2 = new QLineEdit(layoutWidget);
        month_2->setObjectName("month_2");

        horizontalLayout_3->addWidget(month_2);

        year_2 = new QLineEdit(layoutWidget);
        year_2->setObjectName("year_2");

        horizontalLayout_3->addWidget(year_2);


        retranslateUi(Waddteacher);

        QMetaObject::connectSlotsByName(Waddteacher);
    } // setupUi

    void retranslateUi(QDialog *Waddteacher)
    {
        Waddteacher->setWindowTitle(QCoreApplication::translate("Waddteacher", "Dialog", nullptr));
        label_18->setText(QCoreApplication::translate("Waddteacher", "Last Name", nullptr));
        label_19->setText(QCoreApplication::translate("Waddteacher", "First Name", nullptr));
        label_20->setText(QCoreApplication::translate("Waddteacher", "Phone", nullptr));
        label_21->setText(QCoreApplication::translate("Waddteacher", "Gender", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Waddteacher", "female", nullptr));
        radioButton_4->setText(QCoreApplication::translate("Waddteacher", "male", nullptr));
        add_teacher_button->setText(QCoreApplication::translate("Waddteacher", "Add Teacher", nullptr));
        label_12->setText(QCoreApplication::translate("Waddteacher", "ID:", nullptr));
        label_15->setText(QCoreApplication::translate("Waddteacher", "Email:", nullptr));
        label->setText(QCoreApplication::translate("Waddteacher", "specialization", nullptr));
        label_16->setText(QCoreApplication::translate("Waddteacher", "Date of Birth:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Waddteacher: public Ui_Waddteacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WADDTEACHER_H
