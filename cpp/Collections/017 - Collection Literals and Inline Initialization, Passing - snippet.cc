#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <array>

int main() {
    // Inline initialization of a vector
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for (int i : vec) {
        std::cout << i << " "; // Prints: 1 2 3 4 5
    }
    std::cout << std::endl;

    // Inline initialization of a map
    std::map<std::string, int> map = {{"apple", 1}, {"banana", 2}, {"cherry", 3}};
    for (auto& kv : map) {
        std::cout << kv.first << ": " << kv.second << ", "; // Prints: apple: 1, banana: 2, cherry: 3,
    }
    std::cout << std::endl;

    // Inline initialization of a set
    std::set<int> set = {5, 4, 3, 2, 1};
    for (int i : set) {
        std::cout << i << " "; // Prints: 1 2 3 4 5
    }
    std::cout << std::endl;

    // Inline initialization of an array
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    for (int i : arr) {
        std::cout << i << " "; // Prints: 1 2 3 4 5
    }
    std::cout << std::endl;

    return 0;
}
