#include "Animal.h"

void Animal::buildHelper(int i, int a, std::string c, float w, float h){
    ID = i;
    age = a;
    colour.assign(c);
    weight = w;
    height = h;
}

Animal::Animal(){
    buildHelper(-1, -1, "", -1.0, -1.0);
}

Animal::Animal(int i, int a, std::string c, float w, float h){
    buildHelper(i, a, c, w, h);
}

Animal::Animal(Animal& other){
    buildHelper(other.getID(), other.getAge(), other.getColour(), 
        other.getWeight(), other.getHeight());
}

int Animal::getID() const{
    return ID;
}

int Animal::getAge() const{
    return age;
}
std::string Animal::getColour() const{
    return colour;
}

float Animal::getWeight() const{
    return weight;
}

float Animal::getHeight() const{
    return height;
}

void Animal::setID(int id){
    ID = id;
}

void Animal::setAge(int a){
    age = a;
}

void Animal::setColour(std::string col){
    colour.assign(col);
}

void Animal::setWeight(float we){
    weight = we;
}

void Animal::setHeight(float he){
    height = he;
}

void Animal::makeNoise(int numTimes) const{
    // Numtimes disregarded
    std::cout << "AAAAAAAA!" << std::endl;
}

Cat::Cat() : Animal(){
    breed.assign("");
    pattern.assign("");
}

Cat::Cat(int i, int a, std::string c, float w, float h, std::string b, std::string p) :
    Animal(i, a, c, w, h){
    breed.assign(b);
    pattern.assign(p);
}

Cat::Cat(Cat& other) : Animal(other){
    breed.assign(other.getBreed());
    pattern.assign(other.getPattern());
}

std::string Cat::getBreed() const{
    return breed;
}

std::string Cat::getPattern() const{
    return pattern;
}

void Cat::setBreed(std::string br){
    breed.assign(br);
}

void Cat::setPattern(std::string pat){
    pattern.assign(pat);
}

void Cat::makeNoise(int numNoises) const{
    for(int i = 0; i < numNoises; i++){
        std::cout << "Meow!" << std::endl;
    }
}

std::ostream& display(Cat& aCat, std::ostream& os){
    os << "This cat is:" << std::endl;
    os << aCat.colour << std::endl;
    os << aCat.breed << std::endl;
    os << aCat.pattern << std::endl;

    return os;
}

int main(){
    Animal aAnimal(100, 10, "Yellow", 100.9, 10.8);
    Cat aCat(101, 16, "Brown", 16.6, 1, "Tabby", "Striped?");

    Animal* someAnimal = new Cat(102, 15, "Grey", 20, 1.2, "Tabby", "Grey with white belly");

    someAnimal->makeNoise(10);
    aAnimal.makeNoise(5);
    
    delete someAnimal;
    // TODO: Implement Dog Class
    // someAnimal = new Dog;

    return 0;
}