#ifndef FLOWER_H
#define FLOWER_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#define MAX 5

class Flower{
    int flowerID;
    std::string species;
    std::string genus;
    std::string subFamily;
public:
    Flower();
    Flower(int, std::string, std::string, std::string);
    // Oh ho, a new kind of constructor?? This is a copy constructor!
    // You can create a new object from the contents of an old one.
    Flower(const Flower&);

    // Getters and setters
    int getFlowerID();
    std::string getSpecies();
    std::string getGenus();
    std::string getSubFamily();

    void setFlowerID(int);
    void setSpecies(std::string);
    void setGenus(std::string);
    void setSubFamily(std::string);
};

// Let's do a flower file reading helper function
bool readFlowerFile(std::string, Flower*);

#endif