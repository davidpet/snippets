#include <iostream>

// Function declaration
void modifyValue(int &ref); // This function takes an integer reference as an argument

int main() {
    int x = 10;

    std::cout << "Before function call, x = " << x << std::endl; // Prints: Before function call, x = 10

    // Function call
    modifyValue(x); // Pass variable x by reference to the function

    std::cout << "After function call, x = " << x << std::endl; // Prints: After function call, x = 20

    return 0;
}

// Function definition
void modifyValue(int &ref) {
    // Modifies the value of the variable passed by reference
    ref = 20;
}