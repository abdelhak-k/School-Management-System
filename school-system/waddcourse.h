#ifndef WADDCOURSE_H
#define WADDCOURSE_H

#include <QDialog>

namespace Ui {
class WaddCourse;
}

class WaddCourse : public QDialog
{
    Q_OBJECT

public:

    explicit WaddCourse(QWidget *parent, int selectedYear,const QString &school_domain);
    ~WaddCourse();

private slots:

    void on_addCourse_clicked();

private:

    Ui::WaddCourse *ui;
    int selectedYear;
    QString school_domain;

    bool checkEmpty() const;
    bool checkID(const QString& id) const;
    bool isInteger(const QString& str) const;
};

#endif // WADDCOURSE_H
