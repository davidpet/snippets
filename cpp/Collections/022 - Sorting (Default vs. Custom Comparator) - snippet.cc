#include <iostream>
#include <vector>
#include <algorithm>

// Define a custom comparator function
bool customComparator(int a, int b) {
    return (a > b); // This will sort in descending order
}

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};

    // Use the default sort function, which sorts in ascending order
    std::sort(numbers.begin(), numbers.end());

    // Print the sorted vector
    for (int i : numbers) {
        std::cout << i << " ";
    }
    std::cout << std::endl; // Expected output: 1 2 5 5 6 9

    // Now use the custom comparator to sort in descending order
    std::sort(numbers.begin(), numbers.end(), customComparator);

    // Print the sorted vector
    for (int i : numbers) {
        std::cout << i << " ";
    }
    std::cout << std::endl; // Expected output: 9 6 5 5 2 1

    return 0;
}
