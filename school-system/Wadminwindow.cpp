#include "Wadminwindow.h"
#include "ui_Wadminwindow.h"


#include "datetime.h"
#include "student.h"


#include "selectyear.h"


#include "displayteachers.h"
#include "Wlogindialog.h"
#include "edit_teacher_dialog.h"
#include "Waddteacher.h"

#include "displaystudents.h"
#include "wdisplay_edit_sutdent.h"
#include "Waddstudent.h"


#include "display_edit_absence.h"


#include "edit_display_course.h"
#include "display_assinged_courses.h"
#include "waddcourse.h"


#include "display_edit_grades.h"


#include <QMessageBox>
#include <QFile>
#include <QVector>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QComboBox>


AdminWindow::AdminWindow(QWidget *parent,const QString &domain,const QString &max_year)
    : QMainWindow(parent),school_domain(domain),MAX_YEAR(max_year.toInt())

    //the domain name or the school name and the max year will be loaded with the account

    , ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
    setWindowTitle("Admin Window - " + school_domain);
    students.resize(MAX_YEAR);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

int AdminWindow::GetMaxYear() const{
    return MAX_YEAR;
}


//////////////////////////////////////////////// static_functions_implementation ///////////////////////////////////////////////////////////////////////


bool AdminWindow::delete_student(QWidget* cur, QFile &file, const QString& ID)
{
    if (!file.exists()){ //if the file does not exist open in writing mode; create a new file
        if(!LoginDialog::OPEN_FILE_FOR_WRITING(file,cur))
            return false;
        file.close();
    }

    if(!LoginDialog::OPEN_FILE_FOR_READING(file,cur))
        return false;

    QTextStream in(&file);
    QVector<QString> lines;

    //read all lines from the file and store them in vector
    while (!in.atEnd()) {
        QString line = in.readLine();
        lines.push_back(line);
    }

    file.close();

    if(!LoginDialog::OPEN_FILE_FOR_WRITING(file,cur))
        return false;

    QTextStream out(&file);

    bool studentDeleted = false;

    //iterate through the stored lines and write them back to the file excluding the one to be deleted
    for (const QString& line : lines) {
        QVector<QString> studentData = line.split(",");

        if (studentData.size() >= 8 && studentData[5] == ID) {
            //skip writing the line corresponding to the student to be deleted
            studentDeleted = true;
            continue;
        }

        out << line << "\n";
    }

    file.close();
    return studentDeleted;

}


void AdminWindow::push_student(QVector<Student>& students_,const QString& Last_name,
                  const QString& First_name,
                  const QString& email,
                  const QString& phone,
                  const DateTime& dateOfBirth,
                  const QString& gender,
                  const QString& ID,
                  int scholarYear,int grp){

    students_.push_back(Student(Last_name, First_name, email, phone, dateOfBirth,gender,ID, scholarYear, grp));
}


void AdminWindow::Load_Student_Data(QVector<Student>& students_,const QString& school_domain){
    //clear the existing student data if available
    students_.clear();

    // Open the file for reading
    QString path= "../data/students-" + school_domain + ".csv"; //student data of this school account

    QFile file(path);

    if (!file.exists()){ //if does not exists open in wrting mode; it will create a file
        if(!LoginDialog::OPEN_FILE_FOR_WRITING(file,nullptr))
            return;
        file.close();
    }

    if(!LoginDialog::OPEN_FILE_FOR_READING(file,nullptr))
        return;


    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QVector<QString> fields = line.split(","); //split function will return a vector
        if (fields.size() >= 9) {
            QString last_name = fields[0];
            QString first_name = fields[1];
            QString email = fields[2];
            QString phone = fields[3];
            DateTime date_of_birth = DateTime::fromString(fields[4]); //a function that turn a string to DateTime object
            QString ID = fields[5];
            int scholar_year = fields[6].toInt();
            int group = fields[7].toInt();
            QString gender = fields[8];

            //create a Student object and add it to the students vector
            AdminWindow::push_student(students_,last_name, first_name, email, phone, date_of_birth,gender,ID, scholar_year, group);
        }
    }
    //close the file
    file.close();
}


