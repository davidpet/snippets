C++ does not have a built-in module/package system like Python or Java. However, it does have a preprocessor directive called `#include` which is used to import code from other files. This is typically used to import functions, classes, and constants from header files.

Here is an example of how you might import constants and variables in C++:

// constants.h
#ifndef CONSTANTS_H
#define CONSTANTS_H

// Define some constants
const double PI = 3.14159;
const double E = 2.71828;

#endif

// variables.h
#ifndef VARIABLES_H
#define VARIABLES_H

// Define some variables
int x = 10;
int y = 20;

#endif

// main.cpp
#include <iostream>
#include "constants.h"
#include "variables.h"

int main() {
    // Use the imported constants and variables
    std::cout << "PI: " << PI << std::endl; // Expected output: PI: 3.14159
    std::cout << "E: " << E << std::endl; // Expected output: E: 2.71828
    std::cout << "x: " << x << std::endl; // Expected output: x: 10
    std::cout << "y: " << y << std::endl; // Expected output: y: 20

    return 0;
}