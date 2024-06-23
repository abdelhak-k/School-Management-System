#include "Waddstudent.h"
#include "student.h"
#include "ui_Waddstudent.h"
#include "Wadminwindow.h"
#include "datetime.h"
#include "Wlogindialog.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>

addStudent::addStudent(QWidget *parent, const QString &school_dmn, int max_year)
    : QDialog(parent), school_domain(school_dmn), MAX_YEAR(max_year), ui(new Ui::addStudent)
{
    ui->setupUi(this);
    ui->radioButton_2->click();
}

addStudent::~addStudent()
{
    delete ui;
}

void addStudent::ClearUi() const{
    ui->ID->clear();
    ui->group->clear();
    ui->scholar_year->clear();
    ui->last_name->clear();
    ui->first_name->clear();
    ui->phone->clear();
    ui->email->clear();
    ui->day->clear();
    ui->month->clear();
    ui->year->clear();

}

bool addStudent::checkEmpty() const {
    //check if required fields are empty
    if (ui->ID->text().isEmpty() ||
        ui->group->text().isEmpty() ||
        ui->scholar_year->text().isEmpty() ||
        ui->last_name->text().isEmpty() ||
        ui->first_name->text().isEmpty() ||
        ui->phone->text().isEmpty() ||
        ui->day->text().isEmpty() ||
        ui->month->text().isEmpty() ||
        ui->year->text().isEmpty()) {
        return false;
    }

    return true;
}

bool addStudent::Checker(QWidget* cur,Student& student,QFile &file) {

    if (!file.exists()){ //if the file does not exist open in writing mode; create a new file
        if(!LoginDialog::OPEN_FILE_FOR_WRITING(file,nullptr))
            return false;
        file.close();
    }

    if(!LoginDialog::OPEN_FILE_FOR_READING(file,nullptr))
        return false;


    //check if the input fields are empty
    if (!checkEmpty()) {
        QMessageBox::warning(cur, "Warning", "Please make sure to fill all required fields.");
        file.close();
        return false;
    }

    bool ok;
    int group = ui->group->text().toInt(&ok);
    int scholar_year = ui->scholar_year->text().toInt(&ok);

    //toInt changes ok to false if the converstion if the input is not a string
    //we check if they are intergers or not

    if (!ok) {
        QMessageBox::warning(cur, "Warning", "Please make sure that the group and the scholar year are integers!");
        file.close();
        return false;
    }

    //scholar year must be less then the max_year (loaded with the account)
    if (!AdminWindow::checkScholar_year(scholar_year, MAX_YEAR)) {
        QString msg="Invalid scholar year it should be less then: " +MAX_YEAR;
        QMessageBox::warning(cur, "Warning", msg);
        file.close();
        return false;
    }

    //we extract this info also
    QString last_name = ui->last_name->text();
    QString first_name = ui->first_name->text();
    QString phone = ui->phone->text();
    QString gender = ui->radioButton->isChecked() ? "female" : "male";
    QString email = ui->email->text();
    QString ID = ui->ID->text();

    //we check if the ID already exists
    if (!AdminWindow::checkID(file, ID)) {
        QMessageBox::warning(cur, "Warning", "ID already exists.");
        file.close();
        return false;
    }

    ok = false;
    int day = ui->day->text().toInt(&ok);
    int month = ui->month->text().toInt(&ok);
    int year = ui->year->text().toInt(&ok);

    //check if it's integer or not
    if (!ok) {
        QMessageBox::warning(cur, "Warning", "Invalid date, they should be integers.");
        file.close();
        return false;
    }

    if (!AdminWindow::validate_date(day, month, year)) {
        QMessageBox::warning(cur, "Error", "Please enter valid values for day, month, and year.");
        file.close();
        return false;
    }

    //we create dateTime object
    DateTime date_of_birth(day, month, year);

    //we change the student data
    student.setInfo(last_name, first_name, email, phone, date_of_birth, gender, ID, scholar_year, group);

    //close the file beore returning
    file.close();

    //clear the input fields
    ClearUi();

    return true;

}

////////////////////////// buttons: ///////////////////////////////////////////////
void addStudent::on_add_student_button_clicked() {

    QString path= "../data/students-" + this->school_domain + ".csv";
    QFile file(path);

    //call the Checker method passing this, it will return the newstudent with the specified data if everything is ok
    Student newStudent;
    if(!Checker(this,newStudent,file))
        return;

    //save the student data
    if(!AdminWindow::save_student(this,newStudent,file))
        return;
    QMessageBox::information(this, "Success","Student added successfully!");

}
