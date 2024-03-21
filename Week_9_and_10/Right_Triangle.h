#ifndef R_TRIANGLE_H
#define R_TRIANGLE_H

#include "Triangle.h"

class RightTriangle : public Triangle{
    float angleA;
    float angleB;
public: 
    RightTriangle();
    RightTriangle(float, float); // Will use the parent constructor
    
    float getAngleA() const;
    float getAngleB() const;
    // No setters because angles are predetermined

    float area() const override;
    float parameter() const override;
};

#endif