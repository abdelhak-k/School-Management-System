#ifndef WLOGINDIALOG_H
#define WLOGINDIALOG_H

#include <QDialog>
#include <QFile>
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();

    //getters
    bool get_isLogged() const{ return isLogged;}
    QString get_school_domain() const{ return school_domain; }
    QString get_max_year() const{ return MAX_YEAR; }


    ///////////////////////////////////static functions will be used all over the other classes//////////
    /// \brief OPEN_FILE_FOR_X
    /// will open the file for the mode X if somthing went wrong it show a message indicating that there is a problem
    static bool OPEN_FILE_FOR_READING(QFile &file,QWidget *cur);
    static bool OPEN_FILE_FOR_APPENDING(QFile &file,QWidget *cur);
    static bool OPEN_FILE_FOR_WRITING(QFile &file, QWidget *cur);
    static bool OPEN_FILE_FOR_READWRITE(QFile &file, QWidget *cur);

private slots:

    void on_Login_clicked();

private:

    Ui::LoginDialog *ui;
    QString usernameFromFile;
    QString passwordFromFile;
    QString school_domain;  //school name(ensia for example)
    QString MAX_YEAR;
    bool isLogged;
    bool LoginUser();

};

#endif // WLOGINDIALOG_H
