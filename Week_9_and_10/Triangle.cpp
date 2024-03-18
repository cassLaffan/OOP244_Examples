#include "Triangle.h"

// Safe state empty constructor
Triangle::Triangle(){
    A = 0.0;
    B = 0.0;
    C = 0.0;
}

Triangle::Triangle(float a, float b){
    A = a;
    B = b;
    C = sqrt(A*A + B*B); // That way we have a safe triangle
}

float Triangle::parameter() const{
    return (A + B + C);
}

float Triangle::area() const{
    return (A * B) / 2;
}
