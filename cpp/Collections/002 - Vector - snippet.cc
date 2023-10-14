#include <iostream>
#include <vector>

int main() {
    // 1. Declaring a vector
    std::vector<int> vec1;

    // 2. Initializing a vector with values
    std::vector<int> vec2 = {1, 2, 3, 4, 5};

    // 3. Accessing elements
    std::cout << "First element of vec2: " << vec2[0] << std::endl; // prints 1
    std::cout << "Second element of vec2: " << vec2.at(1) << std::endl; // prints 2

    // 4. Modifying elements
    vec2[0] = 10;
    vec2.at(1) = 20;
    std::cout << "First element of vec2 after modification: " << vec2[0] << std::endl; // prints 10
    std::cout << "Second element of vec2 after modification: " << vec2.at(1) << std::endl; // prints 20

    // 5. Adding elements
    vec1.push_back(100);
    std::cout << "First element of vec1 after adding: " << vec1[0] << std::endl; // prints 100

    // 6. Removing elements
    vec2.pop_back();
    std::cout << "Size of vec2 after removing: " << vec2.size() << std::endl; // prints 4

    // 7. Checking if vector is empty
    std::cout << "Is vec1 empty? " << vec1.empty() << std::endl; // prints 0 (false)

    // 8. Getting the size of the vector
    std::cout << "Size of vec2: " << vec2.size() << std::endl; // prints 4

    // 9. Clearing the vector
    vec1.clear();
    std::cout << "Size of vec1 after clearing: " << vec1.size() << std::endl; // prints 0

    return 0;
}