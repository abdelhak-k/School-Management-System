#include "datetime.h"
#include <QString>
#include <QVector>
#include <QDebug>

DateTime::DateTime() : minute(0), hour(0), day(0), month(0), year(0) {}

DateTime::DateTime(int minute, int hour, int day, int month, int year)
    : minute(minute), hour(hour), day(day), month(month), year(year) {}

DateTime::DateTime(int day, int month, int year):
    day(day), month(month), year(year),minute(0),hour(0) {}

int DateTime::getDay()const{
    return this->day;
}
int DateTime::getMonth() const{
    return this->month;
}
int DateTime::getYear() const{
    return this->year;
}

QString DateTime::toString() const {
    QString yearStr = QString::number(year).rightJustified(4, '0');
    QString monthStr = QString::number(month).rightJustified(2, '0');
    QString dayStr = QString::number(day).rightJustified(2, '0');
    QString hourStr = QString::number(hour).rightJustified(2, '0');
    QString minuteStr = QString::number(minute).rightJustified(2, '0');

    return yearStr + "-" + monthStr + "-" + dayStr + " " + hourStr + ":" + minuteStr;
}

//////////////////// static function: ////////////////////////////////

DateTime DateTime::fromString(const QString& date){
    QVector<QString> parts = date.split(" ");
    if (parts.size() != 2)
        return DateTime(); //return a default DateTime object if the format is invalid


    QString dateString = parts[0];
    QString timeString = parts[1];

    QVector<QString> dateParts = dateString.split("-");
    QVector<QString> timeParts = timeString.split(":");

    if (dateParts.size() != 3 || timeParts.size() != 2)
        return DateTime(); //return a default DateTime object if the format is invalid


    int year = dateParts[0].toInt();
    int month = dateParts[1].toInt();
    int day = dateParts[2].toInt();
    int hour = timeParts[0].toInt();
    int minute = timeParts[1].toInt();

    return DateTime(minute, hour, day, month, year);
}

//////////////////////// operators: /////////////////////////////////

void DateTime::operator=(const DateTime &other){
    this->day=other.day;
    this->minute=other.minute;
    this->year=other.year;
    this->month=other.month;
    this->hour=other.hour;
}

bool DateTime::operator==(const DateTime &other) const{
    if(this->day== other.day && this->month==other.month && this->year== other.year)
        return true;

    return false;

}



