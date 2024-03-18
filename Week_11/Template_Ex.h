#ifndef TEMP_H
#define TEMP_H

#include <iostream>

/*
* Notice how all the code is in the header file?
* Templates, due to their generic nature, act as kind
* of road maps. Thus, they need to be defined in the header,
* NOT the CPP file. 
*/

template <class T, int N>
class Array {
    T a[N];
public:
    T& operator[](int i){
        return a[i];
    }
};

template<typename T>
void swap(T& a, T& b) {
    T c;
    c = a;
    a = b;
    b = c;
}

#endif

