#include "ui_Waddteacher.h"
#include "Waddteacher.h"
#include "prof.h"
#include "Wlogindialog.h"
#include "Wadminwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>

Waddteacher::Waddteacher(QWidget *parent, const QString &school_domain, QVector<Prof> &profs , int MAX_YEAR) :
    QDialog(parent), ui(new Ui::Waddteacher), school_domain(school_domain), MAX_YEAR(MAX_YEAR), profs(profs)
{
    ui->setupUi(this);
    ui->radioButton_3->click();
}

Waddteacher::~Waddteacher()
{
    delete ui;
}

void Waddteacher::ClearUi() const{
    ui->last_name_2->clear();
    ui->first_name_2->clear();
    ui->phone_2->clear();
    ui->ID_2->clear();
    ui->email_2->clear();
    ui->specialization->clear();
    ui->day_2->clear();
    ui->month_2->clear();
    ui->year_2->clear();
}

bool Waddteacher::checkEmpty() const {
    //check if required fields are empty
    if (ui->ID_2->text().isEmpty() ||
        ui->specialization->text().isEmpty() ||
        ui->last_name_2->text().isEmpty() ||
        ui->first_name_2->text().isEmpty() ||
        ui->phone_2->text().isEmpty() ||
        ui->day_2->text().isEmpty() ||
        ui->month_2->text().isEmpty() ||
        ui->year_2->text().isEmpty()) {
        return false;
    }

    return true;
}

bool Waddteacher::Checker(QWidget* cur, Prof& prof, QFile &file) {

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

    //extract informations from the UI fields
    QString last_name = ui->last_name_2->text();
    QString first_name = ui->first_name_2->text();
    QString phone = ui->phone_2->text();
    QString ID = ui->ID_2->text();
    QString gender = ui->radioButton_3->isChecked() ? "female" : "male";
    QString email = ui->email_2->text();
    QString specialization = ui->specialization->text();

    //validate the ID (check if there is no other simiar ID)
    if (!AdminWindow::checkID(file, ID)) {
        QMessageBox::warning(cur, "Warning", "ID already exists.");
        return false;
    }

    bool ok = false;

    //check if the input fields are integers
    int day = ui->day_2->text().toInt(&ok);
    int month = ui->month_2->text().toInt(&ok);
    int year = ui->year_2->text().toInt(&ok);

    if (!ok){
        QMessageBox::warning(cur, "Warning", "Invalid date, they should be integers.");
        file.close();
        return false;
    }

    //check if the date is valid
    if (!AdminWindow::validate_date(day, month, year)) {
        QMessageBox::warning(cur, "Error", "Please enter valid values for day, month, and year.");
        file.close();
        return false;
    }

    //we create a date_of_birth object
    DateTime date_of_birth(day, month, year);

    //we set the the prof data to the new data we get from the user
    prof.setInfo(last_name,first_name,email,phone,date_of_birth,gender,ID,specialization);
    //close the file
    file.close();

    // Clear the input fields

    ClearUi();

    return true;
}

/////////////////////////////// buttons: //////////////////////////////////
void Waddteacher::on_add_teacher_button_clicked() {
    Prof newTeacher;
    QString filePath = "../data/teachers-" + school_domain + ".csv";
    QFile file(filePath);

    if (Checker(this, newTeacher, file)) {
        //open the file for appending
        if (!LoginDialog::OPEN_FILE_FOR_APPENDING(file,this))
            return;

        //we save the new teacher
        QTextStream out(&file);
        out << newTeacher.GetLast_name()<< ","
            << newTeacher.GetFirst_name()<< ","
            << newTeacher.GetDateOfBirth().toString() << ","
            << newTeacher.GetEmail() << ","
            << newTeacher.GetPhone() << ","
            << newTeacher.GetID()<< ","
            << newTeacher.GetGender() << ","
            << newTeacher.GetSpecialization() << "\n";
        file.close();

        QMessageBox::information(this, "Success", "Teacher added successfully.");
    }

}

