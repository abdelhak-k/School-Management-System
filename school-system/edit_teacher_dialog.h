#ifndef EDIT_TEACHER_DIALOG_H
#define EDIT_TEACHER_DIALOG_H

#include <QDialog>
#include <QFile>
#include "prof.h"
namespace Ui {
class Edit_teacher_dialog;
}

class Edit_teacher_dialog : public QDialog
{
    Q_OBJECT

public:

    explicit Edit_teacher_dialog(QWidget *parent,Prof &teacher,const QString &school_domain);
    ~Edit_teacher_dialog();

private slots:

    void on_Save_clicked();

private:

    Ui::Edit_teacher_dialog *ui;
    Prof &teacher;
    QString school_domain;

    bool checkEmpty();
    void initUI();
    bool check(QWidget* cur, Prof& prof, QFile &file);

};

#endif // EDIT_TEACHER_DIALOG_H
