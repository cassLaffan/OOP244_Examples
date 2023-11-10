#include "Drink.h"

bool Consumable::getCooked() const{
    return shouldBeCooked;
}

void Consumable::setCooked(bool c){
    shouldBeCooked = c;
}

Drink::Drink(){
    drinkID = -1;
    drinkName.assign("");
    size = -1;
    flavour.assign("");
}

Drink::Drink(int id, std::string name, int size, std::string flav){
    drinkID = id;
    drinkName.assign(name);
    this->size = size;
    flavour.assign(flav);
}

int Drink::getID() const{
    return drinkID;
}

std::string Drink::getName() const{
    return drinkName;
}

int Drink::getSize() const{
    return size;
}

std::string Drink::getFlavour() const{
    return flavour;
}

void Drink::setID(int id){
    drinkID = id;
}

void Drink::setName(std::string name){
    drinkName.assign(name);
}

void Drink::setSize(int size){
    this->size = size;
}
