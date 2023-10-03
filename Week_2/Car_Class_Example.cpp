#include "Car_Class_Example.h"

Car::Car(){
    // Remember, default constructors create empty objects
    modelNum = -1;
    carName.assign(""); 
    isElectric = false;
    currentOwners = 0;
    maxOwners = 10; // A nice default value to work with, though I'm sure the car would be completey unusable after 5
    // Here's where things get *dynamic*. We will dynamicaly allocate
    // and array for the owner names using the new keyword. New tells 
    // the OS we need memory during runtime!
    owners = new std::string[maxOwners];
}

Car::Car(int ID, std::string name, bool electric = false, int max = 10){
    modelNum = ID;
    carName.assign(name); 
    isElectric = electric;
    maxOwners = max;
    currentOwners = 0;
    owners = new std::string[maxOwners];
}

// Destructors are another class function which destroys an object
// When you have dynamic memory in your class, you MUST have one of these.
// Even without it, still best practice!
Car::~Car(){
    // Whenever you use the new keyword somewhere in your program,
    // there has to be a delete to go with it. Deleting something 
    // releases it back to the operating system so you don't get memory leaks
    delete owners;
}

int Car::getModelNum(){
    return modelNum;
}

void Car::setModelNum(int num){
    modelNum = num;
}

std::string Car::getCarName(){
    return carName;
}

void Car::setCarName(std::string name){
    carName.assign(name);
}

bool Car::getIsElectric(){
    return isElectric;
}

void Car::setIsElectric(bool isIt = false){
    isElectric = isIt;
}

int Car::getMaxOwners(){
    return maxOwners;
}

void Car::setMaxOwners(int maximum){
    maxOwners = maximum;
}

int Car::getCurrentOwners(){
    return currentOwners;
}

std::string* Car::getOwnerList(){
    return owners;
}

void Car::addOwnerToList(std::string name){
    if(currentOwners != maxOwners){
        owners[currentOwners].assign(name);
        currentOwners++;
    }
}

void Car::deleteOwnerFromList(std::string name){
    // We will search the array for this name and if they're the same
    // remove them from the array. Otherwise, we will do nothing.
    for(int i = 0; i <= currentOwners; i++){
        // fun fact, == works with strings in this language
        if(owners[i] == name && i != currentOwners){
            for(int j = i; j < currentOwners; j++){
                owners[i].assign(owners[i + 1]);
            }
            owners[currentOwners].assign("");
            currentOwners--;
        }
        else if(owners[i] == name && i == currentOwners){
            owners[currentOwners].assign("");
            currentOwners--;
        }
    }
}

int main(){
    //Pay around with the functions in our car class as practice for tomorrow!
    return 0;
}