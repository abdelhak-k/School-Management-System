/********************************************************************************
** Form generated from reading UI file 'Wcreateaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WCREATEACCOUNT_H
#define UI_WCREATEACCOUNT_H

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

class Ui_CreateAccount
{
public:
    QPushButton *Create_account;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLineEdit *domain;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *user_name;
    QLineEdit *password;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_9;
    QLineEdit *max_year;
    QLabel *label;

    void setupUi(QDialog *CreateAccount)
    {
        if (CreateAccount->objectName().isEmpty())
            CreateAccount->setObjectName("CreateAccount");
        CreateAccount->resize(604, 300);
        Create_account = new QPushButton(CreateAccount);
        Create_account->setObjectName("Create_account");
        Create_account->setGeometry(QRect(210, 240, 201, 29));
        layoutWidget_3 = new QWidget(CreateAccount);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(290, 160, 267, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName("label_8");

        horizontalLayout_2->addWidget(label_8);

        domain = new QLineEdit(layoutWidget_3);
        domain->setObjectName("domain");

        horizontalLayout_2->addWidget(domain);

        layoutWidget_2 = new QWidget(CreateAccount);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(140, 130, 127, 65));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        user_name = new QLineEdit(layoutWidget_2);
        user_name->setObjectName("user_name");

        verticalLayout_4->addWidget(user_name);

        password = new QLineEdit(layoutWidget_2);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(password);

        layoutWidget = new QWidget(CreateAccount);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 130, 81, 61));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout_3->addWidget(label_4);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout_3->addWidget(label_6);

        label_9 = new QLabel(CreateAccount);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(290, 130, 133, 28));
        max_year = new QLineEdit(CreateAccount);
        max_year->setObjectName("max_year");
        max_year->setGeometry(QRect(431, 130, 125, 28));
        label = new QLabel(CreateAccount);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 20, 101, 91));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imgs/login.png")));
        label->setScaledContents(true);

        retranslateUi(CreateAccount);

        QMetaObject::connectSlotsByName(CreateAccount);
    } // setupUi

    void retranslateUi(QDialog *CreateAccount)
    {
        CreateAccount->setWindowTitle(QCoreApplication::translate("CreateAccount", "Dialog", nullptr));
        Create_account->setText(QCoreApplication::translate("CreateAccount", "Create new account", nullptr));
        label_8->setText(QCoreApplication::translate("CreateAccount", "The School Domain:", nullptr));
        label_4->setText(QCoreApplication::translate("CreateAccount", "User Name:", nullptr));
        label_6->setText(QCoreApplication::translate("CreateAccount", "Password:", nullptr));
        label_9->setText(QCoreApplication::translate("CreateAccount", "MAX YEAR:", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateAccount: public Ui_CreateAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WCREATEACCOUNT_H
