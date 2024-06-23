#include "prof.h"
#include <QMessageBox>
#include <QString>
#include <QtAlgorithms>


Prof::Prof() {}

void Prof::setInfo(const QString& Last_name,
                   const QString& First_name,
                   const QString& email,
                   const QString& phone,
                   const DateTime& dateOfBirth,
                   const QString& gender,
                   const QString& ID,
                   const QString& specialization)
    {
    SetDateOfBirth(dateOfBirth);
    SetFirst_name(First_name);
    SetLast_name(Last_name);
    SetPhone(phone);
    SetGender(gender);
    SetID(ID);
    SetEmail(email);
    SetSpecialization(specialization);
}

QString Prof::GetSpecialization() const {
    return specialization;
}

void Prof::SetSpecialization(const QString &specialization) {
    this->specialization = specialization;
}

Prof::Prof(const QString& Last_name,
                 const QString& First_name,
                 const QString& email,
                 const QString& phone,
                 const DateTime& dateOfBirth,
                 const QString& gender,
                 const QString& ID,
                 const QString& specialization
                 ):
    Person(Last_name,First_name,email,phone,dateOfBirth,gender,ID),
    specialization(specialization) {}
