#include <iostream>
#include <cmath> // Required for fabs function

int main() {
    // Declare and initialize two float variables
    float a = 0.15 + 0.15;
    float b = 0.1 + 0.2;

    // Print the values of a and b
    std::cout << "a: " << a << ", b: " << b << std::endl; // Expected: a: 0.3, b: 0.3

    // Direct comparison - this will likely fail due to floating point precision issues
    if (a == b) {
        std::cout << "Direct comparison: a and b are equal." << std::endl;
    } else {
        std::cout << "Direct comparison: a and b are not equal." << std::endl; // Expected: Direct comparison: a and b are not equal.
    }

    // Approximate comparison - this should succeed
    float epsilon = 0.0001; // Define a small number for comparison
    if (fabs(a - b) < epsilon) {
        std::cout << "Approximate comparison: a and b are equal." << std::endl; // Expected: Approximate comparison: a and b are equal.
    } else {
        std::cout << "Approximate comparison: a and b are not equal." << std::endl;
    }

    return 0;
}