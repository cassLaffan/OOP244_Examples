#include "Square.h"

int main(){
    // Try uncommenting this line! You won't be able to compile
    //Shape A;

    Square B;
    Square C(6.3, 5.3);

    // A chameleon of an object!
    Square* maybeASquare = nullptr;

    // Cursed
    Shape* maybeAShape = nullptr;

    std::cout << "The parameter for square B is: " << B.parameter() << std::endl;
    std::cout << "The parameter for square C is: " << C.parameter() << std::endl;

    return 0;
}