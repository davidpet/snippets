#include <iostream>

int main() {
    // Declare an integer of type short
    short shortVar = 1;
    std::cout << "Size of short: " << sizeof(shortVar) << " bytes" << std::endl; // Expected output: 2 bytes

    // Declare an integer of type int
    int intVar = 1;
    std::cout << "Size of int: " << sizeof(intVar) << " bytes" << std::endl; // Expected output: 4 bytes

    // Declare an integer of type long
    long longVar = 1;
    std::cout << "Size of long: " << sizeof(longVar) << " bytes" << std::endl; // Expected output: 4 or 8 bytes (depends on the system)

    // Declare an integer of type long long
    long long longLongVar = 1;
    std::cout << "Size of long long: " << sizeof(longLongVar) << " bytes" << std::endl; // Expected output: 8 bytes

    // Declare an integer of type unsigned short
    unsigned short uShortVar = 1;
    std::cout << "Size of unsigned short: " << sizeof(uShortVar) << " bytes" << std::endl; // Expected output: 2 bytes

    // Declare an integer of type unsigned int
    unsigned int uIntVar = 1;
    std::cout << "Size of unsigned int: " << sizeof(uIntVar) << " bytes" << std::endl; // Expected output: 4 bytes

    // Declare an integer of type unsigned long
    unsigned long uLongVar = 1;
    std::cout << "Size of unsigned long: " << sizeof(uLongVar) << " bytes" << std::endl; // Expected output: 4 or 8 bytes (depends on the system)

    // Declare an integer of type unsigned long long
    unsigned long long uLongLongVar = 1;
    std::cout << "Size of unsigned long long: " << sizeof(uLongLongVar) << " bytes" << std::endl; // Expected output: 8 bytes

    return 0;
}