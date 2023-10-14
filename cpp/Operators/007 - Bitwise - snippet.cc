#include <iostream>

int main() {
    // Bitwise AND operator (&)
    int a = 60; // 60 = 0011 1100 in binary
    int b = 13; // 13 = 0000 1101 in binary
    int result = a & b; // result = 0000 1100
    std::cout << "Bitwise AND: " << result << std::endl; // Expected output: 12

    // Bitwise OR operator (|)
    result = a | b; // result = 0011 1101
    std::cout << "Bitwise OR: " << result << std::endl; // Expected output: 61

    // Bitwise XOR operator (^)
    result = a ^ b; // result = 0011 0001
    std::cout << "Bitwise XOR: " << result << std::endl; // Expected output: 49

    // Bitwise NOT operator (~)
    result = ~a; // result = 1100 0011
    std::cout << "Bitwise NOT: " << result << std::endl; // Expected output: -61

    // Bitwise left shift operator (<<)
    result = a << 2; // result = 1111 0000
    std::cout << "Bitwise left shift: " << result << std::endl; // Expected output: 240

    // Bitwise right shift operator (>>)
    result = a >> 2; // result = 0000 1111
    std::cout << "Bitwise right shift: " << result << std::endl; // Expected output: 15

    return 0;
}