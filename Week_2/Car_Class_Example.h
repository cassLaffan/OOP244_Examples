#ifndef CAR_H
#define CAR_H

#include "iostream"

class Car {
    int modelNum;
    std::string carName; 
    bool isElectric;
    int maxOwners;
    int currentOwners;
    std::string* owners;
public: 
    // Can't forget our constructors (and a good example of overoading)
    Car();
    Car(int, std::string, bool, int); // note that I only included four args!

    // Oh my! What's this? This is called a destructor (or decosntructor depending
    // on you you ask). When dealing with dynamically allocated memory like we will
    // be using for our owners array, we need to deallocate it and give it
    // back to the operating system (or bad things happen).
    ~Car();

    // getters and setters
    int getModelNum();
    void setModelNum(int);

    std::string getCarName();
    void setCarName(std::string);

    bool getIsElectric();
    void setIsElectric(bool); // We'll set a default for this in the cpp file

    int getMaxOwners();
    void setMaxOwners(int);

    // I am not adding a setter for this because this is automatically incremented
    int getCurrentOwners();

    std::string* getOwnerList();
    // Here's where I'm going to deviate a bit. We don't want to *set*
    // This since it's a growing array. Instead, I'll have two functions that
    // mess with the array.
    void addOwnerToList(std::string);
    void deleteOwnerFromList(std::string);
};

#endif