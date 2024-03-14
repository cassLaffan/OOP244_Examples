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