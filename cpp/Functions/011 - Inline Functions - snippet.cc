#include <iostream>

// Inline function declaration and definition
inline int add(int a, int b) {
    return a + b;
}

// Inline function with default arguments
inline int multiply(int a, int b = 2) {
    return a * b;
}

// Inline function with reference arguments
inline void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    // Using inline function add
    std::cout << "Sum: " << add(x, y) << std::endl; // Expected output: Sum: 15

    // Using inline function multiply with default argument
    std::cout << "Multiplication: " << multiply(x) << std::endl; // Expected output: Multiplication: 10

    // Using inline function multiply without default argument
    std::cout << "Multiplication: " << multiply(x, y) << std::endl; // Expected output: Multiplication: 50

    // Using inline function swap
    swap(x, y);
    std::cout << "After swap, x: " << x << ", y: " << y << std::endl; // Expected output: After swap, x: 10, y: 5

    return 0;
}