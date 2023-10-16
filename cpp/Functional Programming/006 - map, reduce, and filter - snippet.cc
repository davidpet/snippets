#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// Define a function to be used with std::transform (map)
int square(int i) {
    return i * i;
}

// Define a function to be used with std::accumulate (reduce)
int add(int a, int b) {
    return a + b;
}

// Define a function to be used with std::copy_if (filter)
bool is_even(int i) {
    return i % 2 == 0;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Map: Apply a function to each element in the collection
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), square);
    for (int i : numbers) {
        std::cout << i << " "; // Prints: 1 4 9 16 25
    }
    std::cout << std::endl;

    // Reduce: Combine all elements in the collection using a binary operation
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0, add);
    std::cout << sum << std::endl; // Prints: 55

    // Filter: Copy elements that satisfy a condition
    std::vector<int> even_numbers;
    std::copy_if(numbers.begin(), numbers.end(), std::back_inserter(even_numbers), is_even);
    for (int i : even_numbers) {
        std::cout << i << " "; // Prints: 4 16
    }
    std::cout << std::endl;

    return 0;
}
