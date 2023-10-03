#include "Reference_Example.h"

// Here, we will swap values in memory using pointers
// These pointers are local variables to the function which
// contain addresses pointing to somewhere in memory
void swapPointers(char* a, char* b){
    char c;
    // Remember, adding * in front of existing pointers dereferences them
    c = *a;
    *a = *b;
    *b = c;
}

// Next, we will instead swap with references (aliases).
// These are values, their memory and all, handed to the function when called
void swapReferences(char& a, char& b){
    char c;
    // Notice how we don't need the * here? That's because we already have the values
    c = a;
    a = b;
    b = c;
}

// Again, main should always go in its own file but this
// is just for demonstration purposes
int main(){
    char one = 'B', two = 'r';

    std::cout << "Before we swap, value one is: " << one << std::endl;
    std::cout << "Before we swap, value two is: " << two << std::endl;

    // Notice how we still need the & to get the memory address for an existing variable?
    swapPointers(&one, &two);

    std::cout << "After our first swap, value one is: " << one << std::endl;
    std::cout << "After our first swap, value two is: " << two << std::endl;

    // Now, note how when we declared our function pass-by-reference, we don't
    // need the &
    swapReferences(one, two);
    std::cout << "After our second swap, value one is: " << one << std::endl;
    std::cout << "After our second swap, value two is: " << two << std::endl;

    return 0;
}