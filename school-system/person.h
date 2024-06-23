#ifndef PERSON_H
#define PERSON_H
#include <QString>
#include "datetime.h"

//student,prof classes will inherit from this class
class Person //base case
{
protected:

    QString Last_name;
    QString First_name;
    QString email;
    QString phone;
    DateTime dateOfBirth;
    QString gender;
    QString ID;

public:

    Person();
    Person (const QString& Last_name,
            const QString& First_name,
            const QString& email,
            const QString& phone,
            const DateTime& dateOfBirth,
            const QString& gender,
            const QString &ID);

    //Setters and getters
    QString GetEmail() const;
    void SetEmail(const QString &email);
    QString GetPhone() const;
    void SetPhone(const QString &phone);
    DateTime GetDateOfBirth() const;
    void SetDateOfBirth(const DateTime &dateOfBirth);
    QString GetLast_name() const ;
    void SetLast_name(const QString &Last_name);
    QString GetFirst_name() const;
    void SetFirst_name(const QString &First_name);
    QString GetGender() const;
    void SetGender(const QString &gender);
    QString GetID() const;
    void SetID(const QString& ID);

};

#endif // PERSON_H

