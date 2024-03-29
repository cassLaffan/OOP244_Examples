#ifndef LAB_H
#define LAB_H

#include <iostream>

// Today, let's play around with templates. First, let's write a template
// class which can make a "dynamic" array at runtime. Let's see if it works!
// Then, let's write a few template functions which play around with multiple
// types and brainstorm ways to use them.

template<class T>
class Person{
    T name;
public:
    T getName() const{
        return name;
    }

    void setName(T aName){
        name = aName;
    }

};

template <typename T, typename E>
void aPrintFunction(T argA, E argB){
    std::cout << "Our first argument is: " << argA << std::endl;
    std::cout << "Our second argument is: " << argB << std::endl;
}

template<typename T, typename E>
void swap(T& a, E& b) {
    T c;
    c = a;
    a = b;
    b = c;
}

#endif