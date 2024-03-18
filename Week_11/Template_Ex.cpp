#include "Template_Ex.h"

int main(){
    // First, let's test our swap function
    double d = 2.3;
    double c = 4.5;
    swap(d, c);
    //std::cout << "Swapped values are " << d << " and " << c << std::endl;

    // Next, let's test the array template class

    Array<int, 5> a;

    for (int i = 0; i < 5; i++){
        a[i] = i * i;
        std::cout << "Template array value: " << a[i] << std::endl;
    }

    std::cout << std::endl;

    return 0;
}

