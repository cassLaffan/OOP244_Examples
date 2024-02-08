#include "Bouquet_Lab_Example.h"

void Bouquet::setMembers(const Bouquet& other){
    bouqID = other.getBouqID();
    colourScheme.assign(other.getColourScheme());
    flowerArraySize = other.getMaxFlowers();
    currentFlower = 0;

    if(other.getFlowerArray()){ // if this array isn't a nullptr
        flowerArray = new Flower[flowerArraySize];
        for(currentFlower; currentFlower <= other.currentFlower; currentFlower++){
            flowerArray[currentFlower] = other.getFlowerArray()[currentFlower];
            // Todo: give flower class an assignment operator
        }
    }
    else{
        flowerArray = nullptr;
    }
}

void Bouquet::constructorHelper(int id, std::string colour, int size){
    bouqID = id;
    colourScheme.assign(colour);
    flowerArraySize = size;
    currentFlower = 0;
    flowerArray = (size == -1) ? nullptr : new Flower[flowerArraySize];
}

Bouquet::Bouquet(){
    this->constructorHelper(-1, "", -1);
}

Bouquet::Bouquet(int id, std::string colour, int size){
    this->constructorHelper(id, colour, size);
}

Bouquet::Bouquet(const Bouquet& other){
    this->setMembers(other);
}

Bouquet::~Bouquet(){
    delete[] flowerArray;
    flowerArray = nullptr;
    currentFlower = 0; // extra safe
}

int Bouquet::getBouqID() const{
    return bouqID;
}

std::string Bouquet::getColourScheme() const{
    return colourScheme;
}

int Bouquet::getMaxFlowers() const{
    return flowerArraySize;
}

Flower* Bouquet::getFlowerArray() const{
    return flowerArray;
}

void Bouquet::setBouqID(int id){
    bouqID = id;
}

void Bouquet::setColourScheme(std::string colour){
    colourScheme = colour;
}

void Bouquet::setMaxFlowers(int max){
    // This if / else if statement is necessary so we don't overwrite
    // an existing array if max is == flowerArraySize
    if(max != flowerArraySize && flowerArray){
        delete[] flowerArray;
        flowerArraySize = max;
        flowerArray = new Flower[flowerArraySize];
    }
    else if(max != flowerArraySize && !flowerArray){
        flowerArraySize = max;
        flowerArray = new Flower[flowerArraySize];
    }
}

bool Bouquet::addFlowerToArray(Flower& newFlower){
    bool success = false;
    if(flowerArray){
        flowerArray[currentFlower] = newFlower; // Add assignment operator to Flower
        currentFlower++;
        success = true;
    }
    return success;
}

Bouquet& Bouquet::operator=(const Bouquet& other){
    this->setMembers(other);
    return *this;
}
