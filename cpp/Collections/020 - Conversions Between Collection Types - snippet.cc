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

    // 5. Array to Vector
    int arr4[] = {1, 2, 3, 4, 5};
    std::vector<int> vec4(arr4, arr4 + sizeof(arr4) / sizeof(int));

    for (int val : vec4) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    // Output: 1 2 3 4 5

    // 6. Vector to Array
    std::vector<int> vec5 = {1, 2, 3, 4, 5};
    int arr5[vec5.size()];
    std::copy(vec5.begin(), vec5.end(), arr5);

    for (size_t i = 0; i < vec5.size(); ++i) {
        std::cout << arr5[i] << " ";
    }
    std::cout << std::endl;
    // Output: 1 2 3 4 5

    return 0;
}
