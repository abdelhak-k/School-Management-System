#include "grade.h"


Grade::Grade(const QString& CourseName,float MidTermGrade,float FinalExamGrade,float ccGrade):
    CourseName(CourseName),MidTermGrade(MidTermGrade),FinalExamGrade(FinalExamGrade),ccGrade(ccGrade){}

Grade::Grade(){
    Grade("",0,0,0);
}


QString Grade::getCourseName() const{
    return this->CourseName;
}

float Grade::GetMidTermGrade() const{
    return this->MidTermGrade;
}

float Grade::GetFinalExamGrade() const{
    return this->FinalExamGrade;
}

float Grade::GetCCGrade() const{
    return this->ccGrade;
}

void Grade::SetMidTermGrade(float Mid){
    this->MidTermGrade=Mid;
}

void Grade::SetFinalExamGrade(float final){
    this->FinalExamGrade=final;
}

void Grade::SetCCGrade(float cc){
    this->ccGrade=cc;
}
