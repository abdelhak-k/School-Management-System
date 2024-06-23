#ifndef WADMINWINDOW_H
#define WADMINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "prof.h"
#include "student.h"
#include "Waddstudent.h"
#include "course.h"

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr,const QString &domain=" ",const QString& max_year=" ");
    ~AdminWindow();
    //load data
    //display ...

    int GetMaxYear() const;

    ////////////////////////////////////////static functions://////////////////////////////////////////////////////////////
    /// \brief managing the students data from and into files
    static void push_student(QVector<Student>& students_,const QString& Last_name,const QString& First_name,const QString& email,
                      const QString& phone,const DateTime& dateOfBirth,const QString& gender,const QString& ID,
                      int scholarYear,int grp);
    static bool save_student(QWidget *cur,const Student& student,QFile &file);
    static bool delete_student(QWidget* cur,QFile &file, const QString& ID);
    static void Load_Student_Data(QVector<Student>& students_,const QString& school_domain);
    static void add_student_to_group(const Student& student);

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////
    /// \brief to check if the ID is duplicated (either teacher or student)
    static bool checkID(QFile& file,const QString &ID) ;
    static bool checkID(const QVector<Student>& students, const QString& ID);
    static bool checkID(const QVector<Prof>& teachers, const QString& ID);

    /////////////////////////
    /// \brief is date valid
    static bool validate_date(int day,int month,int year) ;
    static bool validate_date(const DateTime& date);

    static bool checkScholar_year(int scholar_year, int MAX_YEAR);

    ///////////////////////
    /// \brief load and save teachers vector<->file
    static void loadTeachers(const QString &school_domain, QVector<Prof> &teachers);
    static void saveTeachers(const QString &school_domain, const QVector<Prof> &teachers);

    //////////////////
    /// \brief get the index of student/teacher in the given vector
    static int findIndexOfTeacher(const QVector<Prof> &profs, const QString &teacherID);
    static int findIndexOfStudent(QVector<Student> &students_,const QString& ID);

    ////////
    /// \brief load/delete courses vector<->file
    static void load_courses(QVector<Course> &courses_, int year,const QString &school_domain);
    static bool delete_course(QWidget* cur, QFile &file, const QString& courseID);

    ////////////////
    /// \brief load/save vector<->file
    static void loadGrades(const QString& school_domain,QMap<QString,QVector<Grade>>&);
    static void saveGrades(const QString& school_domain,QMap<QString,QVector<Grade>>&);

    ////////////////
    /// \brief load/save absences map<->file
    static void load_absences(QMap<QString,int> &absences,const QString& studentID,const QString &school_domain);
    static void save_absences(const QString& studentID, const QString& school_domain, const QMap<QString, int>& absence);

    /////////////////
    /// \brief load and save the assinged courses of teachers map<->vector
    static void loadAssingedCourses(const QString &school_domain,const QString &teacherID,QMap<QString,QVector<QString>> &profCourses);
    static void saveAssignedCourses(const QString &school_domain, const QMap<QString, QVector<QString>> &profCourses);

private slots:

    void on_add_student_button_clicked();

    void on_delete_student_button_clicked();

    void on_Display_students_clicked();

    void on_add_teacher_button_clicked();

    void on_display_all_teachers_button_clicked();

    void on_display_edit_teacher_button_clicked();

    void on_delete_teacher_button_clicked();

    void on_display_edit_student_clicked();

    void on_add_course_clicked();

    void on_display_edit_course_clicked();

    void on_display_edit_grade_clicked();

    void on_display_edit_absence_clicked();

    void on_assinged_courses_of_prof_clicked();

private:
    //our Data
    QMap<QString, QVector<Grade>> studentGradesMap;
    QVector<Prof> profs;
    QVector<Student> students;
    QVector<Course> courses;
    Ui::AdminWindow *ui;
    QString school_domain; //or the name of the school
    int MAX_YEAR; //maximum acdemic year

};

#endif // WADMINWINDOW_H
