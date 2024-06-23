#ifndef COURSE_H
#define COURSE_H

#include <QString>
class Course
{
private:
    int coef;
    QString ID;
    QString name;
public: 
    Course();
    Course(int coef,const QString &ID,const QString &name);

    int getCoef() const {
        return this->coef;
    }
    const QString& getName() const {
        return this->name;
    }
    const QString& getID() const{
        return this->ID;
    }
    void setCoef(int c){
        coef=c;
    }
    void setID(const QString& n){
        ID=n;
    }
    void setName(const QString& n){
        name=n;
    }
};

#endif // COURSE_H
