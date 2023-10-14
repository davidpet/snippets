#include <iostream>

class MyClass {
public:
    // Declare a constant member
    const int constMember;

    // Declare a variable member
    int varMember;

    // Delayed initialization of constant member using constructor initializer list
    MyClass(int constVal, int varVal) : constMember(constVal) {
        // Delayed initialization of variable member inside constructor body
        varMember = varVal;
    }
};

int main() {
    // Create an instance of MyClass
    MyClass myObj(10, 20);

    // Print the values of the members
    std::cout << "Constant member: " << myObj.constMember << std::endl; // Expected output: Constant member: 10
    std::cout << "Variable member: " << myObj.varMember << std::endl; // Expected output: Variable member: 20

    // Try to modify the members
    // myObj.constMember = 30; // This will cause a compile error because constMember is a constant
    myObj.varMember = 40; // This is allowed because varMember is a variable

    // Print the values of the members again
    std::cout << "Constant member: " << myObj.constMember << std::endl; // Expected output: Constant member: 10
    std::cout << "Variable member: " << myObj.varMember << std::endl; // Expected output: Variable member: 40

    return 0;
}