#include "Class_List.h"

// Safe state!
Course::Course(){
    courseCode.assign("");
    courseName.assign("");
    profName.assign("");
    day.assign("");
    startTime = -1.0;
    endTime = -1.0;
    studentCount = 0;
    maxStudents = -1;
    studentList = nullptr;
}

Course::Course(std::string c, std::string n, std::string p,
    std::string d, float s, float e, int m){
    courseCode.assign(c);
    courseName.assign(n);
    profName.assign(p);
    day.assign(d);
    startTime = s;
    endTime = e;
    maxStudents = m;
    studentCount = 0;
    // How you allocate memory for a dynamic array
    studentList = new std::string[maxStudents]; 
}

Course::~Course(){
    delete[] studentList; // frees the dynamic memory back to OS
    studentList = nullptr;
}

std::string Course::getCourseCode() const{
    return courseCode;
}
void Course::setCourseCode(std::string c){
    courseCode.assign(c);
}

std::string Course::getCourseName() const{
    return courseName;
}
void Course::setCourseName(std::string n){
    courseName.assign(n);
}

std::string Course::getProfName() const{
    return profName;
}
void Course::setProfName(std::string n){
    profName.assign(n);
}

std::string Course::getCourseDay() const{
    return day;
}
void Course::setCourseDay(std::string d){
    day.assign(d);
}

float Course::getStartTime() const{
    return startTime;
}
void Course::setStartTime(float s){
    startTime = s;
}

float Course::getEndTime() const{
    return endTime;
}
void Course::setEndTime(float e){
    endTime = e;
}

int Course::getCurrentStudents() const{
    return studentCount;
}

int Course::getMaxStudents() const{
    return maxStudents;
}

void Course::setMaxStudents(int m){
    // This function only sets max and allocates a new
    // array iff the original object is in the safe state
    if(!studentList){
        maxStudents = m;
        studentList = new std::string[maxStudents]; 
    }
}

std::string* Course::getStudentList() const{
    return studentList;
}

bool Course::addStudentToArray(std::string studentName){
    bool success = false;
    if(studentCount != maxStudents){
        studentList[studentCount].assign(studentName);
        studentCount++;
        success = true;
    }
    return success;
}

// Fill this out and play around with objects!
int main(){
    return 0;
}