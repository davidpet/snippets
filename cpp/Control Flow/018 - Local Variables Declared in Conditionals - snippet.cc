#include <iostream>

int main() {
    // Declaring Variable in 'if'
    int x = 1;
    if (int y = x * 2) {
        // This only prints because y is not zero
        std::cout << y << std::endl;
    }
    // std::cout << y << std::endl; // ILLEGAL

    // C++20 if-init construct
    if (int y = x * 2; y % 2 == 0) {
        // This only prints because y is even!
        std::cout << y << std::endl;
    }

    return 0;
}