int AdminWindow::findIndexOfStudent(QVector<Student> &students_,const QString& ID){
    //first we load the data we have

    int n=students_.size();

    for(int i=0;i<n;i++){
        if(students_[i].GetID()==ID){
            return i;
        }
    }
    return -1;
}


int AdminWindow::findIndexOfTeacher(const QVector<Prof> &profs, const QString &teacherID) {
    for (int i = 0; i < profs.size(); ++i) {
        if (profs[i].GetID() == teacherID) {
            return i;
        }
    }
    return -1; // Return -1 if not found
}


bool AdminWindow::save_student(QWidget *cur,const Student& student,QFile &file) {

    if (!LoginDialog::OPEN_FILE_FOR_APPENDING(file,nullptr))
        return false;

    QTextStream out(&file);

    //write student data to the file(column separated format)

    out << student.GetLast_name() << "," << student.GetFirst_name() << ","
        << student.GetEmail() << "," << student.GetPhone() << ","
        << student.GetDateOfBirth().toString() << "," << student.GetID() << ","
        << student.GetScholarYear() << "," << student.GetGrp() << ","
        << student.GetGender() << "\n";

    file.close();
    return true;
}


bool AdminWindow::validate_date(int day,int month,int year) {
    if (day <= 0 || day > 31 || month <= 0 || month > 12 || year <= 0)
        return false;

    return true;
}


bool AdminWindow::validate_date(const DateTime& date) {
    int day= date.getDay();
    int month = date.getMonth();
    int year = date.getYear();
    return validate_date(day,month,year);
}


bool AdminWindow::checkID(QFile& file,const QString& ID) {
    QTextStream in(&file);

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        if (fields.size() >= 6 && fields[5] == ID){ //we found a similar ID
            file.close();
            return false; //ID already exists
        }
    }
    return true; //ID is unique
}


bool AdminWindow::checkID(const QVector<Student>& students, const QString& ID) {
    for (auto& student : students) {
        if (student.GetID() == ID) {
            return false;
        }
    }
    return true;
}


bool AdminWindow::checkID(const QVector<Prof>& teachers, const QString& ID){
    for (auto& teacher : teachers) {
        if (teacher.GetID() == ID) {
            return false;
        }
    }
    return true;
}


bool AdminWindow::checkScholar_year(int year,int MAX_YEAR){
    return (year >=1 && year <= MAX_YEAR);
}


void AdminWindow::loadTeachers(const QString &school_domain, QVector<Prof> &teachers)
{
    QString fileName = "../data/teachers-" + school_domain + ".csv";
    QFile file(fileName);

    if (!file.exists()){ //if the file does not exist open in writing mode; create a new file
        if(!LoginDialog::OPEN_FILE_FOR_WRITING(file,nullptr))
            return;
        file.close();
    }

    if(!LoginDialog::OPEN_FILE_FOR_READING(file,nullptr))
        return;


    QTextStream in(&file);
    teachers.clear();

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        if (fields.size() == 8) {
            Prof teacher;
            teacher.SetLast_name(fields[0]);
            teacher.SetFirst_name(fields[1]);
            teacher.SetDateOfBirth(DateTime::fromString(fields[2]));
            teacher.SetEmail(fields[3]);
            teacher.SetPhone(fields[4]);
            teacher.SetID(fields[5]);
            teacher.SetGender(fields[6]);
            teacher.SetSpecialization(fields[7]);
            teachers.append(teacher);
        }
    }

    file.close();
}


void AdminWindow::saveTeachers(const QString &school_domain, const QVector<Prof> &teachers){
    QString fileName = "../data/teachers-" + school_domain + ".csv";
    QFile file(fileName);

    if (!LoginDialog::OPEN_FILE_FOR_WRITING(file,nullptr))
        return;


    QTextStream out(&file);

    //save the info into the file (comma seperated)
    for (const Prof &teacher : teachers) {
        out << teacher.GetLast_name() << ","
            << teacher.GetFirst_name() << ","
            << teacher.GetDateOfBirth().toString() << ","
            << teacher.GetEmail() << ","
            << teacher.GetPhone() << ","
            << teacher.GetID() << ","
            << teacher.GetGender() << ","
            << teacher.GetSpecialization() << "\n";
    }

    file.close();
}


