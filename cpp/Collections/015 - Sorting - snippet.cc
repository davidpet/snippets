#include <iostream> // for output
#include <vector>   // for vector
#include <algorithm> // for sort
#include <list>     // for list
#include <array>    // for array

// Function to print a collection
template <typename T>
void printCollection(T begin, T end) {
    for (T i = begin; i != end; ++i)
        std::cout << *i << " ";
    std::cout << std::endl;
}

int main() {
    // Sorting a vector
    std::vector<int> vec = {5, 3, 1, 4, 2};
    std::sort(vec.begin(), vec.end());
    printCollection(vec.begin(), vec.end()); // Expected output: 1 2 3 4 5

    // Sorting a list
    std::list<int> lst = {5, 3, 1, 4, 2};
    lst.sort();
    printCollection(lst.begin(), lst.end()); // Expected output: 1 2 3 4 5

    // Sorting an array
    std::array<int, 5> arr = {5, 3, 1, 4, 2};
    std::sort(arr.begin(), arr.end());
    printCollection(arr.begin(), arr.end()); // Expected output: 1 2 3 4 5

    // Sorting in descending order
    std::sort(vec.begin(), vec.end(), std::greater<int>());
    printCollection(vec.begin(), vec.end()); // Expected output: 5 4 3 2 1

    return 0;
}
