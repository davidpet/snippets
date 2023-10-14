Sure, here is a code snippet demonstrating the shuffling of collections in C++:

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    // Initialize a vector with integers from 1 to 10
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Print the original vector
    for (int i : numbers) {
        std::cout << i << " ";
    }
    std::cout << std::endl; // Expected: 1 2 3 4 5 6 7 8 9 10

    // Shuffle the vector using std::shuffle
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(numbers.begin(), numbers.end(), g);

    // Print the shuffled vector
    for (int i : numbers) {
        std::cout << i << " ";
    }
    std::cout << std::endl; // Expected: The numbers 1-10 in a random order

    return 0;
}