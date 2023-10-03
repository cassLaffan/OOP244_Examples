#ifndef PET_H
#define PET_H
/*
* In this lab, we are going to create a pet class. It will have
* the following member variables: species, name, colour, age, weight
* and owner name.
*
* We are also going to write its getters, setters, constructors. Finally,
* we are going to overload the following operators: ==, >=, <=, and =
*/

#include "iostream"

class Pet{
    std::string species;
    std::string name;
    int age;
    float weight;
public:
    Pet();
    Pet(std::string, std::string, int, float);

    std::string getSpecies();
    void setSpecies(std::string);
    
    std::string getName();
    void setName(std::string);

    int getAge();
    void setAge(int);

    float getWeight();
    void setWeight(float);

    bool operator==(Pet&);
    bool operator>=(Pet&);
    bool operator<=(Pet&);

    Pet& operator=(Pet&);
};

#endif