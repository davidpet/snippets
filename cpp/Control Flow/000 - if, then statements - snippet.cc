#include <iostream>

int main() {
    // Declare and initialize a variable
    int number = 10;

    // Basic if statement
    if (number > 5) {
        std::cout << "Number is greater than 5" << std::endl; // This will be printed
    }

    // If-else statement
    if (number > 15) {
        std::cout << "Number is greater than 15" << std::endl;
    } else {
        std::cout << "Number is not greater than 15" << std::endl; // This will be printed
    }

    // If-else if-else statement
    if (number > 20) {
        std::cout << "Number is greater than 20" << std::endl;
    } else if (number > 10) {
        std::cout << "Number is greater than 10 but not greater than 20" << std::endl;
    } else {
        std::cout << "Number is not greater than 10" << std::endl; // This will be printed
    }

    // Nested if statement
    if (number > 0) {
        if (number < 20) {
            std::cout << "Number is between 0 and 20" << std::endl; // This will be printed
        }
    }

    return 0;
}