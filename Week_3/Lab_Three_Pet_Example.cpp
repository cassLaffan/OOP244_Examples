#include "Lab_Three_Pet_Example.h"

Pet::Pet(){
    // Safe state! Super important
    species.assign("");
    name.assign("");
    age = -1;
    weight = -1.0;
}
Pet::Pet(std::string s, std::string n, int a, float w){
    species.assign(s);
    name.assign(n);
    age = a;
    weight = w; 
}

std::string Pet::getSpecies(){
    // "this" is implied in internal member functions
    return species;
}
void Pet::setSpecies(std::string s){
    species.assign(s);
}

std::string Pet::getName(){
    return name;
}
void Pet::setName(std::string n){
    name.assign(n);
}

int Pet::getAge(){
    return age;
}
void Pet::setAge(int a){
    age = a;
}

float Pet::getWeight(){
    return weight;
}
void Pet::setWeight(float w){
    weight = w;
}

bool Pet::operator==(Pet& other){
    return (species == other.species) &&
        (name == other.name) &&
        (age == other.age) &&
        (weight == other.weight);
}

bool Pet::operator>=(Pet& other){
    return age >= other.age;
}

bool Pet::operator<=(Pet& other){
    return age <= other.age;
}

Pet& Pet::operator=(Pet& other){
    species.assign(other.getSpecies());
    name.assign(other.getName());
    age = other.getAge();
    weight = other.getWeight();

    return *this;
}

// lazy person compiler helper
int main(){
    return 0;
}