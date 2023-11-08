#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

// This is one of our derived classes! A square is a shape, right?
// and it has specific behaviours unlike our generic shape class.
class Square : public Shape{
    float height;
    float width;
public:
    Square();
    Square(float, float);

    // Notice that I added these functions but also ensured I took
    // out the virtual keyword? This allows us to actually implement
    // these functions.
    float parameter() const;
    float area() const;

};

#endif