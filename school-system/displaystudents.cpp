#include "displaystudents.h"
#include "ui_displaystudents.h"
#include "student.h"
#include "display_edit_absence.h"
#include "display_edit_grades.h"
#include <QVector>
#include <QTableWidgetItem>
#include <QMessageBox>
#include "Wadminwindow.h"
#include "wdisplay_edit_sutdent.h"

DisplayStudents::DisplayStudents(QWidget *parent, QVector<Student>& students, int max_year, const QString& domain)
    : QDialog(parent),
    ui(new Ui::DisplayStudents),
    MAX_YEAR(max_year),
    students(students),
    school_domain(domain),
    selectedRow(-1)
{
    ui->setupUi(this);
    loadData();
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);  //set to read only
    hideButtons();
    connect(ui->Edit, &QPushButton::clicked, this, &DisplayStudents::on_editButton_clicked);
}

DisplayStudents::~DisplayStudents()
{
    delete ui;
}

void DisplayStudents::loadData(){
    ui->tableWidget->setRowCount(students.size());
    for (int i=0; i<students.size();++i) {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(students[i].GetFirst_name()));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(students[i].GetLast_name()));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(students[i].GetID()));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString::number(students[i].GetScholarYear())));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString::number(students[i].GetGrp())));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(students[i].GetDateOfBirth().toString()));
        ui->tableWidget->setItem(i, 6, new QTableWidgetItem(students[i].GetPhone()));
        ui->tableWidget->setItem(i, 7, new QTableWidgetItem(students[i].GetEmail()));
    }

}

void DisplayStudents::showButtons(){
    ui->Edit->show();
    ui->Delete->show();
    ui->EditGrades->show();
    ui->edit_absence->show();
}

void DisplayStudents::hideButtons(){
    ui->Edit->hide();
    ui->Delete->hide();
    ui->EditGrades->hide();
    ui->edit_absence->hide();
}

//////////////////////////buttons: //////////////////////////////////////////////

void DisplayStudents::on_tableWidget_cellClicked(int row, int column) {
    //store the selected row
    selectedRow = row;
    //show the Edit buttons
    showButtons();
}

void DisplayStudents::on_editButton_clicked() {
    if (selectedRow >= 0 && selectedRow < students.size()) {
        Student &student = students[selectedRow]; //get the reference to the selected student
        Wdisplay_edit_sutdent page(this, student, school_domain, MAX_YEAR);
        page.setModal(true);
        page.exec();
        //refresh the data
        AdminWindow::Load_Student_Data(students, school_domain);
        loadData(); //reload the data into the table
    }
    else
        QMessageBox::warning(this,"Warning","please select a row to edit on it");
    //hide the Edit button after editing
    hideButtons();
    //reset the selected row
    selectedRow = -1;
}

void DisplayStudents::on_Delete_clicked()
{

    if(selectedRow<0 || selectedRow >= students.size()){
        QMessageBox::warning(this,"Warning","please select a row to deleteit");
        return;
    }

    QString id=students[selectedRow].GetID();
    QString msg="Are you sure you want to DELETE the student: "+ id + " named: \" " + students[selectedRow].GetLast_name() + " \"?!";
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Confirmation", msg ,
                                  QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes){

        QString path= "../data/students-" + this->school_domain + ".csv"; //student data of this school account
        QFile file(path);

        if(AdminWindow::delete_student(this,file,id))
            QMessageBox::information(this, "Success", "Student deleted successfully!");
        else
            QMessageBox::information(this, "Error", "Failed to delete student. Student not found.");

    }

    AdminWindow::Load_Student_Data(students, school_domain);
    loadData(); //reload the data into the table
    hideButtons();
}

void DisplayStudents::on_EditGrades_clicked()
{
    QString ID=students[selectedRow].GetID();
    int StudentIndex=AdminWindow::findIndexOfStudent(students,ID);
    //this function will return the index of the student that has ID, else it return -1


    if(StudentIndex==-1){
        QMessageBox::warning(this, "Warning", "The ID given does not exist!");
        return;
    }

    int year=students[StudentIndex].GetScholarYear(); //now we have the refrence, the changes of student will reflect on the ovrall vector
    QVector<Course> courses;
    AdminWindow::load_courses(courses,year,school_domain);
    QMap<QString, QVector<Grade>> studentGradesMap;
    AdminWindow::loadGrades(school_domain,studentGradesMap);
    Display_Edit_Grades page(this,ID,courses,studentGradesMap,school_domain);
    page.setModal(true);
    page.exec();
    hideButtons();
}

void DisplayStudents::on_edit_absence_clicked()
{
    QString ID=students[selectedRow].GetID();
    int year =students[selectedRow].GetScholarYear();
    int StudentIndex=AdminWindow::findIndexOfStudent(students,ID);
    //this function will return the index of the student that has ID, else it returns -1

    if(StudentIndex==-1){
        QMessageBox::warning(this, "Warning", "The ID given does not exist!");
        return;
    }

    QMap<QString,int> absences; //a map that maps from the courseName to the number of absences of that course
    AdminWindow::load_absences(absences,ID,school_domain);
    QVector<Course> courses;
    AdminWindow::load_courses(courses,year,school_domain);
    display_edit_absence page(this,ID,courses,absences,school_domain);
    page.setModal(true);
    page.exec();
    hideButtons();
}

