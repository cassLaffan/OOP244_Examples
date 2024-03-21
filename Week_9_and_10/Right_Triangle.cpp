#include "Right_Triangle.h"

RightTriangle::RightTriangle() : Triangle(){
    angleA = 0.0;
    angleB = 0.0;
}

RightTriangle::RightTriangle(float a, float b) : Triangle(a, b){
    // Calculating angle A with inverse sine to find the angles
    // then converting to degrees
    angleA = (180/3.14) * asin(this->A/this->C);
    // Subtracting angle A from the 90 degrees to find angle B
    angleB = 90 - angleA;
}

float RightTriangle::getAngleA() const{
    return angleA;
}
float RightTriangle::getAngleB() const{
    return angleB;
}

float RightTriangle::area() const{
    return (A * B) / 2;
}

float RightTriangle::parameter() const{
    return (A + B + C);
}