#ifndef CAKE_H
#define CAKE_H

#include <iostream>
#include <string>
/*
* In this lab, we are going to create a cake class. It will have
* the following member variables: flavour, colour, tiers, weight
* and baker name.
*
* We are also going to write its getters, setters, constructors. Finally,
* we are going to overload the following operators: ==, >=, <=, and =
*/

class Cake{
    int cakeID;
    std::string flavour;
    std::string colour;
    int tiers;
    float weight;
    std::string baker;
public:
    // assistant builder function
    void assistantBuilder(int, std::string, std::string, int, float, std::string);

    // Constructors
    Cake(); // Empty constructor
    Cake(int, std::string, std::string, int, float, std::string);

    int getID() const;
    void setID(int);

    std::string getFlavour() const;
    void setFlavour(std::string);

    std::string getColour() const;
    void setColour(std::string);

    int getTiers() const;
    void setTiers(int);

    float getWeight() const;
    void setWeight(float);

    std::string getBaker() const;
    void setBaker(std::string);

    // operators ==, >=, <=, and =

    bool operator==(Cake&) const;
    bool operator>=(Cake&) const;
    bool operator<=(Cake&) const;

    Cake& operator=(Cake&);
};

#endif