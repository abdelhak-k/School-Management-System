#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Wlogindialog.h"
#include "Wadminwindow.h"
#include "Wcreateaccount.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint); //disable the maximize button I don't like it (:
    delete ui;
}


void MainWindow::on_NewAccount_clicked()
{
    //we open the Create account page
    CreateAccount create(this);
    create.setModal(true);
    create.exec();

}


void MainWindow::on_login_button_clicked() //The login button
{
    LoginDialog log(this); //login page
    log.setModal(true);
    log.exec();
    if(log.get_isLogged()){ //if logged in succefully
        log.close();
        this->close(); //close the mainWindow
        admin =new AdminWindow(this,log.get_school_domain(),log.get_max_year()); //create the Admin window, with the domain logged in with
        admin->show();
    }
    delete admin;

}


