Sure, here is a comprehensive example of using "for loops" in C++:

#include <iostream>
#include <vector>

int main() {
    // Basic for loop
    for (int i = 0; i < 5; i++) {
        std::cout << i << "\n"; // Prints numbers from 0 to 4
    }

    // For loop with multiple initialization
    for (int i = 0, j = 10; i < 5; i++, j+=10) {
        std::cout << i << ", " << j << "\n"; // Prints pairs (0,10), (1,20), ..., (4,50)
    }

    // For loop without initialization and increment
    int i = 0;
    for (; i < 5;) {
        std::cout << i << "\n"; // Prints numbers from 0 to 4
        i++;
    }

    // For loop with a break statement
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            break; // Exits the loop when i equals 3
        }
        std::cout << i << "\n"; // Prints numbers from 0 to 2
    }

    // For loop with a continue statement
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            continue; // Skips the current iteration when i equals 3
        }
        std::cout << i << "\n"; // Prints numbers from 0 to 2 and 4
    }

    // Range-based for loop
    std::vector<int> nums = {1, 2, 3, 4, 5};
    for (int num : nums) {
        std::cout << num << "\n"; // Prints numbers from 1 to 5
    }

    // Range-based for loop with auto keyword
    for (auto num : nums) {
        std::cout << num << "\n"; // Prints numbers from 1 to 5
    }

    // Range-based for loop with reference
    for (int& num : nums) {
        num *= 2; // Doubles each number in the vector
    }
    for (auto num : nums) {
        std::cout << num << "\n"; // Prints numbers 2, 4, 6, 8, 10
    }

    return 0;
}