#ifndef _ADDSTUDENT_H
#define _ADDSTUDENT_H
#include "student.h"
#include <QDialog>
#include <QFile>

namespace Ui {
class addStudent;
}

class addStudent : public QDialog
{
    Q_OBJECT

public:

    explicit addStudent(QWidget *parent = nullptr,const QString &school_domain=" ",int MAX_YEAR=0);
    ~addStudent();

private slots:

    void on_add_student_button_clicked();


private:

    Ui::addStudent *ui;
    QString school_domain;
    int MAX_YEAR;

    bool checkEmpty() const;
    bool Checker(QWidget* cur,Student& student,QFile &file);
    void ClearUi() const;

};

#endif // _ADDSTUDENT_H
