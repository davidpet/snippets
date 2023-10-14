#include <iostream>

int main() {
    // In C++, non-boolean values can be used with boolean operators.
    // Any non-zero value is considered as true and zero is considered as false.

    int a = 5;
    int b = 0;

    // Logical AND operator
    // If both the operands are non-zero, then the condition becomes true.
    std::cout << (a && b) << std::endl; // Expected output: 0 (false)

    // Logical OR operator
    // If any of the two operands is non-zero, then the condition becomes true.
    std::cout << (a || b) << std::endl; // Expected output: 1 (true)

    // Logical NOT operator
    // Used to reverse the logical state of its operand.
    // If a condition is true, then Logical NOT operator will make it false.
    std::cout << (!a) << std::endl; // Expected output: 0 (false)
    std::cout << (!b) << std::endl; // Expected output: 1 (true)

    // Bitwise AND operator
    // If both bits are 1, the corresponding result bit is set to 1. Otherwise, the result bit is set to 0.
    std::cout << (a & b) << std::endl; // Expected output: 0

    // Bitwise OR operator
    // If either bit of an operand is 1, the result bit is 1. Otherwise, the result bit is 0.
    std::cout << (a | b) << std::endl; // Expected output: 5

    // Bitwise XOR operator
    // If corresponding bits are different, it gives 1. If corresponding bits are same, it gives 0.
    std::cout << (a ^ b) << std::endl; // Expected output: 5

    // Bitwise NOT operator
    // It is unary and has the effect of 'flipping' bits.
    std::cout << (~a) << std::endl; // Expected output: -6
    std::cout << (~b) << std::endl; // Expected output: -1

    return 0;
}