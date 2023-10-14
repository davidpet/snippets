// C++ code to demonstrate top-level variables/constants

#include <iostream>

// Top-level variable declaration
// This is a global variable, accessible from any part of the program
int globalVar = 10;

// Top-level constant declaration
// This is a global constant, accessible from any part of the program
// Its value cannot be changed after initialization
const int globalConst = 20;

// Function to demonstrate access to top-level variables/constants
void printGlobal() {
    std::cout << "Global variable: " << globalVar << std::endl; // Should print: Global variable: 10
    std::cout << "Global constant: " << globalConst << std::endl; // Should print: Global constant: 20
}

int main() {
    printGlobal();

    // Changing the value of the global variable
    globalVar = 30;
    std::cout << "Changed global variable: " << globalVar << std::endl; // Should print: Changed global variable: 30

    // Trying to change the value of the global constant
    // This will cause a compile error
    // globalConst = 40;

    return 0;
}