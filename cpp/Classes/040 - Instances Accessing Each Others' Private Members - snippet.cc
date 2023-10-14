Sure, here is a code snippet demonstrating how instances of a class can access each other's private members in C++.

#include <iostream>

// Class declaration
class MyClass {
private:
    int privateVar;

public:
    MyClass(int var) : privateVar(var) {}

    // Function to access private member of another instance
    void accessPrivateVar(MyClass& other) {
        std::cout << "Accessing private member of another instance: " << other.privateVar << std::endl; // This should print the privateVar of the other instance
    }
};

int main() {
    MyClass instance1(10); // Creating an instance with privateVar = 10
    MyClass instance2(20); // Creating another instance with privateVar = 20

    // Instances accessing each other's private members
    instance1.accessPrivateVar(instance2); // This should print 20
    instance2.accessPrivateVar(instance1); // This should print 10

    return 0;
}