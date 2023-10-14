Sure, here is a code snippet demonstrating the use of destructors in C++.

#include <iostream>

// Define a class named MyClass
class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called!" << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called!" << std::endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass obj;

    // The destructor will be called automatically when obj goes out of scope
    return 0;
}