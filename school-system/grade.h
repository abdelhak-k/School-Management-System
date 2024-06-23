#ifndef GRADE_H
#define GRADE_H
#include <QString>
class Grade
{
private:

    QString CourseName;
    float MidTermGrade;
    float FinalExamGrade;
    float ccGrade;

public:

    Grade();
    Grade(const QString& CourseName,float MidTermGrade,float FinalExamGrade,float ccGrade);

    //setters and getters
    QString getCourseName() const;
    float GetMidTermGrade() const;
    float GetFinalExamGrade() const;
    float GetCCGrade() const;
    void SetMidTermGrade(float Mid);
    void SetFinalExamGrade(float final);
    void SetCCGrade(float cc);

};

#endif // GRADE_H
