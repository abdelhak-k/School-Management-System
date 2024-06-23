#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include "course.h"
#include "grade.h"
#include <QMap>
#include <QVector>
#include "academicyear.h"

class Student:public Person //we inhereit the Person data members
{
private:

    int scholarYear;
    int grp;

public:

    Student();
    Student(const QString& Last_name,
            const QString& First_name,
            const QString& email,
            const QString& phone,
            const DateTime& dateOfBirth,
            const QString& gender,
            const QString& ID,
            int scholarYear,
            int grp);

    void setInfo(const QString& Last_name,
                 const QString& First_name,
                 const QString& email,
                 const QString& phone,
                 const DateTime& dateOfBirth,
                 const QString& gender,
                 const QString& ID,
                 int scholarYear,
                 int grp);

    //Setters and getters
    int GetScholarYear() const;
    int GetGrp() const;
    void SetScholarYear(int scholarYear);
    void SetGrp(int grp);

};

#endif // STUDENT_H
