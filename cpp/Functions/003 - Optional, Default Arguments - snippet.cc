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

int main() {
    // Calling function with default argument
    greet(); // Prints: Hello, User!
    greet("Alice"); // Prints: Hello, Alice!

    // Calling function with optional argument
    display("Bob"); // Prints: Hello, Bob!
    display("Charlie", 25); // Prints: Hello, Charlie! You are 25 years old.
    return 0;
}