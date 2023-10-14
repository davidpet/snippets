Sure, here is a code snippet demonstrating the use of external functions in C++.

// File: main.cpp

#include <iostream>
#include "external.h" // Include the header file where the external function is declared

int main() {
    int a = 5;
    int b = 10;

    // Call the external function
    int sum = add(a, b);

    std::cout << "The sum of " << a << " and " << b << " is " << sum << std::endl; // This should print: The sum of 5 and 10 is 15

    return 0;
}

// File: external.h

#ifndef EXTERNAL_H
#define EXTERNAL_H

// Declare the external function
int add(int a, int b);

#endif

// File: external.cpp

#include "external.h"

// Define the external function
int add(int a, int b) {
    return a + b;
}