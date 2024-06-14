#include "Person.h"

Person::Person(){
    name.assign("");
    SIN = -1;
    DOB = 0;
}

// They need at least a name
Person::Person(std::string n, long int sin = -1, time_t date = 0){
    name.assign(n);
    SIN = sin;
    DOB = date;
}

// Oh ho, some interesting syntax!
Person::Person(const Person& other){
    *this = Person(other.getName(), other.getSIN(), other.getDOB());
}

Person::~Person(){
    std::cout << "This function literally does nothing" << std::endl;
}

std::string Person::getName() const{
    return name;
}

long int Person::getSIN() const{
    return SIN;
}

time_t Person::getDOB() const{
    return DOB;
}

void Person::setName(std::string n){
    name.assign(n);
}

void Person::setSIN(long int sin){
    SIN = sin;
}

void Person::setDOB(time_t date){
    DOB = date;
}

void Person::display(std::ostream& os) const{
    os << "Name: " << name << std::endl;
    os << "SIN " << SIN << std::endl;
    os << "Date of Birth: " << std::to_string(DOB) << std::endl; // We want a good representation of their birthday
}