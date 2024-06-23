#ifndef DISPLAY_EDIT_ABSENCE_H
#define DISPLAY_EDIT_ABSENCE_H

#include <QDialog>
#include "course.h"

namespace Ui {
class display_edit_absence;
}

class display_edit_absence : public QDialog
{
    Q_OBJECT

public:
    explicit display_edit_absence(QWidget *parent,const QString &ID,const QVector<Course> &courses,const QMap<QString,int>&, const QString& school_domain);
    ~display_edit_absence();
    int getAbsence(const QString &courseID) const;

private slots:

    void on_tableWidget_cellChanged(int row, int column);

    void on_save_clicked();

    void on_tableWidget_cellClicked(int row, int column);

    void on_spinBox_valueChanged(int arg1);

private:
    QString studentID;
    QMap<QString,int> absences; //a map that takes the course_name to the number of absences
    QVector<Course> courses;
    Ui::display_edit_absence *ui;
    QString school_domain;
    int selectedRow;

    void initUI();
    QMap<QString,int> getAbsences_from_table(bool &ok) const;


};

#endif // DISPLAY_EDIT_ABSENCE_H
