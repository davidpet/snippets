Sure, here is a code snippet demonstrating the use of external variables in C++.

// File: main.cpp
#include <iostream>
#include "externalVar.h"

// Define the external variable
int myVar = 10;

int main() {
    std::cout << "Initial value of myVar: " << myVar << std::endl; // Expected output: 10

    // Call the function that modifies the external variable
    modifyVar();

    std::cout << "Value of myVar after modification: " << myVar << std::endl; // Expected output: 20

    return 0;
}

// File: externalVar.h
#ifndef EXTERNALVAR_H
#define EXTERNALVAR_H

// Declare the external variable
extern int myVar;

// Function to modify the external variable
void modifyVar();

#endif

// File: externalVar.cpp
#include "externalVar.h"

// Implement the function that modifies the external variable
void modifyVar() {
    myVar = 20;
}