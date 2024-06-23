#ifndef EDIT_GRADE_DIALOG_H
#define EDIT_GRADE_DIALOG_H

#include <QDialog>
#include "grade.h"

namespace Ui {
class Edit_Grade_Dialog;
}

class Edit_Grade_Dialog : public QDialog
{
    Q_OBJECT

public:

    explicit Edit_Grade_Dialog(QWidget *parent = nullptr, const QString& studentID = "", const Grade& grade = Grade());
    ~Edit_Grade_Dialog();
    float getMidTermGrade() const;
    float getFinalExamGrade() const;
    float getCCGrade() const;

private slots:

    void on_saveButton_clicked();
    void on_cancelButton_clicked();

private:

    Ui::Edit_Grade_Dialog *ui;
    QString m_studentID;
    Grade m_grade;
};

#endif // EDIT_GRADE_DIALOG_H
