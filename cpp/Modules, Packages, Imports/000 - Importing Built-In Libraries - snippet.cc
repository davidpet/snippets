// Importing Built-In Libraries in C++

// To use a library in C++, we use the #include directive. This directive tells the preprocessor to 
// include the contents of the file specified in the directive. The file can be a standard library 
// or a user-defined header file.

// Importing the iostream library, which provides facilities for input/output operations
#include <iostream> 

// Importing the cmath library, which declares a set of functions to perform mathematical operations
#include <cmath> 

// Importing the string library, which introduces string types
#include <string> 

int main() {
    // Using the std::cout object from the iostream library to print to the console
    std::cout << "Hello, World!" << std::endl; // Expected output: Hello, World!

    // Using the pow function from the cmath library to calculate the power of a number
    double base = 2.0;
    double exponent = 3.0;
    double result = std::pow(base, exponent);
    std::cout << base << " raised to the power of " << exponent << " is " << result << std::endl; 
    // Expected output: 2 raised to the power of 3 is 8

    // Using the std::string type from the string library
    std::string greeting = "Hello, C++!";
    std::cout << greeting << std::endl; // Expected output: Hello, C++!

    return 0;
}