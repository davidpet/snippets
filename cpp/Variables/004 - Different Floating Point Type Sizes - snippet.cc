#include <iostream>
#include <limits>

int main() {
    // Declare and initialize a float variable
    float floatVar = 3.14159f;
    std::cout << "Size of float: " << sizeof(floatVar) << " bytes" << std::endl; // Expected output: 4 bytes
    std::cout << "Max value of float: " << std::numeric_limits<float>::max() << std::endl; // Expected output: 3.40282e+38
    std::cout << "Min value of float: " << std::numeric_limits<float>::lowest() << std::endl; // Expected output: -3.40282e+38

    // Declare and initialize a double variable
    double doubleVar = 3.14159;
    std::cout << "Size of double: " << sizeof(doubleVar) << " bytes" << std::endl; // Expected output: 8 bytes
    std::cout << "Max value of double: " << std::numeric_limits<double>::max() << std::endl; // Expected output: 1.79769e+308
    std::cout << "Min value of double: " << std::numeric_limits<double>::lowest() << std::endl; // Expected output: -1.79769e+308

    // Declare and initialize a long double variable
    long double longDoubleVar = 3.14159L;
    std::cout << "Size of long double: " << sizeof(longDoubleVar) << " bytes" << std::endl; // Expected output: 16 bytes (may vary depending on the system)
    std::cout << "Max value of long double: " << std::numeric_limits<long double>::max() << std::endl; // Expected output: 1.18973e+4932 (may vary depending on the system)
    std::cout << "Min value of long double: " << std::numeric_limits<long double>::lowest() << std::endl; // Expected output: -1.18973e+4932 (may vary depending on the system)

    return 0;
}