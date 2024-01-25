#ifndef CAKE_H
#define CAKE_H
/*
* In this lab, we are going to create a cake class. It will have
* the following member variables: flavour, colour, tiers, weight
* and baker name.
*
* We are also going to write its getters, setters, constructors. Finally,
* we are going to overload the following operators: ==, >=, <=, and =
*/

#include "iostream"

class Cake{
    std::string flavour;
    std::string colour;
    int tiers;
    float weight;
    std::string bakerName;
public:
    Cake();
    Cake(std::string, std::string, int, float, std::string);

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

    // Operators: ==, >=, <=, and =

    bool operator==(Cake&) const;
    bool operator==(float&) const;

    bool operator>=(Cake&) const;
    bool operator<=(Cake&) const;

    Cake& operator=(Cake&);
};



#endif