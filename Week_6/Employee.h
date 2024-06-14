/* This week, we will write an employee class which inherits from the 
* Person class. They will have an employee ID as well as a dynamic
* array of Person objects called "dependants". We will make constructors,
* destructors and getters/setters. 
*/

#ifndef EMP_H
#define EMP_H

#include "Person.h"

class Employee : public Person{
protected:
    int employeeID;
    int maxDeps;
    int currDeps;
    Person* dependants; // Number of kids the employee has
public:
    void assistantBuilder(int, int, int);

    // Constructors
    Employee();
    Employee(std::string, long int, time_t, int, int);
    Employee(const Employee&);

    // Destructor
    ~Employee();

    int getID() const;
    void setID(int);

    int getMax() const;
    void setMax(int);

    int getCurrentDeps() const;

    Person* getDeps() const;
    bool addDep(Person&);

    void display(std::ostream&) const;

};

#endif