#include <iostream>

int main() {
    // Declare and initialize variables
    int a = 10;
    int b = 3;

    // Arithmetic Operators
    std::cout << "Arithmetic Operators:" << std::endl;
    std::cout << "Addition: " << a + b << std::endl; // Expected output: 13
    std::cout << "Subtraction: " << a - b << std::endl; // Expected output: 7
    std::cout << "Multiplication: " << a * b << std::endl; // Expected output: 30
    std::cout << "Division: " << a / b << std::endl; // Expected output: 3
    std::cout << "Modulus: " << a % b << std::endl; // Expected output: 1

    // Increment and Decrement Operators
    std::cout << "\nIncrement and Decrement Operators:" << std::endl;
    a++; // Increment a by 1
    std::cout << "Increment: " << a << std::endl; // Expected output: 11
    b--; // Decrement b by 1
    std::cout << "Decrement: " << b << std::endl; // Expected output: 2

    // Relational Operators
    std::cout << "\nRelational Operators:" << std::endl;
    std::cout << "Equal to: " << (a == b) << std::endl; // Expected output: 0 (false)
    std::cout << "Not equal to: " << (a != b) << std::endl; // Expected output: 1 (true)
    std::cout << "Greater than: " << (a > b) << std::endl; // Expected output: 1 (true)
    std::cout << "Less than: " << (a < b) << std::endl; // Expected output: 0 (false)
    std::cout << "Greater than or equal to: " << (a >= b) << std::endl; // Expected output: 1 (true)
    std::cout << "Less than or equal to: " << (a <= b) << std::endl; // Expected output: 0 (false)

    // Logical Operators
    std::cout << "\nLogical Operators:" << std::endl;
    std::cout << "Logical AND: " << ((a > b) && (a != b)) << std::endl; // Expected output: 1 (true)
    std::cout << "Logical OR: " << ((a < b) || (a == b)) << std::endl; // Expected output: 0 (false)
    std::cout << "Logical NOT: " << !(a == b) << std::endl; // Expected output: 1 (true)

    return 0;
}