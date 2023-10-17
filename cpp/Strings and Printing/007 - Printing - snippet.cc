#include <iostream> // Include the I/O stream library
#include <iomanip>

int main() {
    // Basic printing
    std::cout << "Hello, World!" << std::endl; // Prints: Hello, World!

    // Printing a variable
    int num = 10;
    std::cout << "The number is: " << num << std::endl; // Prints: The number is: 10

    // Printing multiple variables
    std::string str = "C++";
    std::cout << "I am learning " << str << " and the number is still: " << num << std::endl; // Prints: I am learning C++ and the number is still: 10

    // Printing with formatting
    std::cout << "Formatted number: " << std::setw(10) << num << std::endl; // Prints: Formatted number:         10

    // Printing a boolean value
    bool isTrue = true;
    std::cout << std::boolalpha << "The statement is: " << isTrue << std::endl; // Prints: The statement is: true

    // Printing a character
    char ch = 'A';
    std::cout << "The character is: " << ch << std::endl; // Prints: The character is: A

    // Printing a floating point number with precision
    double pi = 3.14159;
    std::cout << "Pi to 2 decimal places: " << std::setprecision(3) << pi << std::endl; // Prints: Pi to 2 decimal places: 3.14

    return 0;
}
