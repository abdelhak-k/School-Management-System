#include "displayteachers.h"
#include "ui_displayteachers.h"
#include "prof.h"
#include "Wadminwindow.h"
#include "edit_teacher_dialog.h"
#include "selectyear.h"
#include "display_assinged_courses.h"
#include <QMessageBox>
displayTeachers::displayTeachers(QWidget *parent,const QVector<Prof> &profs,const QString &school_domain,int max)
    : QDialog(parent)
    , ui(new Ui::displayTeachers)
    , profs(profs)
    , school_domain(school_domain)
    , selectedRow(-1)
    , Max_Year(max)
{
    ui->setupUi(this);
    initUI();
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    hideButtons();
}

void displayTeachers::initUI(){

    ui->tableWidget->setRowCount(profs.size());
    for (int i=0; i<profs.size();++i) {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(profs[i].GetFirst_name()));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(profs[i].GetLast_name()));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(profs[i].GetEmail()));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(profs[i].GetPhone()));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(profs[i].GetDateOfBirth().toString()));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(profs[i].GetID()));
        ui->tableWidget->setItem(i, 6, new QTableWidgetItem(profs[i].GetSpecialization()));
    }
    init=true;
}


void displayTeachers::hideButtons(){
    ui->Edit_teacher->hide();
    ui->Delete_teacher->hide();
    ui->Assign_courses->hide();
}


displayTeachers::~displayTeachers()
{
    delete ui;
}


void displayTeachers::showButtons(){
    ui->Delete_teacher->show();
    ui->Edit_teacher->show();
    ui->Assign_courses->show();
}

/////////////////////////// buttons and slots: //////////////////////////////////

void displayTeachers::on_tableWidget_cellClicked(int row, int column)
{
    selectedRow=row;
    showButtons();
}


void displayTeachers::on_Edit_teacher_clicked()
{
    Prof &Teacher=profs[selectedRow];
    Edit_teacher_dialog page(this,Teacher,school_domain);
    page.setModal(true);
    page.exec();
    AdminWindow::saveTeachers(school_domain,profs);
    initUI();
    hideButtons();
}


void displayTeachers::on_Delete_teacher_clicked() {

    if (selectedRow<0) {
        QMessageBox::warning(this, "Warning", "Please select a teacher to delete.");
        return;
    }

    profs.removeAt(selectedRow);
    ui->tableWidget->removeRow(selectedRow);

    AdminWindow::saveTeachers(school_domain,profs);
    QMessageBox::information(this, "Success", "Teacher deleted successfully.");
    hideButtons();
}


void displayTeachers::on_Assign_courses_clicked()
{
    const QString &teacherID= profs[selectedRow].GetID();
    QMap<QString,QVector<QString>> profCourses;
    AdminWindow::loadAssingedCourses(school_domain,teacherID,profCourses);
    Display_assinged_courses assignDialog(this, teacherID, profCourses);
    assignDialog.setModal(true);
    assignDialog.exec();
    AdminWindow::saveAssignedCourses(school_domain, profCourses);

}

