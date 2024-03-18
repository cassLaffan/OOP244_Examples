#include "Square.h"

Square::Square(){
    width = 0.0;
    height = 0.0;
}

Square::Square(float w, float h){
    width = w;
    height = h;
}

// Now we have concrete implementations of these!
float Square::parameter() const{
    return (width * 2) + (height * 2);
}

float Square::area() const{
    return width * height;
}