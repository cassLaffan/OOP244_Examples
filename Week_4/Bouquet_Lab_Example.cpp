#include "Bouquet_Lab_Example.h"

void Bouquet::emptyInit(){
    this->bouqID = -1;
    this->colourScheme.assign("");
    this->flowerArraySize = -1;
    this->currentFlower = -1;
    this->flowerArray = nullptr;
}

// Safe state constructor
Bouquet::Bouquet(){
    this->emptyInit();
}

Bouquet::Bouquet(int ID, std::string colour, int max){
    this->bouqID = ID;
    this->colourScheme.assign(colour);
    this->flowerArraySize = max;
    this->currentFlower = 0;
    this->flowerArray = new Flower[max];
}

void Bouquet::setMembers(Bouquet& other){
    this->bouqID = other.bouqID;
    this->colourScheme.assign(other.colourScheme);
    this->flowerArraySize = other.flowerArraySize;
    this->flowerArray = new Flower[this->flowerArraySize];

    for(int i = 0; i <= other.currentFlower; i++){
        this->flowerArray[i] = Flower(other.flowerArray[i]);
        this->currentFlower++;
    }
}

Bouquet::Bouquet(Bouquet& other){
    // Checking if other is empty
    if(other.bouqID = -1){
        // Calls the empty constructor helper function
        this->emptyInit();
    }
    else{
        // Populates using the setMembers function
        setMembers(other);
    }
}

Bouquet::~Bouquet(){
    delete [] this->flowerArray;
    this->flowerArray = nullptr; // not necessary but good practice
}

int Bouquet::getBouqID() const{
    return this->bouqID;
}
std::string Bouquet::getColourScheme() const{
    return this->colourScheme;
}
int Bouquet::getMaxFlowers() const{
    return this->flowerArraySize;
}

Flower* Bouquet::getFlowerArray() const{
    return this->flowerArray;
}

// Setters

void Bouquet::setBouqID(int ID){
    this->bouqID = ID;
}

void Bouquet::setColourScheme(std::string scheme){
    this->colourScheme.assign(scheme);
}

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
    
    setMembers(other);

    return *this;
}

//int main(){
//   return 0;
//}