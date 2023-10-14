#include <iostream>

int main() {
    // Single statement after control flow, braces are optional
    if (true)
        std::cout << "This will print" << std::endl; // This will print

    // Multiple statements after control flow, braces are required
    if (true) {
        std::cout << "This will also print" << std::endl; // This will also print
        std::cout << "And this too" << std::endl; // And this too
    }

    // For loop with single statement, braces are optional
    for (int i = 0; i < 1; i++)
        std::cout << "This will print once" << std::endl; // This will print once

    // For loop with multiple statements, braces are required
    for (int i = 0; i < 1; i++) {
        std::cout << "This will print once" << std::endl; // This will print once
        std::cout << "And this too" << std::endl; // And this too
    }

    // While loop with single statement, braces are optional
    int j = 0;
    while (j < 1)
        std::cout << "This will print once" << std::endl; // This will print once
        j++;

    // While loop with multiple statements, braces are required
    j = 0;
    while (j < 1) {
        std::cout << "This will print once" << std::endl; // This will print once
        std::cout << "And this too" << std::endl; // And this too
        j++;
    }

    return 0;
}