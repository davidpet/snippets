In C++, there are no built-in interfaces or abstract base classes like in some other languages such as Java or C#. However, we can create our own abstract base classes using pure virtual functions. Here's an example:

#include <iostream>

// Abstract base class
class AbstractClass {
public:
    // Pure virtual function providing interface framework.
    virtual int myVirtualFunction() = 0;

    // A normal member function
    void normalFunction() {
        std::cout << "This is a normal function of AbstractClass" << std::endl;
    }
};

// Subclass 1
class SubClass1 : public AbstractClass {
public:
    // An implementation of the pure virtual function
    int myVirtualFunction() override {
        return 1;
    }
};

// Subclass 2
class SubClass2 : public AbstractClass {
public:
    // A different implementation of the pure virtual function
    int myVirtualFunction() override {
        return 2;
    }
};

int main() {
    SubClass1 sc1;
    SubClass2 sc2;

    // Call the implemented function
    std::cout << sc1.myVirtualFunction() << std::endl; // Expected output: 1
    std::cout << sc2.myVirtualFunction() << std::endl; // Expected output: 2

    // Call the normal function
    sc1.normalFunction(); // Expected output: This is a normal function of AbstractClass
    sc2.normalFunction(); // Expected output: This is a normal function of AbstractClass

    return 0;
}