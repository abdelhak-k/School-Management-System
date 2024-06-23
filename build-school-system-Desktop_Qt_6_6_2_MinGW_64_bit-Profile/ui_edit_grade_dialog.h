/********************************************************************************
** Form generated from reading UI file 'edit_grade_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_GRADE_DIALOG_H
#define UI_EDIT_GRADE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Edit_Grade_Dialog
{
public:
    QPushButton *cancelButton;
    QPushButton *saveButton;
    QLineEdit *finalExamGradeLineEdit;
    QLineEdit *ccGradeLineEdit;
    QLineEdit *midTermGradeLineEdit;
    QLabel *courseNameLabel;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Edit_Grade_Dialog)
    {
        if (Edit_Grade_Dialog->objectName().isEmpty())
            Edit_Grade_Dialog->setObjectName("Edit_Grade_Dialog");
        Edit_Grade_Dialog->resize(491, 430);
        cancelButton = new QPushButton(Edit_Grade_Dialog);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(150, 330, 83, 29));
        saveButton = new QPushButton(Edit_Grade_Dialog);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(270, 330, 83, 29));
        finalExamGradeLineEdit = new QLineEdit(Edit_Grade_Dialog);
        finalExamGradeLineEdit->setObjectName("finalExamGradeLineEdit");
        finalExamGradeLineEdit->setGeometry(QRect(60, 190, 113, 28));
        ccGradeLineEdit = new QLineEdit(Edit_Grade_Dialog);
        ccGradeLineEdit->setObjectName("ccGradeLineEdit");
        ccGradeLineEdit->setGeometry(QRect(60, 250, 113, 28));
        midTermGradeLineEdit = new QLineEdit(Edit_Grade_Dialog);
        midTermGradeLineEdit->setObjectName("midTermGradeLineEdit");
        midTermGradeLineEdit->setGeometry(QRect(60, 120, 113, 28));
        courseNameLabel = new QLabel(Edit_Grade_Dialog);
        courseNameLabel->setObjectName("courseNameLabel");
        courseNameLabel->setGeometry(QRect(200, 30, 63, 20));
        label = new QLabel(Edit_Grade_Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 100, 191, 20));
        label_2 = new QLabel(Edit_Grade_Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 170, 161, 20));
        label_3 = new QLabel(Edit_Grade_Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 230, 131, 20));

        retranslateUi(Edit_Grade_Dialog);

        QMetaObject::connectSlotsByName(Edit_Grade_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Edit_Grade_Dialog)
    {
        Edit_Grade_Dialog->setWindowTitle(QCoreApplication::translate("Edit_Grade_Dialog", "Dialog", nullptr));
        cancelButton->setText(QCoreApplication::translate("Edit_Grade_Dialog", "Cancel", nullptr));
        saveButton->setText(QCoreApplication::translate("Edit_Grade_Dialog", "Save", nullptr));
        courseNameLabel->setText(QCoreApplication::translate("Edit_Grade_Dialog", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Edit_Grade_Dialog", "midTermGradeLineEdit", nullptr));
        label_2->setText(QCoreApplication::translate("Edit_Grade_Dialog", "finalExamGradeLineEdit", nullptr));
        label_3->setText(QCoreApplication::translate("Edit_Grade_Dialog", "ccGradeLineEdit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit_Grade_Dialog: public Ui_Edit_Grade_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_GRADE_DIALOG_H
