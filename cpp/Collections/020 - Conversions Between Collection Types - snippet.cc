Sure, here is a code snippet demonstrating conversions between different collection types in C++:

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <algorithm>

int main() {
    // 1. Converting vector to set
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::set<int> set(vec.begin(), vec.end());

    // Print the set
    for (int i : set) {
        std::cout << i << " ";
    }
    std::cout << std::endl; // Expected: 1 2 3 4 5 6 7 8 9 10

    // 2. Converting set to list
    std::list<int> list(set.begin(), set.end());

    // Print the list
    for (int i : list) {
        std::cout << i << " ";
    }
    std::cout << std::endl; // Expected: 1 2 3 4 5 6 7 8 9 10

    // 3. Converting list to vector
    std::vector<int> vec2(list.begin(), list.end());

    // Print the vector
    for (int i : vec2) {
        std::cout << i << " ";
    }
    std::cout << std::endl; // Expected: 1 2 3 4 5 6 7 8 9 10

    // 4. Converting map to vector of pairs
    std::map<int, std::string> map = {{1, "one"}, {2, "two"}, {3, "three"}};
    std::vector<std::pair<int, std::string>> vec3(map.begin(), map.end());

    // Print the vector of pairs
    for (auto& pair : vec3) {
        std::cout << pair.first << ": " << pair.second << ", ";
    }
    std::cout << std::endl; // Expected: 1: one, 2: two, 3: three,

    return 0;
}