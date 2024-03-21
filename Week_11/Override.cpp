#include <iostream>

// This is just a burner file indicating how we might
// use the override keyword

class Base {
public:
    virtual void print() const {
        std::cout << "Base::print()" << std::endl;
    }
};

class Derived : public Base {
public:
    // Correct usage with the override keyword
    void print() const override {
        std::cout << "Derived::print()" << std::endl;
    }
};

int main() {
    Derived d;
    Base& b = d;
    b.print(); // This will call Derived::print()
    return 0;
}

