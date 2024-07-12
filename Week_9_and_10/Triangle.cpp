/*
Useful for later:
angleA = (180/3.14) * asin(this->A/this->C);
angleB = 90 - angleA;
*/

#include "Triangle.h"

Triangle::Triangle(){
    sideA = 0;
    sideB = 0;
    sideC = 0;
}

Triangle::Triangle(float a, float b){
    sideA = a;
    sideB = b;
    // Square root and to-the-power-of functions, feel free to use
    sideC = sqrt(pow(a, 2) + pow(b, 2));
}

Triangle::Triangle(Triangle& other){
    sideA = other.getA();
    sideB = other.getB();
    sideC = other.getC();
}

float Triangle::getA() const{
    return sideA;
}

float Triangle::getB() const{
    return sideB;
}
float Triangle::getC() const{
    return sideC;
}

void Triangle::setA(float a){
    sideA = a;
    sideC = sqrt(pow(sideA, 2) + pow(sideB, 2));
}

void Triangle::setB(float b){
    sideB = b;
    sideC = sqrt(pow(sideA, 2) + pow(sideB, 2));
}

float Triangle::parameter() const{
    return sideA + sideB + sideC;
}

float Triangle::area() const{
    return (sideA * sideB) / 2;
}