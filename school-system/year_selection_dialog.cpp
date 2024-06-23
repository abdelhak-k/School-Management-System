#include "year_selection_dialog.h"
#include "ui_year_selection_dialog.h"
#include <QStringListModel>

Year_Selection_Dialog::Year_Selection_Dialog(QWidget *parent, int maxYear)
    : QDialog(parent),
    ui(new Ui::Year_Selection_Dialog),
    selectedYear(-1)  // Initialize selectedYear to -1
{
    ui->setupUi(this);

    // Create a list of years
    QStringList yearList;
    for (int i = 1; i <= maxYear; ++i) {
        yearList.append(QString::number(i));
    }

    // Set the model for the QListView
    QStringListModel *model = new QStringListModel(this);
    model->setStringList(yearList);
    ui->listView->setModel(model);
}

Year_Selection_Dialog::~Year_Selection_Dialog()
{
    delete ui;
}

int Year_Selection_Dialog::getSelectedYear() const
{
    return selectedYear;
}

void Year_Selection_Dialog::on_listView_clicked(const QModelIndex &index)
{
    selectedYear = index.row()+1;
    accept();
}
