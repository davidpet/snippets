#include <iostream>

// Base class
class Base {
public:
    // Static member in base class
    static int x;

    // Function to set the value of static member
    static void setX(int a) {
        x = a;
    }

    // Function to print the value of static member
    static void printX() {
        std::cout << "Base x: " << x << std::endl; // This will print the value of x in Base class
    }
};

// Initialize static member of Base class
int Base::x = 10;

// Derived class
class Derived : public Base {
public:
    // Hiding the static member 'x' in base class
    static int x;

    // Function to set the value of static member
    static void setX(int a) {
        x = a;
    }

    // Function to print the value of static member
    static void printX() {
        std::cout << "Derived x: " << x << std::endl; // This will print the value of x in Derived class
    }
};

// Initialize static member of Derived class
int Derived::x = 20;

int main() {
    // Accessing static members through base class
    Base::setX(30);
    Base::printX(); // This should print "Base x: 30"

    // Accessing static members through derived class
    Derived::setX(40);
    Derived::printX(); // This should print "Derived x: 40"

    // Accessing hidden static member in base class through derived class
    Derived::Base::setX(50);
    Derived::Base::printX(); // This should print "Base x: 50"

    return 0;
}