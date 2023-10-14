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

    // Long double
    long double longDoubleVar = 10.5L;
    std::cout << "Long Double: " << doubleVar << std::endl; // Expected output: Long Double: 10.5

    // Character data type
    char charVar = 'A';
    std::cout << "Char: " << charVar << std::endl; // Expected output: Char: A

    // Boolean data type
    bool boolVar = true;
    std::cout << "Boolean: " << boolVar << std::endl; // Expected output: Boolean: 1

    // Wide character data type
    wchar_t wcharVar = L'Ω';
    std::wcout << "Wide Char: " << wcharVar << std::endl; // Expected output: Wide Char: Ω
    std::cout << std::endl;
    std::cout << std::endl;

    // Sizes of types
    std::cout << "Size of int: " << sizeof(int) * 8 << " bits" << std::endl;
    std::cout << "Size of short: " << sizeof(short) * 8 << " bits" << std::endl;
    std::cout << "Size of long: " << sizeof(long) * 8 << " bits" << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) * 8 << " bits" << std::endl;
    std::cout << std::endl;

    // funky types
    std::cout << "Size of long int: " << sizeof(long int) * 8 << " bits" << std::endl;
    std::cout << "Size of short int: " << sizeof(short int) * 8 << " bits" << std::endl;
    std::cout << "Size of long long int: " << sizeof(long int) * 8 << " bits" << std::endl;
    std::cout << std::endl;

    // other sizes
    std::cout << "Size of float: " << sizeof(float) * 8 << " bits" << std::endl;
    std::cout << "Size of double: " << sizeof(double) * 8 << " bits" << std::endl;
    std::cout << "Size of long double: " << sizeof(long double) * 8 << " bits" << std::endl;
    std::cout << "Size of char: " << sizeof(char) * 8 << " bits" << std::endl;
    std::cout << "Size of wchar_t: " << sizeof(wchar_t) * 8 << " bits" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) * 8 << " bits" << std::endl;
    std::cout << std::endl;

    unsigned long long huge = 9223372036854775808ULL; // trailing ULL to make it compile
    unsigned char big = 255;

    std::cout << huge << std::endl;
    std::cout << (int)big << std::endl;

    // scientific notation
    float x = 1.5e-3;
    double y = -1.5E3;

    return 0;
}