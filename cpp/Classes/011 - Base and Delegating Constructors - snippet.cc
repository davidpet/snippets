#include <iostream>

// Define a base class
class Base {
public:
    // Base constructor
    Base() {
        std::cout << "Base constructor called" << std::endl;
    }

    // Base constructor with parameters
    Base(int x) {
        std::cout << "Base constructor with parameter called: " << x << std::endl;
    }
};

// Define a derived class
class Derived : public Base {
public:
    // Delegating constructor
    Derived() : Base() { // technically unnecessary since using default c'tor anyway
        std::cout << "Derived constructor called" << std::endl;
    }

    // Delegating constructor with parameters
    Derived(int x) : Base(x) {
        std::cout << "Derived constructor with parameter called: " << x << std::endl;
    }

    // Delegating to another c'tor on same level
    Derived(char c): Derived((int)c) {}

    /* ILLEGAL
    Derived(short s) {
        Base(s);
    }
    */
};

int main() {
    // Create an instance of Derived using the default constructor
    Derived d1; // This will print: "Base constructor called" and "Derived constructor called"

    // Create an instance of Derived using the constructor with parameters
    Derived d2(10); // This will print: "Base constructor with parameter called: 10" and "Derived constructor with parameter called: 10"

    return 0;
}