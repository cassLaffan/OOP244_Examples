/*
* Create a class for a Buoquet of flower objects from the other examples
* in this week's folder! This class should have an ID, a colour scheme,
* and a dynamic array of Flower objects.

* This time, ensure you use explicit pointers to the current object.
* Furthermore, overload the = opperator. 
*/

#ifndef BOUQUET_H
#define BOUQUET_H

#include "Current_Object_Example.h"

class Bouquet{
    int bouqID;
    std::string colourScheme;
    int flowerArraySize; // necessary for assigning memory
    int currentFlower;
    Flower* flowerArray;
public:
    Bouquet();
    Bouquet(int, std::string, int);
    Bouquet(Bouquet&); // reference to another Bouquet object

    ~Bouquet(); // necessary because of dynamic memory

    // Getters (constant today)

    int getBouqID() const;
    std::string getColourScheme() const;
    int getMaxFlowers() const;
    Flower* getFlowerArray() const;

    // Setters

    void setBouqID(int);
    void setColourScheme(std::string);
    void setMaxFlowers(int);
    // returns a bool of whether or not this is successful
    bool addFlowerToArray(Flower&);
    
    // Operator overloading
    Bouquet& operator=(Bouquet&);
};

#endif