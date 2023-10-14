Sure, here is a comprehensive code snippet demonstrating the use of variables, pointers, references, smart pointers, and memory management in C++.

#include <iostream>
#include <memory>

int main() {
    // Variable declaration and initialization
    int var = 10;
    std::cout << "Value of var: " << var << std::endl; // Expected output: Value of var: 10

    // Pointer declaration and initialization
    int* ptr = &var;
    std::cout << "Value of ptr: " << *ptr << std::endl; // Expected output: Value of ptr: 10

    // Changing the value of var through ptr
    *ptr = 20;
    std::cout << "New value of var: " << var << std::endl; // Expected output: New value of var: 20

    // Reference declaration and initialization
    int& ref = var;
    std::cout << "Value of ref: " << ref << std::endl; // Expected output: Value of ref: 20

    // Changing the value of var through ref
    ref = 30;
    std::cout << "New value of var: " << var << std::endl; // Expected output: New value of var: 30

    // Dynamic memory allocation
    int* dyn = new int;
    *dyn = 40;
    std::cout << "Value of dyn: " << *dyn << std::endl; // Expected output: Value of dyn: 40

    // Deallocating the memory
    delete dyn;

    // Smart pointer declaration and initialization
    std::unique_ptr<int> smart(new int);
    *smart = 50;
    std::cout << "Value of smart: " << *smart << std::endl; // Expected output: Value of smart: 50

    return 0;
}