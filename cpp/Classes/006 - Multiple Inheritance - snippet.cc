Sure, here is a comprehensive example of multiple inheritance in C++:

#include <iostream>

// Base class 1
class Class1 {
public:
    void printClass1() {
        std::cout << "This is Class1" << std::endl; // This will print: This is Class1
    }
};

// Base class 2
class Class2 {
public:
    void printClass2() {
        std::cout << "This is Class2" << std::endl; // This will print: This is Class2
    }
};

// Derived class
class Derived : public Class1, public Class2 {
public:
    void printDerived() {
        std::cout << "This is Derived class" << std::endl; // This will print: This is Derived class
    }
};

int main() {
    Derived d;
    d.printClass1(); // Call method from Class1
    d.printClass2(); // Call method from Class2
    d.printDerived(); // Call method from Derived class
    return 0;
}