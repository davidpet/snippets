Sure, here is a comprehensive code snippet demonstrating the subtopic "Iterating Keys vs. Values" in C++.

#include <iostream>
#include <map>

int main() {
    // Declare and initialize a map
    std::map<std::string, int> myMap = {{"apple", 1}, {"banana", 2}, {"cherry", 3}};

    // Iterating over keys
    std::cout << "Iterating over keys:\n";
    for (const auto& keyValuePair : myMap) {
        std::cout << keyValuePair.first << '\n';  // Prints the key
    }
    // Expected output:
    // apple
    // banana
    // cherry

    // Iterating over values
    std::cout << "\nIterating over values:\n";
    for (const auto& keyValuePair : myMap) {
        std::cout << keyValuePair.second << '\n';  // Prints the value
    }
    // Expected output:
    // 1
    // 2
    // 3

    // Iterating over keys and values
    std::cout << "\nIterating over keys and values:\n";
    for (const auto& keyValuePair : myMap) {
        std::cout << keyValuePair.first << ": " << keyValuePair.second << '\n';  // Prints the key and value
    }
    // Expected output:
    // apple: 1
    // banana: 2
    // cherry: 3

    return 0;
}