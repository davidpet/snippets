#include <iostream>
#include <string>

int main() {
    // Declare and initialize a string
    std::string str = "Hello, World!";
    std::cout << str << std::endl; // Prints: Hello, World!

    // Get the length of the string
    std::cout << str.length() << std::endl; // Prints: 13

    // Get a specific character from the string
    std::cout << str[0] << std::endl; // Prints: H

    // Change a specific character in the string
    str[0] = 'h';
    std::cout << str << std::endl; // Prints: hello, World!

    // Append to the string
    str += " How are you?";
    std::cout << str << std::endl; // Prints: hello, World! How are you?

    // Find a substring in the string
    std::size_t found = str.find("World");
    if (found != std::string::npos)
        std::cout << "World found at: " << found << std::endl; // Prints: World found at: 7

    // Replace a substring in the string
    str.replace(str.find("World"), 5, "C++");
    std::cout << str << std::endl; // Prints: hello, C++! How are you?

    // Insert into the string
    str.insert(0, "Hey, ");
    std::cout << str << std::endl; // Prints: Hey, hello, C++! How are you?

    // Erase part of the string
    str.erase(0, 5);
    std::cout << str << std::endl; // Prints: hello, C++! How are you?

    // Compare strings
    std::string str2 = "Hello, C++! How are you?";
    if (str.compare(str2) == 0)
        std::cout << "Strings are equal" << std::endl; // This won't print because the strings are not equal

    return 0;
}