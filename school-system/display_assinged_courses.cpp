#include "display_assinged_courses.h"
#include "ui_display_assinged_courses.h"
#include "Wadminwindow.h"
#include <QMessageBox>
#include <QMap>

Display_assinged_courses::Display_assinged_courses(QWidget *parent, const QString &teacherID, QMap<QString, QVector<QString>> &profCourses)
    : QDialog(parent)
    , ui(new Ui::Display_assinged_courses)
    , teacherID(teacherID)
    , profCourses(profCourses)
    , selectedRow(-1)
{
    ui->setupUi(this);

    int size = profCourses[teacherID].size();
    ui->table->setRowCount(size);

    //set the items in the table widget
    for (int i = 0; i < size; ++i) {
        QString course = profCourses[teacherID].at(i);
        ui->table->setItem(i, 0, new QTableWidgetItem(course));
    }

    connect(ui->addCourse, &QPushButton::clicked, this, &Display_assinged_courses::addCourse);
    connect(ui->DeleteCourse, &QPushButton::clicked, this, &Display_assinged_courses::deleteCourse);
    connect(ui->Save, &QPushButton::clicked, this, &Display_assinged_courses::saveCourses);
    connect(ui->table, &QTableWidget::cellChanged, this, &Display_assinged_courses::handleCellChanged);
    connect(ui->table, &QTableWidget::cellClicked, this, &Display_assinged_courses::handleCellClicked);

    //initially hide the buttons
    hideButtons();
}

Display_assinged_courses::~Display_assinged_courses()
{
    delete ui;
}

void Display_assinged_courses::showButtons() {
    ui->DeleteCourse->show();
    ui->Save->show();
}

void Display_assinged_courses::hideButtons() {
    ui->DeleteCourse->hide();
    ui->Save->hide();
}

////////////////////////////// buttons: ///////////////////////////////////////

void Display_assinged_courses::addCourse() {
    int row = ui->table->rowCount();
    ui->table->insertRow(row);
    ui->table->setItem(row, 0, new QTableWidgetItem(""));
}

void Display_assinged_courses::deleteCourse() {
    if (selectedRow < 0)
        return;

    ui->table->removeRow(selectedRow);
    profCourses[teacherID].removeAt(selectedRow);
    selectedRow = -1;
    hideButtons();
}

void Display_assinged_courses::saveCourses() {
    profCourses[teacherID].clear();
    for (int i = 0; i < ui->table->rowCount(); ++i) {
        QString course = ui->table->item(i, 0)->text();
        if (!course.isEmpty()) {
            profCourses[teacherID].push_back(course);
        }
    }
    hideButtons();
}

void Display_assinged_courses::handleCellChanged(int row, int column) {
    QString newCourse = ui->table->item(row, column)->text().trimmed();

    if (newCourse.isEmpty())
        return;

    for (int i = 0; i < ui->table->rowCount(); ++i) {
        if (i != row) {
            if (ui->table->item(i, column)->text().trimmed() == newCourse) {
                QMessageBox::warning(this, "Duplicate Course", "This course is already assigned.");
                ui->table->item(row, column)->setText("");
                return;
            }
        }
    }
}

void Display_assinged_courses::handleCellClicked(int row, int column) {
    selectedRow = row;
    showButtons();
}
