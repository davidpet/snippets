#include <iostream>

int main() {
    // Integer data type
    int integerVar = 10;
    std::cout << "Integer: " << integerVar << std::endl; // Expected output: Integer: 10

    // Floating point data type
    float floatVar = 10.5;
    std::cout << "Float: " << floatVar << std::endl; // Expected output: Float: 10.5

    // Double precision floating point data type
    double doubleVar = 10.5;
    std::cout << "Double: " << doubleVar << std::endl; // Expected output: Double: 10.5

    // Character data type
    char charVar = 'A';
    std::cout << "Char: " << charVar << std::endl; // Expected output: Char: A

    // Boolean data type
    bool boolVar = true;
    std::cout << "Boolean: " << boolVar << std::endl; // Expected output: Boolean: 1

    // Wide character data type
    wchar_t wcharVar = L'Ω';
    std::wcout << "Wide Char: " << wcharVar << std::endl; // Expected output: Wide Char: Ω

    return 0;
}