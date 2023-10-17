#include <iostream>
#include <sstream>

int main() {
    // Create a stringstream object
    std::stringstream ss;

    // Append strings to the stringstream
    ss << "Hello, ";
    ss << "World!";
    // Print the contents of the stringstream
    std::cout << ss.str() << std::endl; // Expected output: Hello, World!

    // Clear the stringstream
    ss.str(std::string());

    // Append a string and an integer
    ss << "The answer is " << 42;
    std::cout << ss.str() << std::endl; // Expected output: The answer is 42

    // Clear the stringstream
    ss.str("");

    // Append a string, a float, and another string
    ss << "Pi is approximately " << 3.14159 << ".";
    std::cout << ss.str() << std::endl; // Expected output: Pi is approximately 3.14159.

    // String itself is a string builder
    std::string s = "Hello, ";
    s.append("world!");
    std::cout << s << std::endl; // Hello, world!

    return 0;
}