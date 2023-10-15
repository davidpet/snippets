#include <iostream>

// Define a class with a call operator
class CallableClass {
public:
    // This is the call operator
    void operator() (const std::string& message) const {
        std::cout << "CallableClass: " << message << std::endl;
    }
};

// Define another class with a call operator that takes no arguments
class CallableClassNoArgs {
public:
    // This is the call operator
    void operator() () const {
        std::cout << "CallableClassNoArgs called" << std::endl;
    }
};

// Define yet another class with a call operator that takes multiple arguments
class CallableClassMultipleArgs {
public:
    // This is the call operator
    void operator() (const std::string& message, int times) const {
        for (int i = 0; i < times; ++i) {
            std::cout << "CallableClassMultipleArgs: " << message << std::endl;
        }
    }
};

int main() {
    CallableClass callable;
    callable("Hello, world!"); // prints: CallableClass: Hello, world!

    CallableClassNoArgs callableNoArgs;
    callableNoArgs(); // prints: CallableClassNoArgs called

    CallableClassMultipleArgs callableMultipleArgs;
    callableMultipleArgs("Hello, again!", 3); // prints: CallableClassMultipleArgs: Hello, again! three times
}