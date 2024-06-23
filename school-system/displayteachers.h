#ifndef DISPLAYTEACHERS_H
#define DISPLAYTEACHERS_H

#include <QDialog>
#include "prof.h"

namespace Ui {
class displayTeachers;
}

class displayTeachers : public QDialog
{
    Q_OBJECT

public:

    explicit displayTeachers(QWidget *parent,const QVector<Prof> &profs,const QString &school_domain,int max);
    ~displayTeachers();

private slots:

    void on_tableWidget_cellClicked(int row, int column);

    void on_Edit_teacher_clicked();

    void on_Delete_teacher_clicked();

    void on_Assign_courses_clicked();

private:

    Ui::displayTeachers *ui;
    QString school_domain;
    QVector<Prof> profs;
    bool init;
    int selectedRow;
    int Max_Year;

    void showButtons();
    void hideButtons();
    void initUI();

};

#endif // DISPLAYTEACHERS_H
