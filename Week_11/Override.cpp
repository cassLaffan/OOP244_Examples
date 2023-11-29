#include <iostream>

// This is just a burner file indicating how we might
// use the override keyword

class Base {
public:
    virtual void display() const;
};

class Derived : public Base {
public:
    void display() const override;
};

