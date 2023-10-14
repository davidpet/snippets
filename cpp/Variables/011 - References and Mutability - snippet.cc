#include <iostream>

int main() {
    // Declare an integer variable
    int x = 10;

    // Declare a reference to the integer variable
    int& ref = x;

    // Print the original variable and the reference
    std::cout << "x: " << x << ", ref: " << ref << std::endl; // Expected output: x: 10, ref: 10

    // Change the value of the original variable
    x = 20;

    // Print the original variable and the reference
    std::cout << "x: " << x << ", ref: " << ref << std::endl; // Expected output: x: 20, ref: 20

    // Change the value of the reference
    ref = 30;

    // Print the original variable and the reference
    std::cout << "x: " << x << ", ref: " << ref << std::endl; // Expected output: x: 30, ref: 30

    // Declare a constant integer
    const int y = 40;

    // Declare a reference to the constant integer
    const int& cref = y;

    // Print the original constant and the reference
    std::cout << "y: " << y << ", cref: " << cref << std::endl; // Expected output: y: 40, cref: 40

    // Attempt to change the value of the reference to the constant
    // This will result in a compile error
    // cref = 50;

    return 0;
}