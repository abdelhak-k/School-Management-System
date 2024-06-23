#ifndef DISPLAY_ASSINGED_COURSES_H
#define DISPLAY_ASSINGED_COURSES_H

#include <QDialog>
#include <QMap>
#include <QVector>
#include <QString>

namespace Ui {
class Display_assinged_courses;
}

class Display_assinged_courses : public QDialog
{
    Q_OBJECT

public:
    explicit Display_assinged_courses(QWidget *parent, const QString &teacherID, QMap<QString, QVector<QString>> &profCourses);
    ~Display_assinged_courses();

private slots:
    void addCourse();
    void deleteCourse();
    void saveCourses();
    void handleCellChanged(int row, int column);
    void handleCellClicked(int row, int column);

private:

    Ui::Display_assinged_courses *ui;
    QString teacherID;
    QMap<QString, QVector<QString>> &profCourses;
    int selectedRow;

    void showButtons();
    void hideButtons();
};

#endif // DISPLAY_ASSINGED_COURSES_H
