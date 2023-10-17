#include <iostream>
#include <vector>
#include <algorithm> // for std::copy

int main() {
    // Declare and initialize a vector
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Define the start and end iterators for the slice
    std::vector<int>::iterator start = vec.begin() + 2; // 3rd element
    std::vector<int>::iterator end = vec.begin() + 5; // 6th element

    // Create a new vector to hold the slice
    std::vector<int> slice(end - start);

    // Copy the elements from the original vector to the slice
    std::copy(start, end, slice.begin());

    // Print the elements of the slice
    for (int i : slice) {
        std::cout << i << " "; // Expected output: 3 4 5
    }
    std::cout << std::endl;

    // Direct slicing (unique to C++)
    int original[] = {1, 2, 3, 4, 5};
    int *slicePtr = original+2;
    for (int i = 0; i < 2; i++) {
        std::cout << slicePtr[i] << std::endl; // Expected output: 3 4
    }

    return 0;
}
