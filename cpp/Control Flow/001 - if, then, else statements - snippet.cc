#include <iostream>

int main() {
    int x = 10;

    // Basic if statement
    if (x > 5) {
        std::cout << "x is greater than 5" << std::endl; // This will print
    }

    // If-else statement
    if (x > 20) {
        std::cout << "x is greater than 20" << std::endl; // This will not print
    } else {
        std::cout << "x is not greater than 20" << std::endl; // This will print
    }

    // If-else if-else statement
    if (x > 20) {
        std::cout << "x is greater than 20" << std::endl; // This will not print
    } else if (x > 15) {
        std::cout << "x is greater than 15 but not greater than 20" << std::endl; // This will not print
    } else {
        std::cout << "x is not greater than 15" << std::endl; // This will print
    }

    // Nested if-else statement
    if (x > 5) {
        if (x > 15) {
            std::cout << "x is greater than 15" << std::endl; // This will not print
        } else {
            std::cout << "x is greater than 5 but not greater than 15" << std::endl; // This will print
        }
    } else {
        std::cout << "x is not greater than 5" << std::endl; // This will not print
    }

    return 0;
}