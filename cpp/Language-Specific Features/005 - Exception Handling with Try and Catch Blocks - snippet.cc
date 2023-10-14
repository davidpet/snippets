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
    // Basic try-catch block
    try {
        // Throw an integer
        throw 10;
    } catch(int e) {
        std::cout << "An exception occurred. Exception Nr. " << e << '\n'; // Expected output: "An exception occurred. Exception Nr. 10"
    }

    // Catching multiple exception types
    try {
        // Throw a standard exception
        throw std::runtime_error("A runtime error occurred");
    } catch(const std::runtime_error& e) {
        std::cout << "Caught a runtime_error exception: " << e.what() << '\n'; // Expected output: "Caught a runtime_error exception: A runtime error occurred"
    } catch(const std::exception& e) {
        // This will catch any exception not caught by more specific catch blocks
        std::cout << "Caught an exception of an unexpected type: " << e.what() << '\n';
    }

    // Using a custom exception
    try {
        // Throw a custom exception
        throw MyException();
    } catch(const MyException& e) {
        std::cout << "Caught a MyException: " << e.what() << '\n'; // Expected output: "Caught a MyException: MyException occurred"
    } catch(...) {
        // This will catch any type of exception
        std::cout << "Caught an unknown exception" << '\n';
    }

    return 0;
}