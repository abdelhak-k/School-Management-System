#include "yearselectiondialog.h"
#include "ui_yearselectiondialog.h"

YearSelectionDialog::YearSelectionDialog(QWidget *parent, int maxYear)
    : QDialog(parent),
    ui(new Ui::YearSelectionDialog),
    selectedYear(-1)  //Initialize selectedYear
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(maxYear);
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setHorizontalHeaderLabels({"Year"});

    for (int i = 0; i < maxYear; ++i) {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(i + 1)));
    }

    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers); //Make table read-only
}

YearSelectionDialog::~YearSelectionDialog()
{
    delete ui;
}

int YearSelectionDialog::getSelectedYear() const
{
    return selectedYear;
}

void YearSelectionDialog::on_tableWidget_cellClicked(int row, int column)
{
    selectedYear = row + 1; //store the selected year
    accept(); //close the dialog
}
