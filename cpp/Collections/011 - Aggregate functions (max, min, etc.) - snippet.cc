#include <iostream>
#include <vector>
#include <algorithm> // Required for min, max and other aggregate functions

int main() {
    // Declare a vector of integers
    std::vector<int> numbers = {5, 3, 9, 1, 6, 4};

    // Use the max_element function to find the maximum element in the vector
    // max_element returns an iterator pointing to the maximum element
    auto maxElement = std::max_element(numbers.begin(), numbers.end());
    std::cout << "Max Element = " << *maxElement << std::endl; // Expected output: Max Element = 9

    // Use the min_element function to find the minimum element in the vector
    // min_element returns an iterator pointing to the minimum element
    auto minElement = std::min_element(numbers.begin(), numbers.end());
    std::cout << "Min Element = " << *minElement << std::endl; // Expected output: Min Element = 1

    // Use the accumulate function to find the sum of all elements in the vector
    // accumulate takes a range and an initial value for the sum
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum = " << sum << std::endl; // Expected output: Sum = 28

    // Use the count function to count the occurrences of a specific element in the vector
    // count takes a range and the element to count
    int count = std::count(numbers.begin(), numbers.end(), 4);
    std::cout << "Count of 4 = " << count << std::endl; // Expected output: Count of 4 = 1

    return 0;
}