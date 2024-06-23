/********************************************************************************
** Form generated from reading UI file 'Wlogindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WLOGINDIALOG_H
#define UI_WLOGINDIALOG_H

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

class Ui_LoginDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *username;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *password;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Login;
    QPushButton *pushButton_2;
    QLabel *label_3;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName("LoginDialog");
        LoginDialog->resize(964, 496);
        LoginDialog->setMaximumSize(QSize(1280, 720));
        LoginDialog->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(LoginDialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(350, 220, 291, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        username = new QLineEdit(layoutWidget);
        username->setObjectName("username");

        horizontalLayout_2->addWidget(username);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        password = new QLineEdit(layoutWidget);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::Password);
        password->setClearButtonEnabled(true);

        horizontalLayout->addWidget(password);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        Login = new QPushButton(layoutWidget);
        Login->setObjectName("Login");

        horizontalLayout_3->addWidget(Login);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);

        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(450, 120, 101, 91));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/imgs/login.png")));
        label_3->setScaledContents(true);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LoginDialog", "username", nullptr));
        label_2->setText(QCoreApplication::translate("LoginDialog", "password", nullptr));
        Login->setText(QCoreApplication::translate("LoginDialog", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginDialog", "clear", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WLOGINDIALOG_H
