Sure, here is a code snippet demonstrating the concept of a root class in C++ and how to override its methods.

#include <iostream>

// Define a root class
class Root {
public:
    // A virtual function in the root class
    virtual void print() {
        std::cout << "This is the root class." << std::endl;
    }
};

// Define a derived class
class Derived : public Root {
public:
    // Override the virtual function in the derived class
    void print() override {
        std::cout << "This is the derived class." << std::endl;
    }
};

int main() {
    // Create an object of the root class
    Root root;
    root.print(); // This will print: This is the root class.

    // Create an object of the derived class
    Derived derived;
    derived.print(); // This will print: This is the derived class.

    // Create a pointer of Root type and point it to a Derived object
    Root* ptr = &derived;
    ptr->print(); // This will print: This is the derived class.
    
    return 0;
}