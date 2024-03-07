#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <cstring>

/* Today, we will work on a few concepts. We will make an Animal base
 * class with a few virtual functions. Then, we will make a cat class
 * which has a friend function that displays its data.
 * 
 * Animal won't be a pure abstract base class, we will go over that
 * next week.
 */

class Animal{
    int animalID;
    std::string colour;
public:
    Animal();
    Animal(int, std::string);
    Animal(Animal&);

    int getID() const;
    void setID(int);

    std::string getColour() const;
    void setColour(std::string);

    virtual std::ostream& display(std::ostream&);
};

class Cat : public Animal{
    std::string breed;
public:
    Cat();
    Cat(std::string, int, std::string);
    Cat(Cat&);

    std::string getBreed() const;
    void setBreed(std::string);

    std::ostream& display(std::ostream&);

    friend void makeMeow(Cat, int); // Make the cat meow this many times
};

#endif