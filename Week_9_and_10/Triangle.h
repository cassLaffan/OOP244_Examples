#ifndef TRIANGLE_H
#define TRIANGLE_H
#define _USE_MATH_DEFINES

#include "Shape.h"
#include <cmath>

/*
* This week, we'll be creating a derived class from our abstract shape
* class! We will need constructors (including a copy constructor) and 
* implementations of the virtual functions in the Shape class. This class
* gets three variables: side A, B and C!
*/

class Triangle : public Shape{
protected:
    float A;
    float B;
    float C;
public:
    Triangle();
    Triangle(float, float);

    // TODO: Add getter for C

    virtual float area() const = 0;
    virtual float parameter() const = 0;
};

#endif