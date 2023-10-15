#include <iostream>

int main() {
    // Declare and initialize two integer variables
    int a = 10;
    int b = 10;

    // Equality comparison
    if (a == b) {
        std::cout << "a is equal to b" << std::endl; // This will be printed
    } else {
        std::cout << "a is not equal to b" << std::endl;
    }

    // Inequality comparison
    if (a != b) {
        std::cout << "a is not equal to b" << std::endl;
    } else {
        std::cout << "a is equal to b" << std::endl; // This will be printed
    }

    // Declare and initialize two floating point variables
    double c = 1.23;
    double d = 1.23;

    // Equality comparison
    if (c == d) {
        std::cout << "c is equal to d" << std::endl; // This will be printed
    } else {
        std::cout << "c is not equal to d" << std::endl;
    }

    // Inequality comparison
    if (c != d) {
        std::cout << "c is not equal to d" << std::endl;
    } else {
        std::cout << "c is equal to d" << std::endl; // This will be printed
    }

    // Declare and initialize two string variables
    std::string e = "Hello";
    std::string f = "Hello";

    // Equality comparison
    if (e == f) {
        std::cout << "e is equal to f" << std::endl; // This will be printed
    } else {
        std::cout << "e is not equal to f" << std::endl;
    }

    // Inequality comparison
    if (e != f) {
        std::cout << "e is not equal to f" << std::endl;
    } else {
        std::cout << "e is equal to f" << std::endl; // This will be printed
    }

    return 0;
}