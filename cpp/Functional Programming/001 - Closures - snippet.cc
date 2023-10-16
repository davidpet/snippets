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

    // Capture all mentioned variables by value, except the exceptions mentioned.
    auto default_capture = [=, &y]() {
        std::cout << "Default capture: " << x << ", " << y << std::endl;
    };
    x = 100;
    y = 200;
    default_capture();  // Prints: Default capture: 30, 200

    // Capture all mentioned variables by reference, except the exceptions mentioned.
    auto default_capture2 = [&, y]() {
        std::cout << "Default capture: " << x << ", " << y << std::endl;
    };
    x = 1000;
    y = 2000;
    default_capture2();  // Prints: Default capture: 1000, 200

    return 0;
}
