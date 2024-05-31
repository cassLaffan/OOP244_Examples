/*
* Create a class for a Bouquet of flower objects from the other examples
* in this week's folder! This class should have an ID, a colour scheme,
* and a dynamic array of Flower objects.

* This time, ensure you use explicit pointers to the current object.
* Furthermore, overload the = opperator. 
*/

#ifndef BOUQUET_H
#define BOUQUET_H

#include "Flower.h"

class Bouquet{
    int bouqID;
    std::string colourScheme;
    int currentFlowers;
    int maxFlowers;
    Flower* flowerArray;
public:
    void assistantBuilder(int, std::string, int, int);
    void assistantCopier(Bouquet&);

    // Constructors
    Bouquet();
    Bouquet(int, std::string, int);
    Bouquet(Bouquet&);

    // Destructor (or deconstructor)
    ~Bouquet();

    int getID() const;
    void setID(int);

    std::string getColours() const;
    void setColourScheme(std::string);

    int getCurrentFlowers() const;

    int getMaxFlowers() const;
    void setMaxFlowers(int);

    Flower* getFlowers() const;
    bool addFlower(Flower&);

    Bouquet& operator=(Bouquet&);
};

#endif