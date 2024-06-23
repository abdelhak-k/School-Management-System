#include "edit_display_course.h"
#include "ui_edit_display_course.h"
#include <QTableWidgetItem>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
edit_display_course::edit_display_course(QWidget *parent, QVector<Course>& courses,int year,const QString &school_domain)
    : QDialog(parent)
    , ui(new Ui::edit_display_course)
    , courses(courses)
    , year(year)
    , school_domain(school_domain)
{
    ui->setupUi(this);
    ui->table->setRowCount(courses.size());
    populateTable();
    ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);//set to read obly
    ui->Delete->hide();
}

edit_display_course::~edit_display_course()
{
    delete ui;
}

void edit_display_course::populateTable()
{
    for (int row=0; row<courses.size(); ++row) {
        ui->table->setItem(row, 0, new QTableWidgetItem(courses[row].getID()));
        ui->table->setItem(row, 1, new QTableWidgetItem(courses[row].getName()));
        ui->table->setItem(row, 2, new QTableWidgetItem(QString::number(courses[row].getCoef())));
    }
}

/////////////////////////// buttons and slots: //////////////////////////////////

void edit_display_course::on_table_cellClicked(int row, int column)
{
    //store the selected row
    selectedRow = row;
    //show the Delete button
    ui->Delete->show();
}


void edit_display_course::on_Delete_clicked(){
    if (selectedRow >= 0 && selectedRow < courses.size()) {
        QString id = courses[selectedRow].getID();
        QString msg = "Are you sure you want to DELETE the course: " + id + " named: \"" + courses[selectedRow].getName() + "\"?!";
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation", msg,
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes) {
            //remove the course from the vector
            courses.remove(selectedRow);

            QString path = "../data/courses_year_" + QString::number(year) + "_"+ school_domain+ ".csv";
            QFile file(path);
            if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QMessageBox::information(this, "Error", "Failed to open the file for writing.");
                return;
            }
            QTextStream out(&file);
            //write the remaining courses to the file
            for (const Course& course : courses)
                out << course.getID() << "," << course.getName() << "," << course.getCoef() << "\n";

            file.close();
            QMessageBox::information(this, "Success", "Course deleted successfully!");

            //hide delete after deleting
            ui->Delete->hide();
        }
    }
    else
        QMessageBox::warning(this, "Warning", "Please select a row to delete");

    selectedRow = -1;
    ui->table->clear();
    ui->table->setRowCount(courses.size());
    populateTable();
}

