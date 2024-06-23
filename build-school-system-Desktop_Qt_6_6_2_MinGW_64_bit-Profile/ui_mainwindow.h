/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *NewAccount;
    QLabel *label;
    QPushButton *login_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 618);
        MainWindow->setMaximumSize(QSize(1440, 1280));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        NewAccount = new QPushButton(centralwidget);
        NewAccount->setObjectName("NewAccount");
        NewAccount->setGeometry(QRect(440, 440, 171, 29));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 561, 421));
        label->setMaximumSize(QSize(1040, 1040));
        label->setPixmap(QPixmap(QString::fromUtf8(":/imgs/back.jfif")));
        label->setScaledContents(true);
        login_button = new QPushButton(centralwidget);
        login_button->setObjectName("login_button");
        login_button->setGeometry(QRect(160, 440, 121, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "sign in/up", nullptr));
        NewAccount->setText(QCoreApplication::translate("MainWindow", "Create new Account", nullptr));
        label->setText(QString());
        login_button->setText(QCoreApplication::translate("MainWindow", "login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
