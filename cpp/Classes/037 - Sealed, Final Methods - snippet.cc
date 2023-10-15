#include <iostream>

// Base class
class Base {
public:
    virtual void func() {
        std::cout << "Base class function" << std::endl;
    }

    // A final method in the base class
    virtual void finalFunc() final {
        std::cout << "Base class final function" << std::endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Overriding func() in the base class
    void func() override {
        std::cout << "Derived class function" << std::endl;
    }

    // Attempting to override finalFunc() will result in a compiler error
    // void finalFunc() override {
    //     std::cout << "Derived class final function" << std::endl;
    // }
};

int main() {
    Base* base = new Base();
    Base* derived = new Derived();

    base->func(); // Prints: Base class function
    base->finalFunc(); // Prints: Base class final function

    derived->func(); // Prints: Derived class function
    derived->finalFunc(); // Prints: Base class final function

    delete base;
    delete derived;

    return 0;
}