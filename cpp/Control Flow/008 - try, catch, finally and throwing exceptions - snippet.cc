#include <iostream>
#include <stdexcept>

// Define a custom exception class
class MyException : public std::exception {
public:
    const char* what() const throw() {
        return "MyException occurred";
    }
};

int main() {
    try {
        // Throw an integer
        throw 20;
    } catch(int e) {
        std::cout << "An exception occurred. Exception Nr. " << e << '\n'; // Expected to print: An exception occurred. Exception Nr. 20
    }

    try {
        // Throw a character
        throw 'a';
    } catch(char e) {
        std::cout << "An exception occurred. Exception Char. " << e << '\n'; // Expected to print: An exception occurred. Exception Char. a
    }

    try {
        // Throw a standard exception
        throw std::runtime_error("Standard exception");
    } catch(std::exception& e) {
        std::cout << "An exception occurred: " << e.what() << '\n'; // Expected to print: An exception occurred: Standard exception
    }

    try {
        // Throw a custom exception
        throw MyException();
    } catch(MyException& e) {
        std::cout << "An exception occurred: " << e.what() << '\n'; // Expected to print: An exception occurred: MyException occurred
    }

    return 0;
}