#include "waddcourse.h"
#include "ui_waddcourse.h"
#include "Wlogindialog.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>

WaddCourse::WaddCourse(QWidget *parent, int selectedYear,const QString &school_domain)
    : QDialog(parent)
    , ui(new Ui::WaddCourse)
    , selectedYear(selectedYear)
    , school_domain(school_domain)
{
    ui->setupUi(this);
}

WaddCourse::~WaddCourse()
{
    delete ui;
}

bool WaddCourse::checkID(const QString& id) const {
    QString fileName = "../data/courses_year_" + QString::number(selectedYear) + "_" + school_domain+ ".csv";

    QFile file(fileName);

    if (!file.exists()){ //if the file does not exist open in writing mode; create a new file
        if(!LoginDialog::OPEN_FILE_FOR_WRITING(file,nullptr))
            return false;
        file.close();
    }

    if(!LoginDialog::OPEN_FILE_FOR_READING(file,nullptr))
        return false;


    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        if (fields.size() > 0 && fields[0] == id) {
            file.close();
            return true; //id exists
        }
    }

    file.close();
    return false; //ID unique
}

bool WaddCourse::isInteger(const QString& str) const {
    bool ok;
    str.toInt(&ok);
    return ok;
}

bool WaddCourse::checkEmpty() const {
    return (ui->CourseCoef->text().isEmpty() || ui->courseID->text().isEmpty() || ui->CourseName->text().isEmpty());
}

/////////////////////////// buttons and slots: //////////////////////////////////

void WaddCourse::on_addCourse_clicked()
{
    if (checkEmpty()) {
        QMessageBox::warning(this, "Warning", "All fields must be filled!");
        return;
    }

    QString id = ui->courseID->text();
    QString coef = ui->CourseCoef->text();

    //we check if the ID already exists
    if (checkID(id)) {
        QMessageBox::warning(this, "Warning", "The ID is already used!");
        return;
    }

    if (!isInteger(coef)) {
        QMessageBox::warning(this, "Warning", "The coefficient must be an integer!");
        return;
    }

    //save the course data to the CSV file
    QString fileName = "../data/courses_year_" + QString::number(selectedYear) + "_" + school_domain+ ".csv";
    QFile file(fileName);

    if (!LoginDialog::OPEN_FILE_FOR_APPENDING(file,this))
        return;

    QTextStream out(&file);

    //we save this course data
    out << id << "," << ui->CourseName->text() << "," << coef << "\n";
    file.close();

    QMessageBox::information(this, "Success", "Course added successfully!");

    //clear the input fields
    ui->courseID->clear();
    ui->CourseName->clear();
    ui->CourseCoef->clear();
}


