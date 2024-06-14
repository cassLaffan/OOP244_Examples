#include "Employee.h"

void Employee::assistantBuilder(int id, int max, int curr){
    employeeID = id;
    maxDeps = max;
    currDeps = curr;
}

Employee::Employee() : Person(){
    assistantBuilder(-1, -1, 0);
    dependants = nullptr;
}

Employee::Employee(std::string n, long int S, time_t birth, int empID, int max) :
    Person(n, S, birth){
    assistantBuilder(empID, max, 0);
    dependants = new Person[maxDeps];
}

Employee::Employee(const Employee& other) : Person(other){
    assistantBuilder(other.getID(), other.getMax(), 0);
    dependants = (maxDeps <= 0) ? nullptr : new Person[maxDeps];
    for(currDeps = 0; currDeps < other.getCurrentDeps(); currDeps++){
        dependants[currDeps] = other.getDeps()[currDeps];
    }
}

Employee::~Employee(){
    delete [] dependants;
    dependants = nullptr;
    std::cout << "This function does something!" << std::endl;
}

int Employee::getID() const{
    return employeeID;
}

void Employee::setID(int id){
    employeeID = id;
}

int Employee::getMax() const{
    return maxDeps;
}

// If the new max is smaller than the current one
// the new array will be smaller and anything at the end
// will be chopped off.
void Employee::setMax(int max){
    if(max > 0 && max != maxDeps){
        if(!dependants){
            maxDeps = max;
            dependants = new Person[maxDeps];
        }
        else{
            Person* temp = new Person[max];
            int i;
            for(i = 0; i < max || i < currDeps; i++){
                temp[i] = dependants[i];
            }
            currDeps = i;
            // Reassigning pointer to point at temp, not the original
            // dependants array.
            dependants = temp;
        }
    }
}

int Employee::getCurrentDeps() const{
    return currDeps;
}

Person* Employee::getDeps() const{
    return dependants;
}

bool Employee::addDep(Person& per){
    bool succ = false;

    if(dependants && currDeps < maxDeps){
        dependants[currDeps] = per;
        currDeps++;
        succ = true;
    }

    return succ;
}

void Employee::display(std::ostream& os) const{
    Person::display(os); // Calling parent function first

    os << "Employee ID: " << employeeID << std::endl;
    os << "Dependants: " << std::endl;

    for(int i = 0; i < currDeps; i++){
        dependants[i].display(os);
    }
}

int main(){
    Person A("Tavis", 10294822, 492939);
    Person B("Cassandra", 3888123, 472939);

    Employee C("Susan", 48843587, 38239484893, 1009323, 3);

    C.addDep(A);
    C.addDep(B);

    C.display(std::cout);

    Employee D(C);
    D.setName("Craig");

    D.display(std::cout);

    return 0;
}
