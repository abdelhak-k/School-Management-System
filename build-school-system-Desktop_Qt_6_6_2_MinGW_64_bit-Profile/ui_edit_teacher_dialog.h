/********************************************************************************
** Form generated from reading UI file 'edit_teacher_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_TEACHER_DIALOG_H
#define UI_EDIT_TEACHER_DIALOG_H

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

class Ui_Edit_teacher_dialog
{
public:
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_12;
    QLabel *label_15;
    QLabel *label;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *ID_2;
    QLineEdit *email_2;
    QLineEdit *specialization;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *day_2;
    QLineEdit *month_2;
    QLineEdit *year_2;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *last_name_2;
    QLineEdit *first_name_2;
    QLineEdit *phone_2;
    QLabel *label_16;
    QPushButton *Save;

    void setupUi(QDialog *Edit_teacher_dialog)
    {
        if (Edit_teacher_dialog->objectName().isEmpty())
            Edit_teacher_dialog->setObjectName("Edit_teacher_dialog");
        Edit_teacher_dialog->resize(647, 422);
        layoutWidget_4 = new QWidget(Edit_teacher_dialog);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(290, 70, 93, 121));
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

        layoutWidget_3 = new QWidget(Edit_teacher_dialog);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(390, 70, 191, 121));
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

        layoutWidget = new QWidget(Edit_teacher_dialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(390, 210, 189, 41));
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

        layoutWidget_6 = new QWidget(Edit_teacher_dialog);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(10, 70, 81, 161));
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

        layoutWidget_7 = new QWidget(Edit_teacher_dialog);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(90, 70, 181, 161));
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

        label_16 = new QLabel(Edit_teacher_dialog);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(300, 220, 88, 21));
        Save = new QPushButton(Edit_teacher_dialog);
        Save->setObjectName("Save");
        Save->setGeometry(QRect(250, 320, 111, 29));

        retranslateUi(Edit_teacher_dialog);
        QObject::connect(last_name_2, &QLineEdit::textEdited, Save, qOverload<>(&QPushButton::show));
        QObject::connect(first_name_2, &QLineEdit::textEdited, Save, qOverload<>(&QPushButton::show));
        QObject::connect(phone_2, &QLineEdit::textEdited, Save, qOverload<>(&QPushButton::show));
        QObject::connect(ID_2, &QLineEdit::textEdited, Save, qOverload<>(&QPushButton::show));
        QObject::connect(email_2, &QLineEdit::textEdited, Save, qOverload<>(&QPushButton::show));
        QObject::connect(specialization, &QLineEdit::textEdited, Save, qOverload<>(&QPushButton::show));
        QObject::connect(day_2, &QLineEdit::textEdited, Save, qOverload<>(&QPushButton::show));
        QObject::connect(month_2, &QLineEdit::textEdited, Save, qOverload<>(&QPushButton::show));
        QObject::connect(year_2, &QLineEdit::textEdited, Save, qOverload<>(&QPushButton::show));

        QMetaObject::connectSlotsByName(Edit_teacher_dialog);
    } // setupUi

    void retranslateUi(QDialog *Edit_teacher_dialog)
    {
        Edit_teacher_dialog->setWindowTitle(QCoreApplication::translate("Edit_teacher_dialog", "Dialog", nullptr));
        label_12->setText(QCoreApplication::translate("Edit_teacher_dialog", "ID:", nullptr));
        label_15->setText(QCoreApplication::translate("Edit_teacher_dialog", "Email:", nullptr));
        label->setText(QCoreApplication::translate("Edit_teacher_dialog", "specialization", nullptr));
        label_18->setText(QCoreApplication::translate("Edit_teacher_dialog", "Last Name", nullptr));
        label_19->setText(QCoreApplication::translate("Edit_teacher_dialog", "First Name", nullptr));
        label_20->setText(QCoreApplication::translate("Edit_teacher_dialog", "Phone", nullptr));
        label_16->setText(QCoreApplication::translate("Edit_teacher_dialog", "Date of Birth:", nullptr));
        Save->setText(QCoreApplication::translate("Edit_teacher_dialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit_teacher_dialog: public Ui_Edit_teacher_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_TEACHER_DIALOG_H
