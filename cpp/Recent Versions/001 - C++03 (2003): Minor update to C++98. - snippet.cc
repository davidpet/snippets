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
