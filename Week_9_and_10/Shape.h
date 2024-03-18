#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

// Our abstract base class! Notice how there's no actual functionality here?
// There's no cpp file! However, we all know all shapes have a parameter 
// and area.

class Shape{
public:  
    virtual float parameter() const = 0;
    virtual float area() const = 0;
};

void printArea(const Shape&);

#endif