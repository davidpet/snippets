#include <iostream>
#include <vector>
#include <algorithm>

// Define a custom comparator for sorting integers in descending order
struct DescendingOrder {
    bool operator()(int a, int b) {
        return a > b;
    }
};

// Define a custom comparator for sorting integers in ascending order
struct AscendingOrder {
    bool operator()(int a, int b) {
        return a < b;
    }
};

// Define a template function that sorts a vector using a custom comparator
template <typename T, typename Comparator>
void sortVector(std::vector<T>& vec, Comparator comp) {
    std::sort(vec.begin(), vec.end(), comp);
}

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 9, 3};

    // Sort the vector in descending order using the custom comparator
    sortVector(numbers, DescendingOrder());
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected output: 9 8 5 3 2 1

    // Sort the vector in ascending order using the custom comparator
    sortVector(numbers, AscendingOrder());
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected output: 1 2 3 5 8 9

    return 0;
}