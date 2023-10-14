#include <iostream>

// Function with positional arguments
void greet(std::string name, int age) {
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;
}

// Function with default positional arguments
void greetWithDefault(std::string name = "Guest", int age = 25) {
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;
}

// Function with multiple positional arguments of the same type
void printNumbers(int num1, int num2, int num3) {
    std::cout << "The numbers are " << num1 << ", " << num2 << ", and " << num3 << "." << std::endl;
}

int main() {
    // Calling function with positional arguments
    greet("John", 30); // Expected output: Hello, John! You are 30 years old.

    // Calling function with default positional arguments
    greetWithDefault(); // Expected output: Hello, Guest! You are 25 years old.

    // Calling function with multiple positional arguments of the same type
    printNumbers(5, 10, 15); // Expected output: The numbers are 5, 10, and 15.
    
    return 0;
}