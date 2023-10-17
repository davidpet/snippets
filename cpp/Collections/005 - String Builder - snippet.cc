#include <iostream>
#include <sstream> // Required for std::stringstream

int main() {
    // Declare a stringstream object
    std::stringstream ss;

    // Append strings to the stringstream
    ss << "Hello, ";
    ss << "World!";
    std::cout << ss.str() << std::endl; // Prints: Hello, World!

    // Clear the stringstream
    ss.str(std::string());

    // Append different types of data to the stringstream
    ss << "The answer is: " << 42;
    std::cout << ss.str() << std::endl; // Prints: The answer is: 42

    // Clear the stringstream
    ss.str("");

    // Append strings and numbers in a single line
    ss << "Pi is approximately " << 3.14159;
    std::cout << ss.str() << std::endl; // Prints: Pi is approximately 3.14159

    return 0;
}
