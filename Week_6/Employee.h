/* This week, we will write an employee class which inherits from the 
* Person class. They will have an employee ID as well as a dynamic
* array of Person objects called "dependants". We will make constructors,
* destructors and getters/setters. 
*/

#ifndef EMP_H
#define EMP_H

#include "Person.h"

class Employee : public Person{
    long int empID;
    int maxDeps;
    int currentDeps;
    Person* deps; // dynamic person array
public:
    Employee();
    Employee(long int, int, std::string, long int, time_t);
    Employee(Employee&);
    ~Employee();

    // Getters and setters
    long int getID() const;
    int getMax() const;
    int getCurrent() const;
    Person* getDeps() const;

    void setID(long int);
    void setMax(int);

    bool addChildToArray(Person&);
};

#endif