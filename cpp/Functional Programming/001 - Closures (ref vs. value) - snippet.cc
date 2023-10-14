Sure, here is a code snippet demonstrating the use of closures in C++ with both reference and value captures.

#include <iostream>

int main() {
    int x = 10;
    int y = 20;

    // A closure that captures x and y by value
    auto value_capture = [x, y]() {
        std::cout << "Value capture: " << x << ", " << y << std::endl;
    };

    // A closure that captures x and y by reference
    auto ref_capture = [&x, &y]() {
        std::cout << "Reference capture: " << x << ", " << y << std::endl;
    };

    value_capture(); // Prints: Value capture: 10, 20
    ref_capture(); // Prints: Reference capture: 10, 20

    // Modify x and y
    x = 30;
    y = 40;

    value_capture(); // Prints: Value capture: 10, 20
    ref_capture(); // Prints: Reference capture: 30, 40

    return 0;
}