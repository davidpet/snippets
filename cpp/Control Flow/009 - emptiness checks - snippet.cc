#include <iostream>
#include <vector>

int main() {
    // Declare an empty vector
    std::vector<int> vec;

    // Check if the vector is empty using the empty() function
    if (vec.empty()) {
        std::cout << "The vector is empty." << std::endl; // This will be printed
    } else {
        std::cout << "The vector is not empty." << std::endl;
    }

    // Add an element to the vector
    vec.push_back(1);

    // Check if the vector is empty again
    if (vec.empty()) {
        std::cout << "The vector is empty." << std::endl;
    } else {
        std::cout << "The vector is not empty." << std::endl; // This will be printed
    }

    // Declare an empty string
    std::string str;

    // Check if the string is empty using the empty() function
    if (str.empty()) {
        std::cout << "The string is empty." << std::endl; // This will be printed
    } else {
        std::cout << "The string is not empty." << std::endl;
    }

    // Add a character to the string
    str.push_back('a');

    // Check if the string is empty again
    if (str.empty()) {
        std::cout << "The string is empty." << std::endl;
    } else {
        std::cout << "The string is not empty." << std::endl; // This will be printed
    }

    return 0;
}