void AdminWindow::loadAssingedCourses(const QString &school_domain,const QString &teacherID,QMap<QString,QVector<QString>> &profCourses){

    QString fileName = "../data/assigned-courses-" + school_domain + ".csv";
    QFile file(fileName);


    if (!file.exists()){ //if the file does not exist open in writing mode; create a new file
        if(!LoginDialog::OPEN_FILE_FOR_WRITING(file,nullptr))
            return;
        file.close();
    }

    if(!LoginDialog::OPEN_FILE_FOR_READING(file,nullptr))
        return;


    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QVector<QString> fields = line.split(","); //this function splits the lines and they become in the vector

        QString id = fields[0];
        if (id==teacherID) {
            for (int i =1; i<fields.size(); ++i) {
                QString course = fields[i];
                profCourses[teacherID].append(course);
            }
            break;
        }
    }

    file.close();

}


void AdminWindow::saveAssignedCourses(const QString &school_domain, const QMap<QString, QVector<QString>> &profCourses){

    QString fileName = "../data/assigned-courses-" + school_domain + ".csv";
    QFile file(fileName);

    //writing mode will overwrite the exsiting data
    if (!LoginDialog::OPEN_FILE_FOR_WRITING(file,nullptr))
        return;

    QTextStream out(&file);

    // we iterate over the map using iterators
    // "it.key" -> returns the keys of the map
    // "it.value" is the vector that "it.key" (ID of teachers) maps to

    auto it = profCourses.begin();
    while(it != profCourses.end() ){
        out << it.key();
        for (const QString &course : it.value())
            out << "," << course;

        out << "\n";
        ++it;
    }

    file.close();
}


void AdminWindow::load_courses(QVector<Course> &courses_, int year,const QString &school_domain){
    courses_.clear();

    QString fileName = "../data/courses_year_" + QString::number(year) + "_"+ school_domain+ ".csv";
    QFile file(fileName);

    if (!file.exists()){
        if(!LoginDialog::OPEN_FILE_FOR_WRITING(file,nullptr))
            return;
        file.close();
    }

    if(!LoginDialog::OPEN_FILE_FOR_READING(file,nullptr))
        return;

    QTextStream in(&file);

    //while we don't reach the end of the file:
    while (!in.atEnd()){

        //we read each line
        QString line = in.readLine();

        //then we split it ( "," is the delimiter)

        QVector<QString> fields = line.split(",");

        if (fields.size()>=3){
            QString ID = fields[0];
            QString name = fields[1];
            int coef = fields[2].toInt();

            //we push a "course" object into the vector of courses
            courses_.push_back(Course(coef, ID, name));
        }
    }
    file.close();
}


bool AdminWindow::delete_course(QWidget* cur, QFile &file, const QString& courseID){

    if (!file.exists()){
        if(!LoginDialog::OPEN_FILE_FOR_WRITING(file,cur))
            return false;
        file.close();
    }

    if(!LoginDialog::OPEN_FILE_FOR_READING(file,cur))
        return false;


    QTextStream in(&file);
    QVector<QString> lines;

    //read all lines from the file and store them in a vector
    while (!in.atEnd()) {
        QString line = in.readLine();
        lines.push_back(line);
    }

    file.close();

    if (!LoginDialog::OPEN_FILE_FOR_WRITING(file,cur))
        return false;


    QTextStream out(&file);

    bool courseDeleted =false;

    //iterate through the lines and write them back to the file without the one to be deleted
    for (const QString& line : lines) {
        QVector<QString> courseData = line.split(",");

        if (courseData.size() >= 3 && courseData[0] == courseID) {
            //line corresponding to the course we want to delete
            courseDeleted = true;
            continue;   //continue to go to the next itenration and skip the "out << line" part
        }

        out << line << "\n";
    }

    file.close();
    return courseDeleted;
}


