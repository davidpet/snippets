#include <iostream>

// Base class
class Base {
public:
    virtual Base* clone() const {
        std::cout << "Cloning Base\n";
        return new Base(*this);
    }
};

// Derived class
class Derived : public Base {
public:
    // Overriding the clone method with a covariant return type
    Derived* clone() const override {
        std::cout << "Cloning Derived\n";
        return new Derived(*this);
    }
};

int main() {
    Base* b = new Base();
    Base* b_clone = b->clone(); // Cloning Base

    Derived* d = new Derived();
    Derived* d_clone = d->clone(); // Cloning Derived

    delete b;
    delete b_clone;
    delete d;
    delete d_clone;

    return 0;
}