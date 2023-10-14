In C++, the concept of "interning" is not directly applicable as it is in some other languages like Python or Java. Interning is a method of storing only one copy of each distinct value, which must be immutable. This is typically used for strings or other large objects to save memory. 

However, in C++, variables are mutable and each variable has its own memory space. Therefore, the concept of interning doesn't directly apply. 

But, we can demonstrate a similar concept using pointers and references, where multiple variables can point to or reference the same memory location. Here's an example:

#include <iostream>

int main() {
    int x = 10; // Declare an integer variable x
    int* p = &x; // Declare a pointer p pointing to x
    int& r = x; // Declare a reference r to x

    std::cout << "Value of x: " << x << std::endl; // Expected output: Value of x: 10
    std::cout << "Value pointed by p: " << *p << std::endl; // Expected output: Value pointed by p: 10
    std::cout << "Value of r: " << r << std::endl; // Expected output: Value of r: 10

    *p = 20; // Change the value pointed by p

    std::cout << "Value of x: " << x << std::endl; // Expected output: Value of x: 20
    std::cout << "Value pointed by p: " << *p << std::endl; // Expected output: Value pointed by p: 20
    std::cout << "Value of r: " << r << std::endl; // Expected output: Value of r: 20

    r = 30; // Change the value of r

    std::cout << "Value of x: " << x << std::endl; // Expected output: Value of x: 30
    std::cout << "Value pointed by p: " << *p << std::endl; // Expected output: Value pointed by p: 30
    std::cout << "Value of r: " << r << std::endl; // Expected output: Value of r: 30

    return 0;
}