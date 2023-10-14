C++03 is a minor update to C++98, so there are no new features introduced in this version. However, it includes several bug fixes and performance improvements. Here is a simple code snippet in C++03:

#include <iostream>
#include <vector>

// Function to print a vector
void printVector(const std::vector<int>& vec) {
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Create a vector
    std::vector<int> vec;
    
    // Add elements to the vector
    vec.push_back(1); // Adds 1 to the vector
    vec.push_back(2); // Adds 2 to the vector
    vec.push_back(3); // Adds 3 to the vector

    // Print the vector
    printVector(vec); // Prints: 1 2 3

    return 0;
}