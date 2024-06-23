#ifndef PROF_H
#define PROF_H
#include "person.h"
#include "course.h"
#include "datetime.h"
#include <QPair>
#include <QVector>
#include <QString>

class Prof:public Person
{
private:

    QString specialization;

public:

    Prof(const QString& Last_name,
               const QString& First_name,
               const QString& email,
               const QString& phone,
               const DateTime& dateOfBirth,
               const QString& gender,
               const QString& ID,
               const QString& specialization);
    Prof();
    void setInfo(const QString& Last_name,
                       const QString& First_name,
                       const QString& email,
                       const QString& phone,
                       const DateTime& dateOfBirth,
                       const QString& gender,
                       const QString& ID,
                       const QString& specialization);

    QString GetSpecialization() const ;
    void SetSpecialization(const QString &specialization);

};

#endif // PROF_H

