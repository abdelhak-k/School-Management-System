#include "Wlogindialog.h"
#include "ui_Wlogindialog.h"
#include <QFile>
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) //constructor
    : QDialog(parent)
    , ui(new Ui::LoginDialog)
    , isLogged(false) //setting isLogged to false
{
    ui->setupUi(this);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

bool LoginDialog::OPEN_FILE_FOR_READING(QFile &file, QWidget *cur) {
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        file.close();
        QMessageBox::warning(cur, "Warning", "Failed to open file for reading.");
        return false;
    }
    return true;
}

bool LoginDialog::OPEN_FILE_FOR_APPENDING(QFile &file, QWidget *cur) {
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        file.close();
        QMessageBox::warning(cur, "Warning", "Failed to open file for appending.");
        return false;
    }
    return true;
}

bool LoginDialog::OPEN_FILE_FOR_WRITING(QFile &file, QWidget *cur) {
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        file.close();
        QMessageBox::warning(cur, "Warning", "Failed to open file for writing.");
        return false;
    }
    return true;
}

bool LoginDialog::OPEN_FILE_FOR_READWRITE(QFile &file, QWidget *cur) {
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        file.close();
        QMessageBox::warning(cur, "Warning", "Failed to open file for reading and writing.");
        return false;
    }
    return true;
}

bool LoginDialog::LoginUser()
{
    QString enteredUsername = ui->username->text().trimmed();
    QString enteredPassword = ui->password->text().trimmed();

    QFile userFile("../data/usernames.txt");
    QFile passFile("../data/passwords.txt");
    QFile domainFile("../data/domain.txt");
    QFile yearFile("../data/max_year.txt");

    if (!OPEN_FILE_FOR_READING(userFile,this) ||
        !OPEN_FILE_FOR_READING(passFile,this) ||
        !OPEN_FILE_FOR_READING(domainFile,this) ||
        !OPEN_FILE_FOR_READING(yearFile,this)) {
        QMessageBox::critical(this, "Error", "Failed to open data files");
        return false;
    }

    QTextStream userStream(&userFile);
    QTextStream passStream(&passFile);
    QTextStream domainStream(&domainFile);
    QTextStream yearStream(&yearFile);

    QString username, password, domain, year;
    bool loggedIn = false;

    while (!userStream.atEnd() && !passStream.atEnd() && !domainStream.atEnd() && !yearStream.atEnd()) {
        username = userStream.readLine().trimmed();
        password = passStream.readLine().trimmed();
        domain = domainStream.readLine().trimmed();
        year = yearStream.readLine().trimmed();

        if (username == enteredUsername && password == enteredPassword) {
            loggedIn = true;
            this->school_domain = domain;
            this->MAX_YEAR = year;
            break;
        }
    }

    userFile.close();
    passFile.close();
    domainFile.close();
    yearFile.close();

    if (loggedIn)
        QMessageBox::information(this, "Login", "Login Success !");
    else
        QMessageBox::information(this, "Login", "Incorrect Username or Password !!");


    return loggedIn;
}

void LoginDialog::on_Login_clicked()
{
    this->isLogged = LoginUser();
    if(this->isLogged) //Login success
        this->close();
}

