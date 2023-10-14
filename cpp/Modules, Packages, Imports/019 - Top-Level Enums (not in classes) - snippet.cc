In C++, enums are a way of creating a new type that can have a set of predefined values. They are not typically considered as top-level constructs, but they can be defined at the namespace level, which is the closest equivalent to a top-level construct in C++. Here is an example:

#include <iostream>

// Define a top-level enum
enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    // Use the top-level enum
    Color myColor = BLUE;

    // Print the value of the enum
    std::cout << myColor << std::endl; // This will print: 2

    // Enums can also be used in switch statements
    switch(myColor) {
        case RED:
            std::cout << "Color is Red" << std::endl;
            break;
        case GREEN:
            std::cout << "Color is Green" << std::endl;
            break;
        case BLUE:
            std::cout << "Color is Blue" << std::endl; // This will print: Color is Blue
            break;
    }

    return 0;
}