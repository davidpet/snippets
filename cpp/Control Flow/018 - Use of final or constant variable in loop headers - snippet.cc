#include <iostream>

int main() {
    // Declare a constant integer
    const int constInt = 5;

    // Using a constant in a loop header
    for(int i = 0; i < constInt; i++) {
        std::cout << i << std::endl; // This will print numbers from 0 to 4
    }

    // Declare a final integer
    // Note: 'final' keyword is not used in C++ to declare final variables like in Java. 
    // In C++, once a variable is declared as 'const', it cannot be changed.
    const int finalInt = 3;

    // Using a final integer in a loop header
    for(int i = 0; i < finalInt; i++) {
        std::cout << i << std::endl; // This will print numbers from 0 to 2
    }

    return 0;
}