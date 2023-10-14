// File: global.cpp
#include <iostream>

// Global variable declaration
extern int g_var;

// Function declaration
void printGlobalVar();

int main() {
    // Accessing the global variable
    std::cout << "Global variable g_var: " << g_var << std::endl; // Expected output: Global variable g_var: 10
    printGlobalVar(); // Expected output: Global variable g_var in function: 10
    return 0;
}

// File: global_def.cpp
#include <iostream>

// Global variable definition
int g_var = 10;

// Function definition
void printGlobalVar() {
    std::cout << "Global variable g_var in function: " << g_var << std::endl;
}