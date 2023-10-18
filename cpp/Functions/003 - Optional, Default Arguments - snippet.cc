#include <iostream>

// Function with default arguments
void greet(std::string name = "User") {
    std::cout << "Hello, " << name << "!" << std::endl;
}

// Function with optional arguments
void display(std::string name, int age = 0) {
    if(age != 0) {
        std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;
    } else {
        std::cout << "Hello, " << name << "!" << std::endl;
    }
}

// Function to compute at runtime
int f(int x) {
    return x * x;
}

// Function to use a runtime computed default
int g(int x = f(10)) {
    return x * x;
}

int main() {
    // Calling function with default argument
    greet(); // Prints: Hello, User!
    greet("Alice"); // Prints: Hello, Alice!

    // Calling function with optional argument
    display("Bob"); // Prints: Hello, Bob!
    display("Charlie", 25); // Prints: Hello, Charlie! You are 25 years old.

    // Calling function with runtime computed optional argument
    std::cout << g() << std::endl;

    return 0;
}