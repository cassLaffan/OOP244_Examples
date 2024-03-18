#include "Circle.h"

Circle::Circle(){
    radius = 0;
}

Circle::Circle(float r){
    radius = r;
}

float Circle::getRadius() const{
    return radius;
}

void Circle::setRadius(float r){
    radius = r;
}

float Circle::parameter() const{
    return 2 * M_PI * radius; // TODO: Figure out why math pi isn't working
}

float Circle::area() const{
    return (M_PI * pow(radius, 2));
}