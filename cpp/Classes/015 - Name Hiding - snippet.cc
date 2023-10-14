Sure, here is a code snippet demonstrating the concept of Name Hiding in C++ classes.

#include <iostream>

// Base class
class Base {
public:
    int x;

    // Function to set x
    void setX(int a) {
        x = a;
    }

    // Function to print x
    void print() {
        std::cout << "Base x: " << x << std::endl; // This will print the value of x in Base class
    }
};

// Derived class
class Derived : public Base {
public:
    int x;

    // Function to set x
    void setX(int a) {
        x = a;
    }

    // Function to print x
    void print() {
        std::cout << "Derived x: " << x << std::endl; // This will print the value of x in Derived class
    }
};

int main() {
    Derived d;

    // Set x in Derived class
    d.setX(10);
    d.print(); // Expected output: Derived x: 10

    // Set x in Base class
    d.Base::setX(20);
    d.Base::print(); // Expected output: Base x: 20

    return 0;
}