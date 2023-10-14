In C++, there are no specific "Collection Operators" like in some other languages such as Python or Swift. However, C++ provides a rich set of libraries for collection data types such as arrays, vectors, lists, sets, and maps. These collections can be manipulated using various functions and operators. Here, we will demonstrate the usage of some of these operators and functions on a vector, which is a dynamic array in C++.

#include <iostream>
#include <vector>

int main() {
    // Declare a vector
    std::vector<int> vec;

    // Use the push_back function to add elements to the vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // Use the [] operator to access elements
    std::cout << vec[0] << std::endl; // prints: 1
    std::cout << vec[1] << std::endl; // prints: 2
    std::cout << vec[2] << std::endl; // prints: 3

    // Use the size function to get the number of elements
    std::cout << vec.size() << std::endl; // prints: 3

    // Use the front function to get the first element
    std::cout << vec.front() << std::endl; // prints: 1

    // Use the back function to get the last element
    std::cout << vec.back() << std::endl; // prints: 3

    // Use the pop_back function to remove the last element
    vec.pop_back();
    std::cout << vec.size() << std::endl; // prints: 2

    // Use the clear function to remove all elements
    vec.clear();
    std::cout << vec.size() << std::endl; // prints: 0

    return 0;
}