void AdminWindow::loadGrades(const QString& school_domain,QMap<QString,QVector<Grade>>& studentGradesMap){
    QString fileName = "../data/grades-" + school_domain + ".csv";
    QFile file(fileName);

    if (!file.exists()){
        if(!LoginDialog::OPEN_FILE_FOR_WRITING(file,nullptr))
            return;
        file.close();
    }

    if(!LoginDialog::OPEN_FILE_FOR_READING(file,nullptr))
        return;


    QTextStream in(&file);
    studentGradesMap.clear();

    while (!in.atEnd()) {

        QString line = in.readLine();
        QVector<QString> fields = line.split(",");

        if (fields.size() == 5) {

            QString studentID = fields[0];
            QString courseID = fields[1];
            float midTermGrade = fields[2].toFloat();
            float finalExamGrade = fields[3].toFloat();
            float ccGrade = fields[4].toFloat();

            //we push this data into the vector of this specif studentID as an object of Grade
            studentGradesMap[studentID].push_back( Grade(courseID, midTermGrade, finalExamGrade, ccGrade) );
        }
    }

    file.close();
}


void AdminWindow::saveGrades(const QString& school_domain,QMap<QString,QVector<Grade>>& studentGradesMap){
    QString fileName = "../data/grades-" + school_domain + ".csv";
    QFile file(fileName);

    //wrting mode will overwrite the old data
    if (!LoginDialog::OPEN_FILE_FOR_WRITING(file,nullptr))
        return;


    QTextStream out(&file);

    for (const QString& studentID : studentGradesMap.keys()){
        const QVector<Grade>& grades=studentGradesMap[studentID];

        for (const Grade& grade : grades) {
            //we write the studentID and then the course information on each line

            out << studentID << "," << grade.getCourseName() << ","
                << grade.GetMidTermGrade() << "," << grade.GetFinalExamGrade() << ","
                << grade.GetCCGrade() << "\n";
        }
    }

    file.close();
}


void AdminWindow::load_absences(QMap<QString,int> &absences,const QString& studentID,const QString &school_domain){

    QString fileName = "../data/absences-" + school_domain + ".csv";
    QFile file(fileName);

    if (!file.exists()){
        if(!LoginDialog::OPEN_FILE_FOR_WRITING(file,nullptr))
            return;
        file.close();
    }

    if(!LoginDialog::OPEN_FILE_FOR_READING(file,nullptr))
        return;

    QTextStream in(&file);
    absences.clear();   //clear any exsiting data on the map


    while (!in.atEnd()) {

        QString line = in.readLine();
        QVector<QString> fields = line.split(",");

        //the line contains the data we want
        if (fields[0]== studentID){

            for(int i=1 ; i<fields.size()-1 ; i+=2){
                bool ok;

                ///////////////////////////////
                //fields[i] is the course name
                //fields[i+1] is the number of absences
                //////////////////////////////

                int num=fields[i+1].toInt(&ok); //ok will be true if the conversion went succesfully else it will be false

                if(!ok)
                    absences[ fields[i] ]=0; //set the grade to zero if the conversion fails (not a digit)

                else
                    absences[ fields[i] ] = num;
            }

            break;
        }
    }

    file.close();

}


void AdminWindow::save_absences(const QString& studentID, const QString& school_domain, const QMap<QString, int>& absences){

    QString fileName = "../data/absences-" + school_domain + ".csv";
    QFile file(fileName);

    //read-write mode since we are going to read all the file and also write the absences of this specific student
    if (!LoginDialog::OPEN_FILE_FOR_READWRITE(file,nullptr))
        return;


    QTextStream in(&file);
    QVector<QString> lines;

    //////////////////////////////
    //we store all the existing data in vector(lines)
    //then we write them back in the file
    //but the specfic line that contains this student absences will be replaced with the new data
    //////////////////////////////

    //store them in lines
    while (!in.atEnd())
        lines.push_back(in.readLine());

    file.resize(0); //clear the exsisting data
    QTextStream out(&file);

    bool found = false;

    for (QString& line : lines) {

        //we split each line (comma seperated)
        QVector<QString> fields = line.split(",");

        //the first field (0 indexed) is the student ID
        //if we found the line that has this student info we change his absences

        if(fields[0]==studentID){

            QString newLine=studentID; //we replace the line that has the student ID with the new data

            //////////////////////////////
            //(the key) is the course name
            //(the value) is the absences of that ID
            //////////////////////////////

            //we iterate over the map and write the data back
            for (auto it = absences.begin(); it != absences.end(); ++it)
                newLine += "," + it.key() + "," + QString::number(it.value());

            line = newLine;
            found = true;

        }
        out<< line << "\n"; //we append the lines into the file
    }

    //if there is no previuos info about this student we append a completly new line
    if (!found){
        QString newLine = studentID;
        for (auto it = absences.constBegin(); it != absences.constEnd(); ++it) {
            newLine += "," + it.key() + "," + QString::number(it.value());
        }
        out<< newLine << "\n";
    }

    file.close();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////// buttons_functions_imeplementation ////////////////////////////////////////////////////////////

void AdminWindow::on_add_student_button_clicked()
{
    addStudent page(this,school_domain,MAX_YEAR);
    page.setModal(true);
    page.exec();
}


void AdminWindow::on_delete_student_button_clicked()
{
    //we check if the user provided an ID in the line edit box
    if(ui->student_ID_from_user->text().isEmpty()){
        QMessageBox::warning(this, "Warning", "The ID field is empty!");
        return;
    }

    //then we promt the user to confirm if he indeed wants to delete the student info
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to DELETE the student information?!!",
                                  QMessageBox::Yes|QMessageBox::No);

    //if YES:
    if (reply == QMessageBox::Yes){

        QString path= "../data/students-" + this->school_domain + ".csv"; //student data of this school account
        QFile file(path);

        //we call this function and it will return true if every thing is good
        if(delete_student(this, file,ui->student_ID_from_user->text() ))
            QMessageBox::information(this, "Success", "Student deleted successfully!");
        else
            QMessageBox::information(this, "Error", "Failed to delete student. Student not found.");

    }
    Load_Student_Data(students,school_domain); //refresh the loaded data
}


