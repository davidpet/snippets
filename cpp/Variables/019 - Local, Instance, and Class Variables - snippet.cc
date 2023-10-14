#include <iostream>

// Class definition
class MyClass {
public:
    // Class variable (also known as static variable)
    // This variable is shared by all objects of the class
    static int classVar;

    // Instance variable
    // This variable is unique to each object of the class
    int instanceVar;

    // Function to demonstrate local variable
    void func() {
        // Local variable
        // This variable is only accessible within this function
        int localVar = 10;
        std::cout << "Local variable: " << localVar << std::endl; // Expected output: Local variable: 10
    }
};

// Initialize class variable
int MyClass::classVar = 20;

int main() {
    // Create object of MyClass
    MyClass obj1, obj2;

    // Access instance variable through object
    obj1.instanceVar = 30;
    std::cout << "Instance variable of obj1: " << obj1.instanceVar << std::endl; // Expected output: Instance variable of obj1: 30

    // Access class variable through object
    // Even though we are changing it through obj1, it will affect obj2 as well because class variables are shared
    obj1.classVar = 40;
    std::cout << "Class variable of obj1: " << obj1.classVar << std::endl; // Expected output: Class variable of obj1: 40
    std::cout << "Class variable of obj2: " << obj2.classVar << std::endl; // Expected output: Class variable of obj2: 40

    // Call function to print local variable
    obj1.func();

    return 0;
}