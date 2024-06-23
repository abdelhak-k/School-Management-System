#ifndef DATETIME_H
#define DATETIME_H
#include <QString>
class DateTime
{
private:
    int minute;
    int hour;
    int day;
    int month;
    int year;

public:
    DateTime();
    DateTime(int day, int month, int year);
    DateTime(int minute, int hour, int day, int month, int year);
    QString toString() const;

    static DateTime fromString(const QString& date);

    //getters
    int getDay()const;
    int getMonth() const;
    int getYear() const;

    //operator overloading
    void operator=(const DateTime &Other);
    bool operator==(const DateTime &Other) const;

    //friend class
    friend class AdminWindow;

};

#endif // DATETIME_H
