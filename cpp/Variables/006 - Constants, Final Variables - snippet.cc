#include <iostream>

int main() {
    // Declare a constant integer
    const int a = 10;
    std::cout << "The value of constant a is: " << a << std::endl; // Expected output: The value of constant a is: 10

    // Declare a constant float
    const float b = 20.5f;
    std::cout << "The value of constant b is: " << b << std::endl; // Expected output: The value of constant b is: 20.5

    // Declare a constant character
    const char c = 'C';
    std::cout << "The value of constant c is: " << c << std::endl; // Expected output: The value of constant c is: C

    // Declare a constant string
    const std::string d = "Hello, World!";
    std::cout << "The value of constant d is: " << d << std::endl; // Expected output: The value of constant d is: Hello, World!

    // Declare a constant boolean
    const bool e = true;
    std::cout << "The value of constant e is: " << std::boolalpha << e << std::endl; // Expected output: The value of constant e is: true

    // Trying to change the value of a constant will result in a compile error
    // Uncomment the following line to see the error
    // a = 20;

    // Constant reference
    const int &aref = a;
    // aref = 10;   // illegal

    // Constant pointer
    const int *p = &a;
    p = nullptr; // legal
    // *p = 20; // illegal

    // ILLEGAL because it knows it's const
    // int &arefagain = a;

    return 0;
}