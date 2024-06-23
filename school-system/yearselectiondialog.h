#ifndef YEARSELECTIONDIALOG_H
#define YEARSELECTIONDIALOG_H

#include <QDialog>
#include <QTableWidget>

namespace Ui {
class YearSelectionDialog;
}

class YearSelectionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit YearSelectionDialog(QWidget *parent=nullptr,int maxYear=5);
    ~YearSelectionDialog();
    int getSelectedYear() const;

private slots:
    void on_tableWidget_cellClicked(int row, int column);

private:
    Ui::YearSelectionDialog *ui;
    int selectedYear;
};

#endif // YEARSELECTIONDIALOG_H
