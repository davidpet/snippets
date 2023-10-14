#include <iostream>

// Function overloading in C++ allows two or more functions to have the same name but different parameters.
// Function overloading can be considered as an example of polymorphism feature in C++.

// Here we declare and define three functions with the same name "add" but with different parameters.

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

// Function to concatenate two strings
std::string add(std::string a, std::string b) {
    return a + b;
}

int main() {
    // Using the add function to add integers
    std::cout << add(1, 2) << std::endl; // Expected output: 3

    // Using the add function to add doubles
    std::cout << add(1.5, 2.5) << std::endl; // Expected output: 4.0

    // Using the add function to concatenate strings
    std::cout << add("Hello, ", "World!") << std::endl; // Expected output: Hello, World!

    return 0;
}