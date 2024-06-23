#include "edit_grade_dialog.h"
#include "ui_edit_grade_dialog.h"
#include <QMessageBox>

Edit_Grade_Dialog::Edit_Grade_Dialog(QWidget *parent, const QString& studentID, const Grade& grade) :
    QDialog(parent),
    ui(new Ui::Edit_Grade_Dialog),
    m_studentID(studentID),
    m_grade(grade)
{
    ui->setupUi(this);
    QString msg="student ID: "+studentID +" - course name: " + grade.getCourseName();
    ui->courseNameLabel->setText(msg);
    ui->midTermGradeLineEdit->setText(QString::number(m_grade.GetMidTermGrade()));
    ui->finalExamGradeLineEdit->setText(QString::number(m_grade.GetFinalExamGrade()));
    ui->ccGradeLineEdit->setText(QString::number(m_grade.GetCCGrade()));
}

Edit_Grade_Dialog::~Edit_Grade_Dialog()
{
    delete ui;
}

float Edit_Grade_Dialog::getMidTermGrade() const
{
    return ui->midTermGradeLineEdit->text().toFloat();
}

float Edit_Grade_Dialog::getFinalExamGrade() const
{
    return ui->finalExamGradeLineEdit->text().toFloat();
}

float Edit_Grade_Dialog::getCCGrade() const
{
    return ui->ccGradeLineEdit->text().toFloat();
}


/////////////////////////// buttons and slots: //////////////////////////////////


void Edit_Grade_Dialog::on_saveButton_clicked()
{
    bool ok1, ok2, ok3;
    //we extract the grades from the ui
    float midTermGrade = ui->midTermGradeLineEdit->text().toFloat(&ok1);
    float finalExamGrade = ui->finalExamGradeLineEdit->text().toFloat(&ok2);
    float ccGrade = ui->ccGradeLineEdit->text().toFloat(&ok3);

    if (!ok1 || !ok2 || !ok3) {
        QMessageBox::warning(this, "Invalid Input", "Please enter valid grades.");
        return;
    }

    m_grade.SetMidTermGrade(midTermGrade);
    m_grade.SetFinalExamGrade(finalExamGrade);
    m_grade.SetCCGrade(ccGrade);

    accept();
}

void Edit_Grade_Dialog::on_cancelButton_clicked()
{
    reject();
}
