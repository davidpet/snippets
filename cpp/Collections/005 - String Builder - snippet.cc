In C++, there isn't a built-in "StringBuilder" class like in some other languages such as Java or C#. However, the functionality of a StringBuilder can be achieved using the `std::stringstream` class from the `<sstream>` library. This class provides a high-level interface for working with string streams, which can be used to efficiently concatenate and manipulate strings.

Here is a code snippet demonstrating the usage of `std::stringstream` as a StringBuilder:

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