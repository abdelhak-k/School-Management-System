#include "edit_teacher_dialog.h"
#include "ui_edit_teacher_dialog.h"
#include "prof.h"
#include "Wadminwindow.h"
#include "Wlogindialog.h"
#include <QFile>
#include <QMessageBox>

Edit_teacher_dialog::Edit_teacher_dialog(QWidget *parent,Prof &teacher,const QString &school_domain)
    : QDialog(parent)
    , ui(new Ui::Edit_teacher_dialog)
    , teacher(teacher)
    , school_domain(school_domain)
{
    ui->setupUi(this);
    initUI();
    ui->Save->hide();
}

void Edit_teacher_dialog::initUI(){
    ui->first_name_2->setText(teacher.GetFirst_name());
    ui->last_name_2->setText(teacher.GetLast_name());
    ui->email_2->setText(teacher.GetEmail());
    ui->ID_2->setText(teacher.GetID());
    ui->phone_2->setText(teacher.GetPhone());
    ui->day_2->setText(QString::number(teacher.GetDateOfBirth().getDay()) );
    ui->month_2->setText(QString::number(teacher.GetDateOfBirth().getMonth()));
    ui->year_2->setText(QString::number(teacher.GetDateOfBirth().getYear()));
    ui->specialization->setText(teacher.GetSpecialization());
}


Edit_teacher_dialog::~Edit_teacher_dialog()
{
    delete ui;
}

bool Edit_teacher_dialog::checkEmpty(){

    if (ui->ID_2->text().isEmpty() ||
        ui->specialization->text().isEmpty() ||
        ui->last_name_2->text().isEmpty() ||
        ui->first_name_2->text().isEmpty() ||
        ui->phone_2->text().isEmpty() ||
        ui->day_2->text().isEmpty() ||
        ui->month_2->text().isEmpty() ||
        ui->year_2->text().isEmpty() )
            return false;

    //else
    return true;
}

bool Edit_teacher_dialog::check(QWidget* cur, Prof& prof, QFile &file){

    if (!file.exists()){
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

    QString last_name = ui->last_name_2->text();
    QString first_name = ui->first_name_2->text();
    QString phone = ui->phone_2->text();
    QString ID = ui->ID_2->text();
    QString email = ui->email_2->text();
    QString specialization = ui->specialization->text();
    QString gender= teacher.GetGender();

    //if the ID got changed we check if there is a duplicate one on the file
    if(ID!=teacher.GetID()){
        if (!AdminWindow::checkID(file, ID)) {
            QMessageBox::warning(cur, "Warning", "ID already exists.");
            return false;
        }
    }

    bool ok = false;
    int day = ui->day_2->text().toInt(&ok);
    int month = ui->month_2->text().toInt(&ok);
    int year = ui->year_2->text().toInt(&ok);

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

    DateTime date_of_birth(day, month, year);


    prof.setInfo(last_name,first_name,email,phone,date_of_birth,gender,ID,specialization);
    // close the file
    file.close();
    return true;

}

/////////////////////////// buttons and slots: //////////////////////////////////

void Edit_teacher_dialog::on_Save_clicked()
{
    Prof EditedProf;
    QString filePath = "../data/teachers-" + school_domain + ".csv";
    QFile file(filePath);

    if(check(this,EditedProf,file)){
        teacher=EditedProf;
        QMessageBox::information(this,"Success","Teacher information saved successfully");
    }
}

