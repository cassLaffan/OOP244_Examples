#include "Cake_Example.h"

// Eliminates redundancy, is cleaner
void Cake::assistantBuilder(int id = -1, std::string fl = "", std::string cl = "", int tr = -1,
    float wt = -1, std::string name = ""){
    cakeID = id;
    flavour.assign(fl);
    colour.assign(cl);
    tiers = tr;
    weight = wt; 
    baker.assign(name);  
}

Cake::Cake(){
    assistantBuilder();
}

Cake::Cake(int id, std::string fl, std::string cl, int tr,
    float wt, std::string name){
    assistantBuilder(id, fl, cl, tr, wt, name);
}

int Cake::getID() const{
    return cakeID;
}

void Cake::setID(int id){
    cakeID = id;
}

std::string Cake::getFlavour() const{
    return flavour;
}

void Cake::setFlavour(std::string fl){
    flavour.assign(fl);
}

std::string Cake::getColour() const{
    return colour;
}

void Cake::setColour(std::string cl){
    colour.assign(cl);
}

int Cake::getTiers() const{
    return tiers;
}

void Cake::setTiers(int tr){
    tiers = tr;
}

float Cake::getWeight() const{
    return weight;
}
void Cake::setWeight(float wt){
    weight = wt;
}

std::string Cake::getBaker() const{
    return baker;
}

void Cake::setBaker(std::string br){
    baker.assign(br);
}

// operators ==, >=, <=, and =

bool Cake::operator==(Cake& other) const{
    return (cakeID == other.getID()) &&
            (flavour == other.getFlavour()) &&
            (colour == other.getColour()) &&
            (tiers == other.getTiers()) &&
            (weight == other.getWeight()) && 
            (baker == other.getBaker());
}

// What does one cake being greater than the other mean? In real life!
bool Cake::operator>=(Cake& other) const{
    return (tiers >= other.getTiers()) ||
            (weight >= other.getWeight());
}

bool Cake::operator<=(Cake& other) const{
    return (tiers <= other.getTiers()) ||
            (weight <= other.getWeight());
}

Cake& Cake::operator=(Cake& other){
    assistantBuilder(other.getID(), other.getFlavour(), other.getColour(),
        other.getTiers(), other.getWeight(), other.getBaker());

    return *this;
}