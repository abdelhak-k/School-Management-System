#include "person.h"



QString Person::GetLast_name() const {
    return Last_name;
}

void Person::SetLast_name(const QString &Last_name) {
    this->Last_name = Last_name;
}

QString Person::GetFirst_name() const {
    return First_name;
}

void Person::SetFirst_name(const QString &First_name) {
    this->First_name = First_name;
}
QString Person::GetEmail() const {
    return email;
}
void Person::SetEmail(const QString &email) {
    this->email = email;
}
QString Person::GetPhone() const {
    return phone;
}
void Person::SetPhone(const QString &phone) {
    this->phone = phone;
}


QString Person::GetID() const {
    return ID;
}

void Person::SetID(const QString& ID) {
    this->ID = ID;
}

DateTime Person::GetDateOfBirth() const {
    return dateOfBirth;
}

void Person::SetDateOfBirth(const DateTime& dateOfBirth) {
    this->dateOfBirth = dateOfBirth;
}

QString Person::GetGender() const {
    return gender;
}

void Person::SetGender(const QString &gender) {
    this->gender = gender;
}

Person::Person() {}
Person::Person(const QString& Last_name,
               const QString& First_name,
               const QString& email,
               const QString& phone,
               const DateTime& dateOfBirth,
               const QString& gender,
               const QString& ID):
    Last_name(Last_name),
    First_name(First_name),
    email(email),
    phone(phone),
    dateOfBirth(dateOfBirth),
    gender(gender),
    ID(ID)
    {}








