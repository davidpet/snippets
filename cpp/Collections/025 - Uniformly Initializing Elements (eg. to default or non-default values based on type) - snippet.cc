#include <iostream>
#include <vector>
#include <array>

int main() {
    // Uniform initialization can be used with C++ collections like vector and array.
    // Here we initialize a vector with default values.
    std::vector<int> vec1(5); // Creates a vector of size 5, all elements initialized to 0
    for (const auto& elem : vec1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl; // Expected output: 0 0 0 0 0

    // We can also initialize a vector with non-default values.
    std::vector<int> vec2{1, 2, 3, 4, 5}; // Creates a vector and initializes it with the given values
    for (const auto& elem : vec2) {
        std::cout << elem << " ";
    }
    std::cout << std::endl; // Expected output: 1 2 3 4 5

    // Similarly, we can initialize an array with default values.
    std::array<int, 5> arr1{}; // Creates an array of size 5, all elements initialized to 0
    for (const auto& elem : arr1) {
        std::cout << elem << " ";
    }
    std::cout << std::endl; // Expected output: 0 0 0 0 0

    // And we can initialize an array with non-default values.
    std::array<int, 5> arr2{1, 2, 3, 4, 5}; // Creates an array and initializes it with the given values
    for (const auto& elem : arr2) {
        std::cout << elem << " ";
    }
    std::cout << std::endl; // Expected output: 1 2 3 4 5

    return 0;
}