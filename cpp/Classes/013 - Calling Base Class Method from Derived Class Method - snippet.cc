Sure, here is a code snippet demonstrating how to call a base class method from a derived class method in C++.

#include <iostream>

// Base class
class Base {
public:
    // Base class method
    void baseMethod() {
        std::cout << "Base class method called!" << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Derived class method
    void derivedMethod() {
        // Calling base class method from derived class method
        baseMethod();
    }
};

int main() {
    // Creating object of derived class
    Derived d;

    // Calling derived class method
    d.derivedMethod(); // This will print: "Base class method called!"
    
    return 0;
}