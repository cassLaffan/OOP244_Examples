#ifndef CLASS_H
#define CLASS_H

#include <iostream>

/*
* Here we are going to create a Course (ha) class! The Course will have a day,
* time, location, professor and a dynamic student list.
*/

class Course{
    std::string courseCode;
    std::string courseName;
    std::string profName;
    std::string day;
    float startTime;
    float endTime;
    int studentCount;
    int maxStudents;
    std::string* studentList; // dynamic student array
public:
    Course();
    Course(std::string, std::string, std::string, std::string,
        float, float, int);
    
    ~Course(); // Destructor

    std::string getCourseCode() const;
    void setCourseCode(std::string);

    std::string getCourseName() const;
    void setCourseName(std::string);

    std::string getProfName() const;
    void setProfName(std::string);

    std::string getCourseDay() const;
    void setCourseDay(std::string);

    float getStartTime() const;
    void setStartTime(float);

    float getEndTime() const;
    void setEndTime(float);

    int getCurrentStudents() const;

    int getMaxStudents() const;
    void setMaxStudents(int);

    std::string* getStudentList() const;
    bool addStudentToArray(std::string);
};




#endif