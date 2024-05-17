#include "Class_List.h"

// Safe state default constructor
Course::Course(){
    courseID = -1;
    courseName.assign("");
    day.assign("");
    timeSlot = -1;
    location.assign("");
    prof.assign("");
    maxStudents = -1;
    currentStudents = -1;
    studentList = nullptr;
}

Course::Course(int id, std::string name, std::string weekDay, int time,
    std::string loc, std::string teacher, int max){
    courseID = id;
    courseName.assign(name);
    day.assign(weekDay);
    timeSlot = time;
    location.assign(loc);
    prof.assign(teacher);
    maxStudents = max;
    currentStudents = 0;
    studentList = new std::string[maxStudents]; // Dynamically allocated
}

Course::~Course(){
    delete [] studentList; // frees memory back to OS
    studentList = nullptr; // ensures pointer points to a safe place
}

// Getters and setters
int Course::getID() const{
    return courseID;
}

void Course::setID(int id){
    courseID = id;
}

std::string Course::getName() const{
    return courseName;
}

void Course::setName(std::string name){
    courseName.assign(name);
}

std::string Course::getDay() const{
    return day;
}

void Course::setDay(std::string weekDay){
    day.assign(weekDay);
}

int Course::getTime() const{
    return timeSlot;
}

void Course::setTime(int time){
    timeSlot = time;
}

std::string Course::getLocation() const{
    return location;
}

void Course::setLocation(std::string loc){
    location.assign(loc);
}

std::string Course::getProf() const{
    return prof;
}

void Course::setProf(std::string name){
    prof.assign(name);
}

std::string* Course::getStudents() const{
    return studentList;
}

/*
* This function checks if the studentList has been allocated and whether
* or not the studuentList array is full. Will return whether or not
* this function is successful.
*/
bool Course::addStudent(std::string name){
    bool succ = false;

    if(studentList && currentStudents < maxStudents && currentStudents != -1){
        studentList[currentStudents].assign(name);
        currentStudents++;
        succ = true;
    }

    return succ;
}

int Course::getCurrentStudents() const{
    return currentStudents;
}

int Course::getMaxStudents() const{
    return maxStudents;
}

bool Course::setMaxStudents(int max){
    bool succ = false;

    if(!studentList && maxStudents == -1){
        maxStudents = max;
        studentList = new std::string[maxStudents];
        currentStudents = 0;
        succ = true;
    }
    // else reallocate, copy and provide success

    return succ;
}


int main(){
    // Create course objects and manipulate them
    return 0;
}
