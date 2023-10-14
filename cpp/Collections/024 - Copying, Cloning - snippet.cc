Sure, here is a comprehensive example of copying/cloning collections in C++:

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Declare and initialize a vector
    std::vector<int> original = {1, 2, 3, 4, 5};

    // Copy the vector using the copy constructor
    std::vector<int> copy1(original);
    for(int i : copy1) {
        std::cout << i << " "; // Prints: 1 2 3 4 5
    }
    std::cout << std::endl;

    // Copy the vector using the assignment operator
    std::vector<int> copy2 = original;
    for(int i : copy2) {
        std::cout << i << " "; // Prints: 1 2 3 4 5
    }
    std::cout << std::endl;

    // Copy the vector using the assign function
    std::vector<int> copy3;
    copy3.assign(original.begin(), original.end());
    for(int i : copy3) {
        std::cout << i << " "; // Prints: 1 2 3 4 5
    }
    std::cout << std::endl;

    // Copy the vector using the std::copy function
    std::vector<int> copy4(original.size());
    std::copy(original.begin(), original.end(), copy4.begin());
    for(int i : copy4) {
        std::cout << i << " "; // Prints: 1 2 3 4 5
    }
    std::cout << std::endl;

    return 0;
}