// Include the necessary libraries
#include <iostream> // for console I/O operations

int main() {
    // Output to console
    std::cout << "Hello, World!" << std::endl; // prints "Hello, World!"

    // Input from console
    std::string name;
    std::cout << "Enter your name: "; // prints "Enter your name: "
    std::cin >> name; // waits for user input

    // Print the entered name
    std::cout << "Your name is " << name << std::endl; // prints "Your name is [entered name]"

    // Demonstrate getline for input with spaces
    std::string fullName;
    std::cout << "Enter your full name: "; // prints "Enter your full name: "
    std::cin.ignore(); // ignores the newline character in the input stream
    std::getline(std::cin, fullName); // gets the full line of input including spaces

    // Print the entered full name
    std::cout << "Your full name is " << fullName << std::endl; // prints "Your full name is [entered full name]"

    // Demonstrate cerr and clog
    std::cerr << "This is an error message" << std::endl; // prints "This is an error message" to the standard error
    std::clog << "This is a log message" << std::endl; // prints "This is a log message" to the standard log

    return 0;
}
