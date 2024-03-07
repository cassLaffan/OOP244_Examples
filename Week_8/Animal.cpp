#include "Animal.h"

Animal::Animal(){
    animalID = -1;
    colour.assign("");
}

Animal::Animal(int id, std::string col){
    animalID = id;
    colour.assign(col);
}

Animal::Animal(Animal& other) :
    Animal(other.getID(), other.getColour()){}

int Animal::getID() const{
    return animalID;
}

void Animal::setID(int id){
    animalID = id;
}

std::string Animal::getColour() const{
    return colour;
}

void Animal::setColour(std::string col){
    colour.assign(col);
}

std::ostream& Animal::display(std::ostream& os){
    os << "ID: " << animalID << std::endl;
    os << "Colour: " << colour << std::endl;
    return os;
}

Cat::Cat() : Animal(){
    breed.assign("");
}

Cat::Cat(std::string br, int id, std::string col) :
    Animal(id, col){
        breed.assign(br);
}

Cat::Cat(Cat& other) : Animal(other.getID(), other.getBreed()){
    breed.assign(other.getBreed());
}

std::string Cat::getBreed() const{
    return breed;
}

void Cat::setBreed(std::string br){
    breed.assign(br);
}

std::ostream& Cat::display(std::ostream& os){
    os << "This cat is a " << breed << " and has the colour "
        << this->getColour() << std::endl;
    return os;
}

void makeMeow(Cat aCat, int num){
    std::cout << aCat.breed << " goes meow: " << std::endl;
    for(int i = 0; i < num; i++){
        std::cout << "Meow" << std::endl;
    }
}

int main(){
    Cat catOne("Russian blue", 923, "Grey");
    Cat catTwo();
    Cat catThree("Stand Issur Cat", 45, "Brown");

    return 0;
}