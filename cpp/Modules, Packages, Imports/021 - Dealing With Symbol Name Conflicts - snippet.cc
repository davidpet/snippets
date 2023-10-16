// Include the standard library
#include <iostream>

// Define a namespace called 'first'
namespace first {
    int var = 5;
}

// Define a namespace called 'second'
namespace second {
    double var = 3.1416;
}

int main() {
    // Declare a variable with the same name 'var' in the main function
    int var = 10;

    // Print the 'var' in the main function
    std::cout << "var in main: " << var << std::endl; // Expected output: var in main: 10

    // Print the 'var' in the 'first' namespace
    std::cout << "var in first namespace: " << first::var << std::endl; // Expected output: var in first namespace: 5

    // Print the 'var' in the 'second' namespace
    std::cout << "var in second namespace: " << second::var << std::endl; // Expected output: var in second namespace: 3.1416

    return 0;
}
