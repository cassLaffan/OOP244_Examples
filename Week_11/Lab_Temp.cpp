#include "Lab_Temp.h"

int main(){
    Person<int> personA;
    personA.setName(18);

    Person<std::string> personB;
    personB.setName("Cass");

    std::cout << "Number name: " << personA.getName() << std::endl;
    std::cout << "Actual name: " << personB.getName() << std::endl;

    aPrintFunction("Cass", 1994);

    aPrintFunction(3.333, 3.333);

    float exA = 3.14;
    int exB = 1;

    swap(exA, exB);
    
    std::cout << "Swapped values are: " << exA << " and " << exB << std::endl;

    std::string exC = "Cheetos";
    /*
    int exD = 2;

    swap(exC, exD);

    std::cout << "Swapped values are: " << exC << " and " << exD << std::endl;
    */

    char exE = 'a';
    float exF = 9.888;

    swap(exE, exF);

    std::cout << "Swapped values are: " << exE << " and " << exF << std::endl;

    // Undefined behaviour
    // swap(exC, exE);

    // Why
    int a = -0;

    std::cout << a << std::endl;
    std::cout << (bool)a << std::endl;


    return 0;
}