#include <iostream>

class MyClass {
public:
    // Regular constructor
    MyClass() {
        std::cout << "Regular constructor called" << std::endl;
    }

    // Static member object
    static MyClass staticMember;
};

// Initialize static member object
MyClass MyClass::staticMember; // prints "Regular constructor called"

int main() {
    std::cout << "Main function started" << std::endl;
    MyClass myObject;
    return 0;
}