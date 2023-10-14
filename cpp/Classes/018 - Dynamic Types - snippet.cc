Sure, here is a code snippet demonstrating the use of dynamic types in C++ classes.

#include <iostream>

// Base class
class Base {
public:
    virtual void print() {
        std::cout << "Base class print function" << std::endl; // This will print: Base class print function
    }
};

// Derived class
class Derived : public Base {
public:
    void print() override {
        std::cout << "Derived class print function" << std::endl; // This will print: Derived class print function
    }
};

int main() {
    Base* basePtr; // Declare a pointer of Base type
    Base baseObj; // Declare an object of Base type
    Derived derivedObj; // Declare an object of Derived type

    basePtr = &baseObj; // Point basePtr to baseObj
    basePtr->print(); // Call print function. It will call Base's print function

    basePtr = &derivedObj; // Point basePtr to derivedObj
    basePtr->print(); // Call print function. It will call Derived's print function

    return 0;
}