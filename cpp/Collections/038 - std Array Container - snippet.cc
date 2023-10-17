#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    std::cout << "Size: " << arr.size() << std::endl; // Outputs: 5

    // Accessing elements
    std::cout << "Third element: " << arr[2] << std::endl; // Outputs: 3

    // Using .at() for bounds-checked access
    try {
        std::cout << arr.at(7); // This will throw an exception
    } catch(const std::out_of_range& e) {
        std::cout << "Out of range error: " << e.what() << std::endl; // Outputs the error message
    }

    // Iterating over elements
    for (int val : arr) {
        std::cout << val << " ";
    } // Outputs: 1 2 3 4 5
    return 0;
}
