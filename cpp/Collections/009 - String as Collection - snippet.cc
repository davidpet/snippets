Sure, here is a comprehensive code snippet demonstrating the use of strings as collections in C++:

#include <iostream>
#include <string>

int main() {
    // Declare a string
    std::string str = "Hello, World!";
    
    // Strings can be treated as a collection of characters
    // Access individual characters using array-like syntax
    std::cout << str[0] << std::endl; // prints 'H'
    std::cout << str[7] << std::endl; // prints 'W'
    
    // Use .at() method to access individual characters
    std::cout << str.at(0) << std::endl; // prints 'H'
    std::cout << str.at(7) << std::endl; // prints 'W'
    
    // Use .front() and .back() to access the first and last characters
    std::cout << str.front() << std::endl; // prints 'H'
    std::cout << str.back() << std::endl; // prints '!'

    // Iterate over the string using a range-based for loop
    for (char c : str) {
        std::cout << c << ' ';
    }
    std::cout << std::endl; // prints 'H e l l o ,   W o r l d !'

    // Use .begin() and .end() to get iterators to the start and end of the string
    for (auto it = str.begin(); it != str.end(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl; // prints 'H e l l o ,   W o r l d !'

    // Use .rbegin() and .rend() to iterate in reverse
    for (auto it = str.rbegin(); it != str.rend(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << std::endl; // prints '! d l r o W   , o l l e H'
    
    return 0;
}