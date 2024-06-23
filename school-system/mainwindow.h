#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Wadminwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_login_button_clicked();
    void on_NewAccount_clicked();

private:

    Ui::MainWindow *ui;
    AdminWindow *admin;

};
#endif // MAINWINDOW_H
