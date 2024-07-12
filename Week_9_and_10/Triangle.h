#ifndef TRIANGLE_H
#define TRIANGLE_H
#define _USE_MATH_DEFINES

#include "Shape.h"
#include <cmath>

/*
* This week, we'll be creating a derived class from our abstract shape
* class! We will need constructors (including a copy constructor) and 
* implementations of the virtual functions in the Shape class. This class
* gets three variables: side A, B and C! C is calculated from A and B
*/

class Triangle : public Shape{
    float sideA;
    float sideB;
    float sideC; // Calculated side to the triangle
public:
    Triangle();
    Triangle(float, float);
    Triangle(Triangle&);

    float getA() const;
    float getB() const;
    float getC() const;

    void setA(float);
    void setB(float);

    float parameter() const override;
    float area() const override;
};

#endif