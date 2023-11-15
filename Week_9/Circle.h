/*
* This week, we'll be creating a derived class from our abstract shape
* class! We will need constructors (including a copy constructor) and 
* implementations of the virtual functions in the Shape class. This class
* only gets one member variable, and that's radius!
*/

#ifndef CIRCLE_H
#define CIRCLE_H
#define _USE_MATH_DEFINES

#include "Shape.h"
#include <cmath>

class Circle : public Shape{
    float radius;
public:
    Circle();
    Circle(float);

    float getRadius() const;
    void setRadius(float);

    float parameter() const;
    float area() const;
};

#endif