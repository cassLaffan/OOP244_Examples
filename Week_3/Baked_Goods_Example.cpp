#include "Baked_Goods_Example.h"

BakedGood::BakedGood(){
    // Set to an empty default state
    pastryName.assign("");
    price = -1.0;
}

BakedGood::BakedGood(std::string name, float cost){
    pastryName.assign(name);
    price = cost;
}

std::string BakedGood::getPastryName(){
    return pastryName;
}

void BakedGood::setPastryName(std::string name){
    pastryName.assign(name);
}

float BakedGood::getPrice(){
    return price;
}

void BakedGood::setPrice(float cost){
    price = cost;
}

BakedGood& BakedGood::operator+=(float num){
    price = price + num;
    // Return the current object
    return *this;
}

BakedGood& BakedGood::operator-=(float num){
    price = price - num;
    // Return the current object
    return *this;
}

bool BakedGood::operator==(BakedGood& other){
    return (pastryName == other.pastryName) && (price == other.price);
}

std::ostream& BakedGood::operator<<(std::ostream& stream){
    stream << "Type of pastry: " << pastryName << std::endl;
    stream << "Price: $" << std::setprecision(3) << price << std::endl;
    return stream;
}

BakedGood& BakedGood::operator=(BakedGood& other){
    // Creating the shallow copy
    pastryName.assign(other.pastryName);
    price = other.price;

    // Return the current object
    return *this;
}

// Placeholder main, play around with the above functions!

int main(){
    return 0;
}