void AdminWindow::on_Display_students_clicked()
{

    Load_Student_Data(students,school_domain);
    DisplayStudents page(this,students,MAX_YEAR,school_domain);
    page.setModal(true);
    page.exec();

}


void AdminWindow::on_display_edit_student_clicked()
{
    //we check if the user provided an ID in the line edit box
    if(ui->student_ID_from_user->text().isEmpty()){
        QMessageBox::warning(this, "Warning", "The ID field is empty!");
        return;
    }

    QString ID = ui->student_ID_from_user->text();

    int StudentIndex=this->findIndexOfStudent(students,ID); //this function will return the index of the student that has ID, else it return -1


    if(StudentIndex==-1){ //student not found
        QMessageBox::warning(this, "Warning", "The ID given does not exist!");
        return;
    }

    Student &student=students[StudentIndex]; //refrence; the changes of student will reflect on the ovrall vector
    Wdisplay_edit_sutdent page(this,student,school_domain,MAX_YEAR); //we send the student to this dialog
    page.setModal(true);
    page.exec();
    Load_Student_Data(students,school_domain); //refresh the data

}


void AdminWindow::on_add_teacher_button_clicked()
{
    loadTeachers(school_domain,profs);
    Waddteacher page(this,school_domain,profs,MAX_YEAR);
    page.setModal(true);
    page.exec();
}


void AdminWindow::on_display_all_teachers_button_clicked()
{
    loadTeachers(school_domain,profs);
    displayTeachers page(this,profs,school_domain,MAX_YEAR);
    page.setModal(true);
    page.exec();
}


void AdminWindow::on_display_edit_teacher_button_clicked()
{
    //check if the user provided an ID
    if(ui->teacher_ID_from_user->text().isEmpty()){
        QMessageBox::warning(this,"Error","please enter a valid ID");
        return;
    }

    QString teacherID = ui->teacher_ID_from_user->text().trimmed();

    loadTeachers(school_domain,profs);

    //search for the index of the sutdent in the profs vector, if not found return -1
    int index = findIndexOfTeacher(profs,teacherID);

    Prof &teacher=profs[index]; //refrence; the changes will reflect on the vector

    Edit_teacher_dialog page(this,teacher,school_domain);
    page.setModal(true);
    page.exec();
    AdminWindow::saveTeachers(school_domain,profs);
}


void AdminWindow::on_delete_teacher_button_clicked()
{
    //check if the user provided an ID
    if(ui->teacher_ID_from_user->text().isEmpty()){
        QMessageBox::warning(this,"Error","please enter a valid ID");
        return;
    }

    QString teacherID = ui->teacher_ID_from_user->text().trimmed();

    //search for the index of the sutdent in the profs vector, if not found return -1
    int index =findIndexOfTeacher(profs, teacherID);


    if (index != -1){
        profs.removeAt(index);
        AdminWindow::saveTeachers(school_domain, profs);
        QMessageBox::information(this, "Success", "Teacher deleted successfully.");
    }
    else //-1 means the teacher is not found
        QMessageBox::warning(this, "Error", "Teacher not found.");

}


