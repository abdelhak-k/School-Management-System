#include "wdisplay_edit_sutdent.h"
#include "ui_wdisplay_edit_sutdent.h"
#include "Student.h"
#include "Wlogindialog.h"
#include "Wadminwindow.h"
#include "datetime.h"
#include <QMessageBox>

Wdisplay_edit_sutdent::Wdisplay_edit_sutdent(QWidget *parent, Student& student, const QString& school_domain, int MAX_YEAR)
    : QDialog(parent), student(student), ui(new Ui::Wdisplay_edit_sutdent),
    school_domain(school_domain), MAX_YEAR(MAX_YEAR)
{
    ui->setupUi(this);
    //initially set the QLineEdit widgets as read-only
    setLineEditReadOnly(true);
    init_student_ui();
    ui->Cancel_button->hide();
}

Wdisplay_edit_sutdent::~Wdisplay_edit_sutdent()
{
    delete ui;
}


bool Wdisplay_edit_sutdent::change_data(QWidget* cur, Student& student, QFile &file)
{
    if (!LoginDialog::OPEN_FILE_FOR_READING(file,cur))
        return false;

    //check if the input fields are empty
    if (!checkEmpty()) {
        QMessageBox::warning(cur, "Warning", "Please make sure to fill all required fields.");
        file.close();
        return false;
    }

    //validate and process student information
    bool ok;
    int group = ui->group->text().toInt(&ok);
    int scholar_year = ui->scholar_year->text().toInt(&ok);

    //if not integer
    if (!ok) {
        QMessageBox::warning(cur, "Warning", "Please make sure that the group and the scholar year are integers!");
        file.close();
        return false;
    }

    //year<MAX_Year and year>0
    if (!AdminWindow::checkScholar_year(scholar_year, MAX_YEAR)) {
        QMessageBox::warning(cur, "Warning", "Invalid scholar year.");
        file.close();
        return false;
    }

    QString last_name = ui->last_name->text();
    QString first_name = ui->first_name->text();
    QString phone = ui->phone->text();
    QString gender = ui->gender->text();
    QString email = ui->email->text();
    QString ID = ui->ID->text();

    //we check if the ID is duplicated
    if (!AdminWindow::checkID(file, ID)) {
        QMessageBox::warning(cur, "Warning", "ID already exists.");
        file.close();
        return false;
    }

    int day = ui->day->text().toInt(&ok);
    int month = ui->month->text().toInt(&ok);
    int year = ui->year->text().toInt(&ok);

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

    //set student information
    student.setInfo(last_name, first_name, email, phone, date_of_birth, gender, ID, scholar_year, group);

    file.close();

    return true;
}

bool Wdisplay_edit_sutdent::checkEmpty() const
{
    //check if any required fields are empty
    if (ui->first_name->text().isEmpty() ||
        ui->last_name->text().isEmpty() ||
        ui->email->text().isEmpty() ||
        ui->gender->text().isEmpty() ||
        ui->group->text().isEmpty() ||
        ui->scholar_year->text().isEmpty() ||
        ui->ID->text().isEmpty() ||
        ui->phone->text().isEmpty() ||
        ui->day->text().isEmpty() ||
        ui->month->text().isEmpty() ||
        ui->year->text().isEmpty()) {
        return false;
    }
    return true;
}

void Wdisplay_edit_sutdent::init_student_ui()
{
    ui->first_name->setText(student.GetFirst_name());
    ui->last_name->setText(student.GetLast_name());
    ui->email->setText(student.GetEmail());
    ui->gender->setText(student.GetGender());
    ui->group->setText(QString::number(student.GetGrp()));
    ui->scholar_year->setText(QString::number(student.GetScholarYear()));
    ui->ID->setText(student.GetID());
    ui->phone->setText(student.GetPhone());
    ui->day->setText(QString::number(student.GetDateOfBirth().getDay()));
    ui->month->setText(QString::number(student.GetDateOfBirth().getMonth()));
    ui->year->setText(QString::number(student.GetDateOfBirth().getYear()));
}

void Wdisplay_edit_sutdent::setLineEditReadOnly(bool readOnly)
{
    ui->first_name->setReadOnly(readOnly);
    ui->last_name->setReadOnly(readOnly);
    ui->email->setReadOnly(readOnly);
    ui->gender->setReadOnly(readOnly);
    ui->group->setReadOnly(readOnly);
    ui->scholar_year->setReadOnly(readOnly);
    ui->ID->setReadOnly(readOnly);
    ui->phone->setReadOnly(readOnly);
    ui->day->setReadOnly(readOnly);
    ui->month->setReadOnly(readOnly);
    ui->year->setReadOnly(readOnly);
}

///////////////////////////////////////////////////////// buttons: ///////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//the edit button has two statues : Save/Edit;
//when it is Edit: we change the name to save and tell the user to enter the new data
//but when it save: we check if the inputs of the user are all good and then we save this data and switch the name back to Edit
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Wdisplay_edit_sutdent::on_editButton_clicked()
{
    if (ui->editButton->text() == "Edit"){
        QMessageBox::information(this, "Success", "Changed to edit mode successfully!");
        ui->editButton->setText("Save"); //so the user clicks here to save
        setLineEditReadOnly(false);
        ui->Cancel_button->show();
    }

    else if(ui->editButton->text() == "Save"){ //the current name of the button
        //prompt a confirmation dialog to the user

        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to change the student information?",
                                      QMessageBox::Yes|QMessageBox::No);

        if (reply == QMessageBox::Yes) {

            QString path = "../data/students-" + school_domain + ".csv";
            QFile file(path);

            //first we delete the old data from the file
            //but before we need to check if there is a problem with usr inputs

            if(!AdminWindow::delete_student(this,file,this->student.GetID()))
                return;


            if(!change_data(this, this->student, file)){ //this fucntion changes the student current data
                AdminWindow::save_student(this, this->student, file); //we save the old data with no changes on it
                return;
            }


            //save the student information

            if (AdminWindow::save_student(this, this->student, file) )
            {
                //entering means that no problem has occured and the student data has changed successfully
                QMessageBox::information(this, "Success", "Changed student data successfully!");
                ui->editButton->setText("Edit");
                setLineEditReadOnly(true); //return to the read-only mode
                ui->Cancel_button->hide();
            }
            else
                return;

        }

    }
}

//the cancel will show when the user clicks on edit button
void Wdisplay_edit_sutdent::on_Cancel_button_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to cancel the process?",
                                  QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        ui->editButton->setText("Edit");
        setLineEditReadOnly(true); //return to the read-only mode
        ui->Cancel_button->hide();
        init_student_ui();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
