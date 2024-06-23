#include "Wcreateaccount.h"
#include "ui_Wcreateaccount.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QString>
#include "Wlogindialog.h"

CreateAccount::CreateAccount(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreateAccount)
{
    ui->setupUi(this);
}

CreateAccount::~CreateAccount()
{
    delete ui;
}

void CreateAccount::appendDataToFile(const QString &data, const QString &fileName)
{
    QFile file("../data/" + fileName);

    if (!LoginDialog::OPEN_FILE_FOR_APPENDING(file,this))
        return;


    QTextStream stream(&file);
    stream << data << "\n";
    file.close();
}

void CreateAccount::on_Create_account_clicked()
{
    //Retrieve user input from the QLineEdit
    QString userName = ui->user_name->text();
    QString password = ui->password->text();
    QString domain = ui->domain->text();
    int maxYear = ui->max_year->text().toInt(); // Retrieve MAX_YEAR input

    //Ensure that the fields are not empty
    if (userName.isEmpty() || password.isEmpty() || domain.isEmpty()) {
        QMessageBox::warning(this, "Warning", "Please fill in all fields.");
        return;
    }

    //Append data to files
    appendDataToFile(domain, "domain.txt");
    appendDataToFile(password, "passwords.txt");
    appendDataToFile(userName, "usernames.txt");
    appendDataToFile(QString::number(maxYear), "max_year.txt"); // Convert MAX_YEAR to string before appending

    QMessageBox::information(this, "Success", "Account created successfully!");

    this->close();
}
