/********************************************************************************
** Form generated from reading UI file 'selectyear.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTYEAR_H
#define UI_SELECTYEAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectYear
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *selectYear)
    {
        if (selectYear->objectName().isEmpty())
            selectYear->setObjectName("selectYear");
        selectYear->resize(305, 180);
        selectYear->setStyleSheet(QString::fromUtf8(""));
        comboBox = new QComboBox(selectYear);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(100, 80, 81, 31));
        label = new QLabel(selectYear);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 291, 20));
        pushButton = new QPushButton(selectYear);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 140, 83, 29));

        retranslateUi(selectYear);

        QMetaObject::connectSlotsByName(selectYear);
    } // setupUi

    void retranslateUi(QWidget *selectYear)
    {
        selectYear->setWindowTitle(QCoreApplication::translate("selectYear", "Form", nullptr));
        label->setText(QCoreApplication::translate("selectYear", "Please select a year to add the course to:", nullptr));
        pushButton->setText(QCoreApplication::translate("selectYear", "continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectYear: public Ui_selectYear {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTYEAR_H
