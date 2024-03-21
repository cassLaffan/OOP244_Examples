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


