#include "Flower.h"

// Safe state!
Flower::Flower(){
    flowerID = -1;
    species.assign("");
    genus.assign("");
    subFamily.assign("");
}

// Another example (more below) of using the current object expicitly
Flower::Flower(int flowerID, std::string species, std::string genus, std::string subFamily){
    this->flowerID = flowerID;
    this->species.assign(species);
    this->genus.assign(genus);
    this->subFamily.assign(subFamily);
}

Flower::Flower(const Flower& other){
    this->flowerID = other.flowerID;
    this->species.assign(other.species);
    this->genus.assign(other.genus);
    this->subFamily.assign(other.subFamily);
}

// Getters and setters
int Flower::getFlowerID(){
    return this->flowerID; // you can use this whenever you want
}

std::string Flower::getSpecies(){
    return species; // but generally you don't need it
}

std::string Flower::getGenus(){
    return genus;
}

std::string Flower::getSubFamily(){
    return subFamily;
}

// Here, I want to demonstrate how the current object, this, might work
// "this" is always implied, but sometimes you need to be explicit! For
// example, what if your arguments are named the same as your member attributes?
void Flower::setFlowerID(int flowerID){
    this->flowerID = flowerID;
}

void Flower::setSpecies(std::string species){
    this->species.assign(species);
}

void Flower::setGenus(std::string genus){
    this->genus.assign(genus);
}

void Flower::setSubFamily(std::string subFamily){
    this->subFamily.assign(subFamily);
}

// As you can see from the above examples, "this" allows you
// to access the innards of the current object, implicity or explicitly!

// Here, we have a friend function, which helps a class but doesn't belong to it
// It uses less resources!
bool readFlowerFile(std::string fileName, Flower* flowerList){
    bool success = false;
    int i = 0;
    std::string temp = "";
    std::string line;
    std::ifstream flowers(fileName);

    if (flowers.is_open()){
        success = true;
        while(std::getline(flowers, line)){
            // Here, we have s(tring)stream functions, very handy! Including an overloaded
            // getline, which allows us to add a delimeter.
            std::istringstream ss(line);
            std::getline(ss, temp, ',');
            flowerList[i].setFlowerID(stoi(temp));
            std::getline(ss, temp, ',');
            flowerList[i].setSpecies(temp);
            std::getline(ss, temp, ',');
            flowerList[i].setGenus(temp);
            std::getline(ss, temp);
            flowerList[i].setSubFamily(temp);
            i++;
        }
        // Remember to always close your files!
        flowers.close();
    }

    else{
        std::cout << "Unable to open file" << std::endl;
    }

    return success;
}

int main(){
    Flower flowers[MAX] = {Flower()};
    bool output = readFlowerFile("flowers.txt", flowers);

    // Extra task: Can you program this to overload << for our ostream object?
    std::cout << flowers[0].getSpecies() << std::endl;
    std::cout << flowers[1].getSpecies() << std::endl;
    std::cout << flowers[2].getSpecies() << std::endl;

    return 0;
}