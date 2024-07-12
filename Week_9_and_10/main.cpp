#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
#include "Shape.h"

int main(){
    // Try uncommenting this line! You won't be able to compile
    // Shape A;

    Square B;
    Square C(6.3, 5.3);
    Circle D;
    Circle E(2.1);
    Triangle F(2.2, 4);

    // A chameleon of an object!
    Shape* maybeAShape = nullptr;

    maybeAShape = new Square(12, 3);
    printArea(*maybeAShape);
    
    std::cout << "The area for the shape that is a square at runtime is: " 
        << maybeAShape->area() << std::endl;

    maybeAShape = new Circle(3.2);
    std::cout << "The area for the shape that is now a circle at runtime is: " 
        << maybeAShape->area() << std::endl;

    maybeAShape = new Triangle(1.3, 3.3);
    std::cout << "The area for the shape that is now a triangle at runtime is: " 
        << maybeAShape->area() << std::endl;

    std::cout << "The parameter for square B is: " << B.parameter() << std::endl;
    std::cout << "The parameter for square C is: " << C.parameter() << std::endl;

    std::cout << "The parameter for circle D is: " << D.parameter() << std::endl;
    std::cout << "The parameter for circle E is: " << E.parameter() << std::endl;

    std::cout << "The parameter for triangle F is: " << F.parameter() << std::endl;

    return 0;
}