#ifndef BAKES_H
#define BAKES_H

/*
* Here we wil examine operator overloading for classes!
* 
*/

#include "iostream"
#include "iomanip"      // std::setprecision

class BakedGood{
    std::string pastryName;
    float price;
public:
    // Constructors
    BakedGood();
    BakedGood(std::string, float);

    // Getters and setters
    std::string getPastryName();
    void setPastryName(std::string);

    float getPrice();
    void setPrice(float);

    // Here I'm overoading += as a way to increment the baked good's price!
    // The syntax requires a reference as the return value, then the keyword 
    // operator and whichever operator you're overloading
    BakedGood& operator+=(float);
    BakedGood& operator-=(float);

    // This is a boolean operator overload! This can tell us if our BakedGood is equal to another
    // baked good.
    bool operator==(BakedGood&);

    // Finally, let's overload the ostream (cout) operator so we
    // can call the << operator without needing a seperate print/display function
    std::ostream& operator<<(std::ostream&);

    // We will add one more overloaded operator, the assignment operator
    BakedGood& operator=(BakedGood&);
    
};

#endif