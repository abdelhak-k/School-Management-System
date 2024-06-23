#ifndef EDIT_DISPLAY_COURSE_H
#define EDIT_DISPLAY_COURSE_H

#include <QDialog>
#include <QVector>
#include "course.h"

namespace Ui {
class edit_display_course;
}

class edit_display_course : public QDialog
{
    Q_OBJECT

public:

    explicit edit_display_course(QWidget *parent ,QVector<Course>& courses,int year,const QString &school_domain);
    ~edit_display_course();

private slots:

    void on_table_cellClicked(int row, int column);
    void on_Delete_clicked();

private:

    Ui::edit_display_course *ui;
    QVector<Course>& courses;
    int selectedRow;    
    int year;
    QString school_domain;

    void populateTable();
};

#endif // EDIT_DISPLAY_COURSE_H
