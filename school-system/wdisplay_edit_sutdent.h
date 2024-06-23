#ifndef WDISPLAY_EDIT_SUTDENT_H
#define WDISPLAY_EDIT_SUTDENT_H

#include <QDialog>
#include "student.h"
#include <QFile>

namespace Ui {
class Wdisplay_edit_sutdent;
}

class Wdisplay_edit_sutdent : public QDialog
{
    Q_OBJECT

public:

    explicit Wdisplay_edit_sutdent(QWidget *parent,Student& student,const QString &school_domain,int MAX_YEAR);
    ~Wdisplay_edit_sutdent();

private slots:

    void on_editButton_clicked();
    void on_Cancel_button_clicked();

private:

    Ui::Wdisplay_edit_sutdent *ui;
    Student &student;
    QString school_domain;
    void init_student_ui();
    int MAX_YEAR;
    void setLineEditReadOnly(bool readOnly);
    bool checkEmpty() const;
    bool change_data(QWidget* cur,Student& student,QFile &file);

};

#endif // WDISPLAY_EDIT_SUTDENT_H
