#ifndef DISPLAYSTUDENTS_H
#define DISPLAYSTUDENTS_H

#include <QDialog>
#include <QVector>
#include "student.h"

namespace Ui {
class DisplayStudents;
}

class DisplayStudents : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayStudents(QWidget *parent, QVector<Student>& students, int max_year, const QString& domain);
    ~DisplayStudents();

private slots:

    void on_tableWidget_cellClicked(int row, int column);

    void on_editButton_clicked();

    void on_Delete_clicked();

    void on_EditGrades_clicked();

    void on_edit_absence_clicked();

private:

    int MAX_YEAR;
    QVector<Student>& students;
    Ui::DisplayStudents *ui;

    QString school_domain;
    int selectedRow; //to keep track of the selected row

    void loadData();
    void showButtons();
    void hideButtons();

};

#endif // DISPLAYSTUDENTS_H
