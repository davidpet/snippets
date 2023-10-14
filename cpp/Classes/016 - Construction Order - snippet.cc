Sure, here is a code snippet demonstrating the construction order in C++ classes.

#include <iostream>

// Base class
class Base {
public:
    Base() {
        std::cout << "Base class constructor called." << std::endl;
    }

    // Virtual destructor to ensure proper cleanup
    virtual ~Base() {
        std::cout << "Base class destructor called." << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived class constructor called." << std::endl;
    }

    ~Derived() {
        std::cout << "Derived class destructor called." << std::endl;
    }
};

int main() {
    Derived d; // Create an instance of Derived
    return 0;
}