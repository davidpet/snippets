#include <iostream>

int main() {
    // Basic while loop
    int i = 0;
    while(i < 5) {
        std::cout << i << std::endl; // This will print numbers 0 to 4
        i++;
    }

    // While loop with break statement
    i = 0;
    while(true) {
        if(i == 5) {
            break; // This will break the loop when i equals 5
        }
        std::cout << i << std::endl; // This will print numbers 0 to 4
        i++;
    }

    // While loop with continue statement
    i = 0;
    while(i < 10) {
        i++;
        if(i % 2 == 0) {
            continue; // This will skip the rest of the loop for even numbers
        }
        std::cout << i << std::endl; // This will print odd numbers 1 to 9
    }

    // Nested while loops
    i = 0;
    int j = 0;
    while(i < 3) {
        while(j < 3) {
            std::cout << i << ", " << j << std::endl; // This will print pairs (i, j) where i and j are from 0 to 2
            j++;
        }
        j = 0;
        i++;
    }

    return 0;
}