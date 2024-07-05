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

// Base class
class Animal{
protected:
    int ID;
    int age;
    std::string colour;
    float weight;
    float height;
public:
    void buildHelper(int, int, std::string, float, float);

    Animal();
    Animal(int, int, std::string, float, float);
    Animal(Animal&);

    int getID() const;
    int getAge() const;
    std::string getColour() const;
    float getWeight() const;
    float getHeight() const;

    void setID(int);
    void setAge(int);
    void setColour(std::string);
    void setWeight(float);
    void setHeight(float);

    // Animal will make this many noises
    virtual void makeNoise(int) const;
};

// Derived class
class Cat : public Animal{
    std::string breed;
    std::string pattern;
public:
    Cat();
    Cat(int, int, std::string, float, float, std::string, std::string);
    Cat(Cat&);

    // No destructor here!

    std::string getBreed() const;
    std::string getPattern() const;

    void setBreed(std::string);
    void setPattern(std::string);

    void makeNoise(int) const override;

    friend std::ostream& display(Cat&, std::ostream&); // Do we need a Cat object as an arg?
};

#endif