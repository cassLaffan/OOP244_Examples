#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <string>
#include <time.h>

/*
* Here we are going to create a Course (ha) class! 
* The Course will have a name, day, time, location,
* professor and a dynamic student list.
*/

class Course{
    int courseID;
    std::string courseName;
    std::string day;
    int timeSlot; // For simplicity
    std::string location;
    std::string prof;
    std::string* studentList; // Dynamic array
    int maxStudents;
    int currentStudents;
public:
    Course(); // Default Constructor
    Course(int, std::string, std::string, int, std::string, std::string, int);

    // Destructor
    ~Course();

    // Getters and setters
    int getID() const;
    void setID(int);

    std::string getName() const;
    void setName(std::string);

    std::string getDay() const;
    void setDay(std::string);

    int getTime() const;
    void setTime(int);

    std::string getLocation() const;
    void setLocation(std::string);

    std::string getProf() const;
    void setProf(std::string);

    std::string* getStudents() const;
    bool addStudent(std::string); // To add students to the course list

    int getMaxStudents() const;
    bool setMaxStudents(int);

    int getCurrentStudents() const;
};

#endif