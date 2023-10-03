#ifndef CLASS_ONE_H
#define CLASS_ONE_H

// Needed for printing with the funky cout!
#include "iostream"

/*
* Let's define a class called student!
* This file is really just for syntax reference; we can
* look at it while trying to define our own class in the lab
* on Friday!
*/

class Student {
    int studentNumber;
    std::string studentName; // owo what's this
// public?? What does this mean?! Why ios it indented like this?
// In C++ convention, functions are publically available but
// class data members are generally private. Makes for secure code!
public: 
    // This function is necessary in all classes in C++
    // What is it? It's called a constructor! It is the blueprint for
    // creating an instance of an object. C++ classes always need these!
    // The arguments should be either nothing (for an empty object) or
    // its members!
    Student(int, std::string);

    int getStudentNumber();
    void setStudentNumber(int);

    std::string getStudentName();
    void setStudentName(std::string);

    // Let's also add a print function so that we can see
    // cout in action. We will eventually revisit this
    // once we get to overloading operators in our class!
    void printStudent();
};

#endif