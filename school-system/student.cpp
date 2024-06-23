#include "student.h"

Student::Student() {}

Student::Student(const QString& Last_name,
                 const QString& First_name,
                 const QString& email,
                 const QString& phone,
                 const DateTime& dateOfBirth,
                 const QString& gender,
                 const QString& ID,
                 int scholarYear,
                 int grp):
    Person(Last_name,First_name,email,phone,dateOfBirth,gender,ID),
    scholarYear(scholarYear),grp(grp) {}


int Student::GetScholarYear() const {
    return scholarYear;
}

int Student::GetGrp() const {
    return grp;
}

void Student::SetGrp(int grp) {
    this->grp = grp;
}

void Student::SetScholarYear(int ScholarYear){
    this->scholarYear=ScholarYear;
}

void Student::setInfo(const QString& Last_name,
                      const QString& First_name,
                      const QString& email,
                      const QString& phone,
                      const DateTime& dateOfBirth,
                      const QString& gender,
                      const QString& ID,
                      int scholarYear,
                      int grp){
    SetDateOfBirth(dateOfBirth);
    SetFirst_name(First_name);
    SetLast_name(Last_name);
    SetPhone(phone);
    SetGender(gender);
    SetID(ID);
    SetEmail(email);
    SetScholarYear(scholarYear);
    SetGrp(grp);
}

