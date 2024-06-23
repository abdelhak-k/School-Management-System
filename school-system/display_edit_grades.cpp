#include "display_edit_grades.h"
#include "ui_display_edit_grades.h"
#include "edit_grade_dialog.h"
#include "Wadminwindow.h"
#include <QMessageBox>


Display_Edit_Grades::Display_Edit_Grades(QWidget *parent,const QString &ID,const QVector<Course> &courses,QMap<QString, QVector<Grade>> &gradesMap,const QString& school_domain) :
    QDialog(parent),
    student_ID(ID),
    m_courses(courses),
    m_gradesMap(gradesMap),
    school_domain(school_domain),
    ui(new Ui::Display_Edit_Grades)
{
    ui->setupUi(this);
    initUI();

}

Display_Edit_Grades::~Display_Edit_Grades()
{
    delete ui;
}

void Display_Edit_Grades::initUI()
{
    ui->tableWidget->setRowCount(m_courses.size());
    ui->tableWidget->setColumnCount(4);


    for (int i = 0; i < m_courses.size(); ++i) {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(m_courses[i].getName()));

        QTableWidgetItem *midTermGradeItem = new QTableWidgetItem();
        QTableWidgetItem *finalExamGradeItem = new QTableWidgetItem();
        QTableWidgetItem *ccGradeItem = new QTableWidgetItem();

        bool gradeFound = false;
        for (const Grade &grade : m_gradesMap[student_ID]) {
            if (grade.getCourseName() == m_courses[i].getName()) {
                midTermGradeItem->setText(QString::number(grade.GetMidTermGrade()));
                finalExamGradeItem->setText(QString::number(grade.GetFinalExamGrade()));
                ccGradeItem->setText(QString::number(grade.GetCCGrade()));
                gradeFound = true;
                break;
            }
        }

        if (!gradeFound) {
            midTermGradeItem->setText("");
            finalExamGradeItem->setText("");
            ccGradeItem->setText("");
        }

        ui->tableWidget->setItem(i, 1, midTermGradeItem);
        ui->tableWidget->setItem(i, 2, finalExamGradeItem);
        ui->tableWidget->setItem(i, 3, ccGradeItem);
    }
}

///////////////buttons://///////////////////////////////////

void Display_Edit_Grades::on_editButton_clicked()
{
    int selectedRow = ui->tableWidget->currentRow();
    if (selectedRow < 0) {
        QMessageBox::warning(this, "Warning", "Please select a course to edit.");
        return;
    }

    QString courseName = ui->tableWidget->item(selectedRow, 0)->text();
    float midTermGrade = ui->tableWidget->item(selectedRow, 1)->text().toFloat();
    float finalExamGrade = ui->tableWidget->item(selectedRow, 2)->text().toFloat();
    float ccGrade = ui->tableWidget->item(selectedRow, 3)->text().toFloat();

    Grade grade(courseName,midTermGrade,finalExamGrade,ccGrade);


    Edit_Grade_Dialog editDialog(this,student_ID,grade);
    editDialog.setModal(true);
    editDialog.exec();

    QVector<Grade>& grades = m_gradesMap[student_ID];
    bool gradeFound = false;

    //update the grades in the map
    for (Grade& g : grades) {
        if (g.getCourseName() == courseName) {
            g.SetMidTermGrade(editDialog.getMidTermGrade());
            g.SetFinalExamGrade(editDialog.getFinalExamGrade());
            g.SetCCGrade(editDialog.getCCGrade());
            gradeFound = true;
            break;
        }
    }

    //if grade was not found add new grade entry
    if (!gradeFound)
        grades.append(Grade(courseName, editDialog.getMidTermGrade(), editDialog.getFinalExamGrade(), editDialog.getCCGrade()));

    AdminWindow::saveGrades(school_domain,m_gradesMap);
    ui->tableWidget->item(selectedRow, 1)->setText(QString::number(editDialog.getMidTermGrade()));
    ui->tableWidget->item(selectedRow, 2)->setText(QString::number(editDialog.getFinalExamGrade()));
    ui->tableWidget->item(selectedRow, 3)->setText(QString::number(editDialog.getCCGrade()));

}
