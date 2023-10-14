#include <iostream>

// Base class
class Base {
public:
    Base() {
        std::cout << "Base class constructor called." << std::endl;
    }

    // Virtual destructor is important when a base class pointer is deleted
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
    // Create an instance of the derived class
    Derived d;
    // Output will be:
    // Base class constructor called.
    // Derived class constructor called.
    // Derived class destructor called.
    // Base class destructor called.
    return 0;
}