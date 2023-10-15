#include <iostream>
#include <stdexcept>

// This function is declared to throw no exceptions
void noThrow() noexcept {
    std::cout << "This function is declared to throw no exceptions." << std::endl;
}

// This function is declared to throw any type of exception
void anyThrow() {
    std::cout << "This function can throw any type of exception." << std::endl;
    throw std::runtime_error("Runtime error thrown from anyThrow()");
}

// This function is declared to throw a specific type of exception
// ILLEGAL in latest versions of C++
/*void specificThrow() throw(std::runtime_error) {
    std::cout << "This function can throw a specific type of exception." << std::endl;
    throw std::runtime_error("Runtime error thrown from specificThrow()");
}*/

int main() {
    try {
        noThrow();
        anyThrow();
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
/*
    try {
        specificThrow();
    } catch (const std::runtime_error& e) {
        std::cout << "Caught specific exception: " << e.what() << std::endl;
    }*/

    return 0;
}