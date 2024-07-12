#include "Bouquet_Lab_Example.h"

void Bouquet::assistantBuilder(int id, std::string col, int curr, int max){
    bouqID = id;
    colourScheme.assign(col);
    currentFlowers = curr;
    maxFlowers = max;
}

void Bouquet::assistantCopier(Bouquet& other){
    this->assistantBuilder(other.getID(), other.getColours(), 0, other.getMaxFlowers());
    
    // If the flower array exists, copy its contents of other to self
    // otherwise flowerArray is assigned a nullptr.
    if(other.getFlowers()){
        flowerArray = new Flower[maxFlowers];
        for(currentFlowers = 0; currentFlowers < other.getCurrentFlowers(); currentFlowers++){
            flowerArray[currentFlowers] = other.flowerArray[currentFlowers];
        }
        currentFlowers++;
    }
    else{
        flowerArray = nullptr;
    }
}

Bouquet::Bouquet(){
    // Adding the current object pointer
    // so that it is understood that the 
    // class is invoking the current object's
    // member functions
    this->assistantBuilder(-1, "", 0, -1);
    flowerArray = nullptr;
}

Bouquet::Bouquet(int id, std::string colour, int max){
    this->assistantBuilder(id, colour, 0, max);
    flowerArray = new Flower[maxFlowers];
}

Bouquet::Bouquet(Bouquet& other){
    this->assistantCopier(other);
}

Bouquet::~Bouquet(){
    delete [] flowerArray;
    flowerArray = nullptr;
    currentFlowers = 0;
    maxFlowers = -1;
}

int Bouquet::getID() const{
    return bouqID;
}

void Bouquet::setID(int id){
    bouqID = id;
}

std::string Bouquet::getColours() const{
    return colourScheme;
}

void Bouquet::setColourScheme(std::string col){
    colourScheme.assign(col);
}

int Bouquet::getCurrentFlowers() const{
    return currentFlowers;
}

int Bouquet::getMaxFlowers() const{
    return maxFlowers;
}

/*
* Will "resize" (as in allocate a new array and pointer) for our
* array. If it's smaller, then the array will only copy up to "max"
*/
void Bouquet::setMaxFlowers(int max){
    // "Resizing" the array if max and array are already set
    if(flowerArray){
        maxFlowers = max;
        Flower* temp = new Flower[max];
        for(int i = 0; i < currentFlowers && i <= max; i++){
            temp[i] = flowerArray[i];
        }
        delete flowerArray;
        flowerArray = temp;
        temp = nullptr; // That way when temp goes out of scope, nothing bad happens
    }
    // Otherwise, allocate new memory
    else{
        maxFlowers = max;
        flowerArray = new Flower[maxFlowers];
    }
}

Flower* Bouquet::getFlowers() const{
    return flowerArray;
}

bool Bouquet::addFlower(Flower& newFlower){
    bool success = false;

    if(currentFlowers != maxFlowers){
        flowerArray[currentFlowers] = newFlower;
        currentFlowers++;
        success = true;
    }

    return success;
}

Bouquet& Bouquet::operator=(Bouquet& other){
    this->assistantCopier(other);
    return *this;
}

int main(){
    // Create several bouquet objects
    // See where this implementation of the class can take you
    // Use the copy constructor, assignment operator, setters, etc.

    // Then, find where my code breaks


    return 0;
}