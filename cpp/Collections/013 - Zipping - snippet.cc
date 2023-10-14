In C++, there isn't a built-in function to zip collections like in some other languages. However, you can achieve similar functionality using iterators and the STL library. Here's an example of how you can "zip" two vectors together:

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Declare two vectors
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<char> vec2 = {'a', 'b', 'c', 'd', 'e'};

    // Ensure both vectors have the same size
    if (vec1.size() != vec2.size()) {
        std::cout << "Vectors are of unequal size" << std::endl;
        return 1;
    }

    // "Zip" the vectors together and print the result
    for (std::vector<int>::size_type i = 0; i != vec1.size(); i++) {
        std::cout << vec1[i] << ", " << vec2[i] << std::endl; // Prints pairs like "1, a"
    }

    return 0;
}