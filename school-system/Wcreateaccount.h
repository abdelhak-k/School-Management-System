#ifndef WCREATEACCOUNT_H
#define WCREATEACCOUNT_H

#include <QDialog>

namespace Ui {
class CreateAccount;
}

class CreateAccount : public QDialog
{
    Q_OBJECT

public:
    explicit CreateAccount(QWidget *parent = nullptr);
    ~CreateAccount();

private slots:
    void on_Create_account_clicked();

private:
    Ui::CreateAccount *ui;
    void appendDataToFile(const QString &data, const QString &fileName);
};
#endif // WCREATEACCOUNT_H
