#include <iostream>

int main() {
    // Declare and initialize variables
    int a = 5;
    int b = 10;

    // Basic assignment
    a = b; // a is now 10
    std::cout << "a: " << a << std::endl; // Expected output: a: 10

    // Assignment with addition
    a += b; // a is now 20
    std::cout << "a: " << a << std::endl; // Expected output: a: 20

    // Assignment with subtraction
    a -= b; // a is now 10
    std::cout << "a: " << a << std::endl; // Expected output: a: 10

    // Assignment with multiplication
    a *= b; // a is now 100
    std::cout << "a: " << a << std::endl; // Expected output: a: 100

    // Assignment with division
    a /= b; // a is now 10
    std::cout << "a: " << a << std::endl; // Expected output: a: 10

    // Assignment with modulus
    a %= b; // a is now 0
    std::cout << "a: " << a << std::endl; // Expected output: a: 0

    // Assignment with bitwise AND
    a = 5; // Reset a to 5
    a &= b; // a is now 0
    std::cout << "a: " << a << std::endl; // Expected output: a: 0

    // Assignment with bitwise OR
    a |= b; // a is now 10
    std::cout << "a: " << a << std::endl; // Expected output: a: 10

    // Assignment with bitwise XOR
    a ^= b; // a is now 0
    std::cout << "a: " << a << std::endl; // Expected output: a: 0

    // Assignment with left shift
    a = 5; // Reset a to 5
    a <<= 2; // a is now 20
    std::cout << "a: " << a << std::endl; // Expected output: a: 20

    // Assignment with right shift
    a >>= 2; // a is now 5
    std::cout << "a: " << a << std::endl; // Expected output: a: 5

    return 0;
}