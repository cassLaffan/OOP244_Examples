#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person{
    float GPA;
    int year;
public:
    Student();
    Student(float, int, std::string, long int, time_t);
    Student(Student&);

    ~Student();
    
    float getGPA() const;
    int getYear() const;

    void setGPA(float);
    void setYear(int);

    void display(std::ostream&) const;
};

#endif
