#include "Bouquet_Lab_Example.h"

// Safe state constructor
Bouquet::Bouquet(){
    this->bouqID = -1;
    this->colourScheme.assign("");
    this->flowerArraySize = -1;
    this->currentFlower = -1;
    this->flowerArray = nullptr;
}

Bouquet::Bouquet(int ID, std::string colour, int max){
    this->bouqID = ID;
    this->colourScheme.assign(colour);
    this->flowerArraySize = max;
    this->currentFlower = 0;
    this->flowerArray = new Flower[max];
}

Bouquet::Bouquet(Bouquet& other){
    // Consider how to check if other is initialized empty or not
    this->bouqID = other.bouqID;
    this->colourScheme.assign(other.colourScheme);
    this->flowerArraySize = other.flowerArraySize;
    this->flowerArray = new Flower[this->flowerArraySize];

    for(int i = 0; i <= other.currentFlower; i++){
        this->flowerArray[i] = Flower(other.flowerArray[i]);
        this->currentFlower++;
    }
}

Bouquet::~Bouquet(){
    delete [] this->flowerArray;
    this->flowerArray = nullptr; // not necessary but good practice
}

// Getters and setters

void Bouquet::setMaxFlowers(int max){
    if(!this->flowerArray){
        this->flowerArraySize = max;
        this->flowerArray = new Flower[max];
    }
}

bool Bouquet::addFlowerToArray(Flower& aFlower){
    bool succ = false;

    if(this->currentFlower != this->flowerArraySize - 1){
        this->flowerArray[this->currentFlower] = Flower(aFlower);
        this->currentFlower++;  
        succ = true;
    }

    return succ;
}

Bouquet& Bouquet::operator=(Bouquet& other){
    if(this->flowerArraySize != -1){
        this->~Bouquet();
        //delete [] this->flowerArray;
        //this->flowerArray = nullptr;
    }
    // REDUNDANT CODE TODO: MAKE BETTER (abstract into another function)
    this->bouqID = other.bouqID;
    this->colourScheme.assign(other.colourScheme);
    this->flowerArraySize = other.flowerArraySize;
    this->flowerArray = new Flower[this->flowerArraySize];

    for(int i = 0; i <= other.currentFlower; i++){
        this->flowerArray[i] = Flower(other.flowerArray[i]);
        this->currentFlower++;
    }
}