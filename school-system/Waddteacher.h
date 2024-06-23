#ifndef WADDTEACHER_H
#define WADDTEACHER_H

#include <QDialog>
#include <prof.h>
#include <QFile>

namespace Ui {
class Waddteacher;
}

class Waddteacher : public QDialog
{
    Q_OBJECT

public:

    explicit Waddteacher(QWidget *parent ,const QString &school_domain,QVector<Prof> &profs ,int MAX_YEAR);
    ~Waddteacher();

private slots:

    void on_add_teacher_button_clicked();

private:

    Ui::Waddteacher *ui;
    QString school_domain;
    QVector<Prof> profs;
    int MAX_YEAR;

    bool checkEmpty() const;
    bool Checker(QWidget* cur,Prof& prof,QFile &file);
    void ClearUi() const;

};

#endif // WADDTEACHER_H
