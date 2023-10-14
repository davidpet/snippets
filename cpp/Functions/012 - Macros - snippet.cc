#include <iostream>

// Macros in C++ are defined by #define directive. 
// The #define directive is used to define the identifier that would be replaced by a text string.
#define PI 3.14159

// Macros can also be defined to take parameters.
#define MIN(a,b) ((a)<(b)?(a):(b))

// Macros can be multiline using the '\' character.
#define PRINT_HELLO_WORLD \
    std::cout << "Hello, World!" << std::endl;

// Macros can also be undefined using #undef directive.
#define TEMP 100
#undef TEMP

// Macros can be conditionally defined using #ifdef, #ifndef, #if, #else, #elif and #endif directives.
#ifndef TEMP
#define TEMP 200
#endif

int main() {
    // Using the PI macro
    std::cout << "Value of PI: " << PI << std::endl; // Expected output: Value of PI: 3.14159

    // Using the MIN macro
    int x = 10, y = 20;
    std::cout << "Minimum of " << x << " and " << y << " is: " << MIN(x, y) << std::endl; // Expected output: Minimum of 10 and 20 is: 10

    // Using the PRINT_HELLO_WORLD macro
    PRINT_HELLO_WORLD // Expected output: Hello, World!

    // Using the TEMP macro
    std::cout << "Value of TEMP: " << TEMP << std::endl; // Expected output: Value of TEMP: 200

    return 0;
}