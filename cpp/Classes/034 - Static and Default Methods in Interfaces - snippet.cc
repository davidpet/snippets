C++ does not support interfaces in the same way as languages like Java or C#. However, we can simulate interfaces using abstract classes. In C++, a class becomes abstract when it has at least one pure virtual function. 

In C++, static methods in classes are allowed, but they can't be virtual. Therefore, we can't have static methods in interfaces (abstract classes with pure virtual functions) because they can't be overridden in derived classes. 

Default methods in interfaces are also not supported in C++. However, we can provide a default implementation of a method in a base class, and derived classes can choose to override this method or use the default implementation.

Here is a code snippet demonstrating these concepts:

#include <iostream>

// Abstract class (our "Interface")
class Interface {
public:
    // Pure virtual function
    virtual void normalMethod() = 0;

    // Default method (not a concept in C++, but we can provide a default implementation in a base class)
    virtual void defaultMethod() {
        std::cout << "Default method in Interface" << std::endl; // This will print "Default method in Interface"
    }

    // Static method (can't be virtual)
    static void staticMethod() {
        std::cout << "Static method in Interface" << std::endl; // This will print "Static method in Interface"
    }
};

// Derived class
class Derived : public Interface {
public:
    // Override of pure virtual function
    void normalMethod() override {
        std::cout << "normalMethod in Derived" << std::endl; // This will print "normalMethod in Derived"
    }

    // Override of default method
    void defaultMethod() override {
        std::cout << "defaultMethod in Derived" << std::endl; // This will print "defaultMethod in Derived"
    }
};

int main() {
    Derived d;
    d.normalMethod(); // This will print "normalMethod in Derived"
    d.defaultMethod(); // This will print "defaultMethod in Derived"
    Interface::staticMethod(); // This will print "Static method in Interface"
    return 0;
}