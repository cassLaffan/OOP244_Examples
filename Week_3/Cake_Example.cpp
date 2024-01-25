#include "Cake_Example.h"

// Safe emtpy state
Cake::Cake(){
    this->flavour.assign("");
    this->colour.assign("");
    this->tiers = -1;
    this->weight = -1.0;
    this->bakerName.assign("");
}

// A demonstration of "this"
Cake::Cake(std::string flavour, std::string colour, int tiers, 
    float weight, std::string bakerName){
    this->flavour.assign(flavour);
    this->colour.assign(colour);
    this->tiers = tiers;
    this->weight = weight;
    this->bakerName.assign(bakerName);
}

std::string Cake::getFlavour() const{
    return this->flavour;
}

void Cake::setFlavour(std::string flavour){
    this->flavour.assign(flavour);
}

std::string Cake::getColour() const{
    return this->colour;
}

void Cake::setColour(std::string colour){
    this->colour.assign(colour);
}

int Cake::getTiers() const{
    return this->tiers;
}

void Cake::setTiers(int tiers){
    this->tiers = tiers;
}

float Cake::getWeight() const{
    return this->weight;
}
void Cake::setWeight(float weight){
    this->weight = weight;
}

std::string Cake::getBaker() const{
    return this->bakerName;
}

void Cake::setBaker(std::string name){
    this->bakerName.assign(name);
}

// Will only return true iff all values are equivalent
bool Cake::operator==(Cake& other) const{
    return (this->flavour == other.getFlavour()) &&
        (this->colour == other.getColour()) &&
        (this->tiers == other.getTiers()) &&
        ((int)this->weight == (int)other.getWeight()) &&
        (this->bakerName == other.getBaker());
}

// Overloaded operator
bool Cake::operator==(float& w) const{
    return (int)this->weight == (int)w;
}

// Why
bool Cake::operator>=(Cake& other) const{
    return (this->flavour >= other.getFlavour()) &&
        (this->colour >= other.getColour()) &&
        (this->tiers >= other.getTiers()) &&
        (this->weight >= other.getWeight()) &&
        (this->bakerName >= other.getBaker());
}

bool Cake::operator<=(Cake& other) const{
    return (this->flavour <= other.getFlavour()) &&
        (this->colour <= other.getColour()) &&
        (this->tiers <= other.getTiers()) &&
        (this->weight <= other.getWeight()) &&
        (this->bakerName <= other.getBaker());
}

Cake& Cake::operator=(Cake& other){
    flavour.assign(other.getFlavour());
    colour.assign(other.getColour());
    tiers = other.getTiers();
    weight = other.getWeight();
    bakerName.assign(other.getBaker());
    return *this; // Return the current object
}

int main(){
    Cake cakeOne("Vanilla", "White", 2, 5, "Cassandra");

    std::cout << cakeOne.getBaker() << std::endl;

    Cake cakeTwo;

    std::cout << cakeTwo.getWeight() << std::endl;

    std::cout << (cakeTwo <= cakeOne) << std::endl;

    cakeTwo = cakeOne;
    
    std::cout << cakeTwo.getWeight() << std::endl;

    std::cout << (cakeTwo == cakeOne) << std::endl;

    return 0;
}