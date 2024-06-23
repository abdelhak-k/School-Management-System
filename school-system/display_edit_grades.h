#ifndef DISPLAY_EDIT_GRADES_H
#define DISPLAY_EDIT_GRADES_H

#include <QDialog>
#include <QVector>
#include <QMap>
#include "student.h"
#include "course.h"
#include "grade.h"

namespace Ui {
class Display_Edit_Grades;
}

class Display_Edit_Grades : public QDialog
{
    Q_OBJECT

public:
    explicit Display_Edit_Grades(QWidget *parent,const QString &ID,const QVector<Course> &courses,QMap<QString, QVector<Grade>> &gradesMap,const QString&);
    ~Display_Edit_Grades();

private slots:

    void on_editButton_clicked();

private:

    Ui::Display_Edit_Grades *ui;
    QString student_ID; //student ID
    QVector<Course> m_courses;
    QMap<QString, QVector<Grade>> m_gradesMap;
    QString school_domain;

    void initUI();
};

#endif // DISPLAY_EDIT_GRADES_H
