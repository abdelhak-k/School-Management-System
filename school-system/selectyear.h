#ifndef SELECTYEAR_H
#define SELECTYEAR_H

#include <QDialog>

namespace Ui {
class selectYear;
}

class selectYear : public QDialog
{
    Q_OBJECT

public:

    explicit selectYear(QWidget *parent = nullptr, int maxYear = 5);
    ~selectYear();

    int getSelectedYear() const;

private slots:

    void on_comboBox_currentIndexChanged(int index);
    void on_pushButton_clicked();

private:

    Ui::selectYear *ui;
    int selectedYear;

};

#endif // SELECTYEAR_H
