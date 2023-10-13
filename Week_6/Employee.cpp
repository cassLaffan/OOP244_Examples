#include "Employee.h"

Employee::Employee() : Person(){
    empID = -1;
    maxDeps = -1;
    currentDeps = 0;
    deps = nullptr;
}

Employee::Employee(long int id, int max, std::string n, long int sin, time_t date) :
 Person(n, sin, date){
    empID = id;
    // Asking is max is a valid size for the array, otherwise set it to default
    maxDeps = (max >= 0) ? max : -1;
    currentDeps = 0;
    // Asking if max is valid relative to current, if it is create a new
    // dynamic array, otherwise set it to safe nullptr
    deps = (max >= currentDeps) ? new Person[max] : nullptr;
}

Employee::Employee(Employee& other){
    *this = Employee(other.getID(), other.getMax(), other.getName(), other.getSIN(),
        other.getDOB());
    
    // Sets our built in iterator and then increments on it, but only if
    // it's safe.
    currentDeps = 0;
    for(currentDeps; currentDeps <= other.getCurrent() && deps != nullptr; currentDeps++){
        deps[currentDeps] = other.deps[currentDeps];
    }
}

Employee::~Employee(){
    // Note: if Person had dynamic memory or you had an array of Person pointers
    // you would need this forloop to deallocate that memory too
    /*for(int i = 0; i <= currentDeps; i++){
        delete [] deps[i];
    }
    */

   delete [] deps;
   deps = nullptr; // Not strictly necessary, but best practice
}

long int Employee::getID() const{
    return empID;
}

int Employee::getMax() const{
    return maxDeps;
}

int Employee::getCurrent() const{
    return currentDeps;
}

Person* Employee::getDeps() const{
    return deps;
}

void Employee::setID(long int id){
    empID = id;
}

void Employee::setMax(int m){
    if(m > 0){
        maxDeps = m;
        deps = new Person[maxDeps];
    }
}

bool Employee::addChildToArray(Person& child){
    deps[currentDeps] = child;
    currentDeps++;
}