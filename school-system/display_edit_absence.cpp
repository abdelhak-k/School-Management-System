#include "display_edit_absence.h"
#include "ui_display_edit_absence.h"
#include <QMap>
#include <QMessageBox>
#include "Wadminwindow.h"
display_edit_absence::display_edit_absence(QWidget *parent,const QString &ID,const QVector<Course> &courses,const QMap<QString,int>& absences, const QString& school_domain)
    : QDialog(parent)
    , ui(new Ui::display_edit_absence)
    , studentID(ID)
    , absences(absences)
    , school_domain(school_domain)
    , courses(courses)
{
    ui->setupUi(this);
    initUI();
    ui->save->hide();
    ui->spinBox->hide();
    selectedRow=-1;

}

display_edit_absence::~display_edit_absence()
{
    delete ui;
}

void display_edit_absence::initUI(){

    ui->tableWidget->setRowCount(courses.size());
    int row = 0;
    for (const Course &course : courses) {
        QString courseName = course.getName();
        int absenceCount = absences.value(courseName, 0);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(courseName));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(QString::number(absenceCount)));
        ++row;
    }
}

QMap<QString, int> display_edit_absence::getAbsences_from_table(bool &ok) const
{
    QMap<QString, int> updatedAbsences;
    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QString courseName = ui->tableWidget->item(row, 0)->text();
        int numAbsences = ui->tableWidget->item(row, 1)->text().toInt(&ok);
        if(!ok)
            return QMap<QString,int>(); //return an empry map
        //else it is indeed an integer
        updatedAbsences[courseName] = numAbsences;
    }
    return updatedAbsences;
}

////////////////////////////////////// buttons and slots: //////////////////////////

void display_edit_absence::on_tableWidget_cellChanged(int row, int column)
{
    ui->save->show();

}

void display_edit_absence::on_save_clicked()
{
    bool ok=false;
    QMap<QString,int> newAbsences= getAbsences_from_table(ok);
    absences=newAbsences;
    AdminWindow::save_absences(studentID,school_domain,absences);
    initUI();
    ui->save->hide();
}

void display_edit_absence::on_tableWidget_cellClicked(int row, int column)
{
    selectedRow=row;
    int num = ui->tableWidget->item(row,1)->text().toInt();
    ui->spinBox->setValue(num);
    ui->spinBox->show();
}

void display_edit_absence::on_spinBox_valueChanged(int arg1)
{
    ui->tableWidget->setItem(selectedRow, 1, new QTableWidgetItem(QString::number(arg1)));
}

