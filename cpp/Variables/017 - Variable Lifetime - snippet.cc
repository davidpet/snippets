#include <iostream>

// Function to demonstrate local variable lifetime
void localVariable() {
    int local = 10; // Local variable declaration
    std::cout << "Local variable in function: " << local << std::endl; // Prints: Local variable in function: 10
}

// Function to demonstrate static local variable lifetime
void staticLocalVariable() {
    static int staticLocal = 10; // Static local variable declaration
    std::cout << "Static local variable in function before increment: " << staticLocal << std::endl; // Prints: Static local variable in function before increment: 10
    staticLocal++;
    std::cout << "Static local variable in function after increment: " << staticLocal << std::endl; // Prints: Static local variable in function after increment: 11
}

// Global variable declaration
int global = 10;

int main() {
    std::cout << "Global variable at start: " << global << std::endl; // Prints: Global variable at start: 10

    // Local variable declaration
    int localMain = 20;
    std::cout << "Local variable in main: " << localMain << std::endl; // Prints: Local variable in main: 20

    // Calling function to demonstrate local variable lifetime
    localVariable();

    // Calling function to demonstrate static local variable lifetime
    staticLocalVariable();
    staticLocalVariable();

    std::cout << "Global variable at end: " << global << std::endl; // Prints: Global variable at end: 10

    return 0;
}