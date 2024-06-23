#include "selectyear.h"
#include "ui_selectyear.h"

selectYear::selectYear(QWidget *parent, int maxYear)
    : QDialog(parent)
    , ui(new Ui::selectYear)
    , selectedYear(-1)
{
    ui->setupUi(this);

    for (int i = 1; i <= maxYear; ++i)
        ui->comboBox->addItem(QString::number(i));

    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(on_comboBox_currentIndexChanged(int)));
}

selectYear::~selectYear()
{
    delete ui;
}

int selectYear::getSelectedYear() const
{
    return selectedYear;
}

void selectYear::on_comboBox_currentIndexChanged(int index)
{
    selectedYear =index+1; // +1 because index starts from 0
}

void selectYear::on_pushButton_clicked()
{
    close();
}

