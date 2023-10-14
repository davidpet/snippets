#include <iostream>

// Class definition
class MyClass {
public:
    // Static variable declaration
    static int staticVar;

    // Function to modify static variable
    static void modifyStaticVar(int newVal) {
        staticVar = newVal;
    }
};

// Static variable definition
int MyClass::staticVar = 10;

int main() {
    // Accessing static variable directly through class
    std::cout << MyClass::staticVar << std::endl; // Expected output: 10

    // Modifying static variable through function
    MyClass::modifyStaticVar(20);
    std::cout << MyClass::staticVar << std::endl; // Expected output: 20

    // Creating objects of MyClass
    MyClass obj1, obj2;

    // Accessing static variable through objects
    // It should be noted that the static variable is shared among all instances of the class
    std::cout << obj1.staticVar << std::endl; // Expected output: 20
    std::cout << obj2.staticVar << std::endl; // Expected output: 20

    // Modifying static variable through one object affects all instances
    obj1.staticVar = 30;
    std::cout << obj2.staticVar << std::endl; // Expected output: 30

    return 0;
}