void AdminWindow::on_add_course_clicked()
{

    selectYear page(this,MAX_YEAR);
    page.setModal(true);
    page.exec();
    WaddCourse addpage(this,page.getSelectedYear(),school_domain);
    addpage.setModal(true);
    addpage.exec();

}


void AdminWindow::on_display_edit_course_clicked()
{
    //a dialog to prompt the user to enter the year which this course belongs to
    selectYear page(this,MAX_YEAR);
    page.setModal(true);
    page.exec();

    //we load this year courses into "courses" vector
    load_courses(courses,page.getSelectedYear(),school_domain);

    //we display the courses in the dialog
    edit_display_course addpage(this,courses,page.getSelectedYear(),school_domain);
    addpage.setModal(true);
    addpage.exec();

}


void AdminWindow::on_display_edit_grade_clicked()
{

    if(ui->student_ID_from_user->text().isEmpty()){
        QMessageBox::warning(this, "Warning", "The ID field is empty!");
        return;
    }

    QString ID = ui->student_ID_from_user->text();

    //load students into vector "students"
    Load_Student_Data(students,school_domain);

    int StudentIndex=this->findIndexOfStudent(students,ID);
    //this function will return the index of the student that has ID, else it return -1


    if(StudentIndex==-1){
        QMessageBox::warning(this, "Warning", "The ID given does not exist!");
        return;
    }

    int year=students[StudentIndex].GetScholarYear();

    //load courses into the vector "courses"
    load_courses(courses,year,school_domain);

    //load grades into the studentGradesMap
    loadGrades(school_domain,studentGradesMap);

    //we send their refrence to Display_Edit_Grades, to  edit and display them
    Display_Edit_Grades page(this,ID,courses,studentGradesMap,school_domain);
    page.setModal(true);
    page.exec();
}


void AdminWindow::on_display_edit_absence_clicked()
{
    if(ui->student_ID_from_user->text().isEmpty()){
        QMessageBox::warning(this, "Warning", "The ID field is empty!");
        return;
    }

    QString ID = ui->student_ID_from_user->text();

    //load data to "students" vector
    Load_Student_Data(students,school_domain);

    int StudentIndex=this->findIndexOfStudent(students,ID);
    //this function will return the index of the student that has ID, else it return -1

    int year = students[StudentIndex].GetScholarYear(); //we get the year of the student

    if(StudentIndex==-1){
        QMessageBox::warning(this, "Warning", "The ID given does not exist!");
        return;
    }

    QMap<QString,int> absences; //a map that maps from the courseName to the number of absences of that course
    //we then load the data onto this map
    AdminWindow::load_absences(absences,ID,school_domain);

    AdminWindow::load_courses(courses,year,school_domain);

    //we send their refrence to Display_Edit_absence, to  edit and display them
    display_edit_absence page(this,ID,courses,absences,school_domain);
    page.setModal(true);
    page.exec();



}


void AdminWindow::on_assinged_courses_of_prof_clicked()
{
    //check if the user provided an ID
    if(ui->teacher_ID_from_user->text().isEmpty()){
        QMessageBox::warning(this,"Error","please enter a valid ID");
        return;
    }

    QString teacherID = ui->teacher_ID_from_user->text().trimmed();

    //get the index of teacher on this vector, if not found return -1
    int index = findIndexOfTeacher(profs, teacherID);

    if (index != -1) {
        //a map that maps from the prof ID to its assigned courses
        QMap<QString, QVector<QString>> profCourses;

        //we load the exsiting data from file to this map
        loadAssingedCourses(school_domain, teacherID, profCourses);

        //we send this data onto this dialog to display it and edit on it
        Display_assinged_courses assignDialog(this, teacherID, profCourses);
        assignDialog.setModal(true);
        assignDialog.exec();

        //we save back the data if changed
        saveAssignedCourses(school_domain, profCourses);
    }

    else
        QMessageBox::warning(this, "Error", "Teacher not found.");

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

