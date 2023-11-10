#include "Square.h"
#include "Circle.h"

int main(){
    // Try uncommenting this line! You won't be able to compile
    //Shape A;

    Square B;
    Square C(6.3, 5.3);

    // A chameleon of an object!
    Square* maybeASquare = nullptr;

    // Cursed
    Shape* maybeAShape = nullptr;

    Circle D;

    Circle E(2.1);

    std::cout << "The parameter for square B is: " << B.parameter() << std::endl;
    std::cout << "The parameter for square C is: " << C.parameter() << std::endl;

    std::cout << "The parameter for circle D is: " << D.parameter() << std::endl;
    std::cout << "The parameter for circle E is: " << E.parameter() << std::endl;

    return 0;
}