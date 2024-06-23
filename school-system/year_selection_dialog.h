#ifndef YEAR_SELECTION_DIALOG_H
#define YEAR_SELECTION_DIALOG_H

#include <QDialog>

namespace Ui {
class Year_Selection_Dialog;
}

class Year_Selection_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Year_Selection_Dialog(QWidget *parent = nullptr, int maxYear = 12);
    ~Year_Selection_Dialog();
    int getSelectedYear() const;

private slots:
    void on_listView_clicked(const QModelIndex &index);

private:
    Ui::Year_Selection_Dialog *ui;
    int selectedYear;
};

#endif // YEAR_SELECTION_DIALOG_H
