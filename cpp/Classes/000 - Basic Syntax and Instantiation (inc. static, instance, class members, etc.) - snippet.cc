#include <iostream>

// Define a class in C++
class MyClass {
public: // Public members
    // Instance variable
    int instanceVar;

    // Static variable
    static int staticVar;

    // Constructor
    MyClass(int val) {
        instanceVar = val;
        staticVar++;
    }

    // Instance method
    void printInstanceVar() {
        std::cout << "Instance variable: " << instanceVar << std::endl; // This will print the value of instanceVar
    }

    // Static method
    static void printStaticVar() {
        std::cout << "Static variable: " << staticVar << std::endl; // This will print the value of staticVar
    }
};

// Initialize static variable
int MyClass::staticVar = 0;

int main() {
    // Instantiate the class
    MyClass obj1(10);
    MyClass obj2(20);

    // Access instance variable
    std::cout << "obj1 instance variable: " << obj1.instanceVar << std::endl; // This will print 10
    std::cout << "obj2 instance variable: " << obj2.instanceVar << std::endl; // This will print 20

    // Access static variable
    std::cout << "Static variable: " << MyClass::staticVar << std::endl; // This will print 2

    // Call instance method
    obj1.printInstanceVar(); // This will print "Instance variable: 10"
    obj2.printInstanceVar(); // This will print "Instance variable: 20"

    // Call static method
    MyClass::printStaticVar(); // This will print "Static variable: 2"
}