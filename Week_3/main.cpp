#include "Cake_Example.h"

int main(){

    Cake A;
    Cake B(1, "Chocolate", "Orange", 17, 400.5, "Cassandra");

    std::cout << A.getFlavour() << std::endl;
    std::cout << B.getFlavour() << std::endl;

    A = B;

    std::cout << A.getFlavour() << std::endl;

    (A == B) ? std::cout << "These two cakes are equal!" : std::cout << "These two cakes are not equal!" ;
    std::cout << std::endl;

    A.setTiers(3);
    A.setWeight(30.0);

    if(A <= B){
        std::cout << "Cake A is smaller!" << std::endl;
    }
    else{
        std::cout << "Cake B is smaller!" << std::endl;
    }

    return 0;
}