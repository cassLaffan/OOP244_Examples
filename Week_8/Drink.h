#ifndef DRINK_H
#define DRINK_H

#include <iostream>

class Consumable{
    bool shouldBeCooked;
public:
    bool getCooked() const;
    void setCooked(bool);
};

class Drink{
    int drinkID;
    std::string drinkName;
    int size;
    std::string flavour;
    friend Consumable;
    friend void setFlavour(Drink& aDrink, std::string st){
        aDrink.flavour.assign(st);
    }
public:
    Drink();
    Drink(int, std::string, int, std::string);

    int getID() const;
    std::string getName() const;
    int getSize() const;
    std::string getFlavour() const;

    void setID(int);
    void setName(std::string);
    void setSize(int);
};

#endif