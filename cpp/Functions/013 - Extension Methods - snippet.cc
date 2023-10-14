C++ does not natively support extension methods like some other languages (e.g., C#). However, you can achieve similar functionality using a combination of free functions and namespaces. Here's an example:

#include <iostream>
#include <string>

namespace StringExtensions {
    // This is a free function that acts like an extension method for std::string.
    // It checks if the string ends with a specific suffix.
    bool endsWith(const std::string& str, const std::string& suffix) {
        if (str.length() >= suffix.length()) {
            return (0 == str.compare(str.length() - suffix.length(), suffix.length(), suffix));
        } else {
            return false;
        }
    }
}

int main() {
    std::string testString = "Hello, World!";
    std::string suffix = "World!";
    
    // Use our "extension method"
    if (StringExtensions::endsWith(testString, suffix)) {
        std::cout << "The string ends with the suffix." << std::endl; // This will be printed
    } else {
        std::cout << "The string does not end with the suffix." << std::endl;
    }

    return 0;
}