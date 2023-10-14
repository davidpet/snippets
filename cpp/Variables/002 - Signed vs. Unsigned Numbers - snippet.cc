#include <iostream>

int main() {
    // Signed integers can hold both positive and negative numbers.
    int signedInt = -12345;
    std::cout << "Signed integer: " << signedInt << std::endl; // Expected output: -12345

    // Unsigned integers can only hold positive numbers and zero.
    unsigned int unsignedInt = 12345;
    std::cout << "Unsigned integer: " << unsignedInt << std::endl; // Expected output: 12345

    // If you try to assign a negative number to an unsigned integer, it will wrap around to a very large positive number.
    unsignedInt = -1;
    std::cout << "Unsigned integer assigned -1: " << unsignedInt << std::endl; // Expected output: 4294967295

    // Similarly, if you try to assign a number larger than the maximum positive number an integer can hold, it will wrap around to a negative number.
    signedInt = 2147483647 + 1;
    std::cout << "Signed integer assigned 2147483647 + 1: " << signedInt << std::endl; // Expected output: -2147483648

    return 0;
}