Sure, here is a code snippet demonstrating some of the new features introduced in C++17:

#include <iostream>
#include <map>
#include <vector>

int main() {
    // Structured bindings
    std::pair<int, std::string> pair = {1, "C++17"};
    auto [num, str] = pair; // Structured binding
    std::cout << num << " " << str << std::endl; // Prints: 1 C++17

    // Structured bindings with map
    std::map<int, std::string> map = {{1, "one"}, {2, "two"}};
    for (const auto& [key, value] : map) {
        std::cout << key << " " << value << std::endl; // Prints: 1 one and 2 two
    }

    // constexpr if
    if constexpr (sizeof(int) == 4) {
        std::cout << "Int is 4 bytes" << std::endl; // Prints: Int is 4 bytes
    } else {
        std::cout << "Int is not 4 bytes" << std::endl;
    }

    // constexpr if in a template function
    template <typename T>
    auto get_value(T t) {
        if constexpr (std::is_same<T, std::vector<int>>::value) {
            return t[0]; // If T is a vector, return the first element
        } else {
            return t;
        }
    }

    std::cout << get_value(10) << std::endl; // Prints: 10
    std::cout << get_value(std::vector<int>{1, 2, 3}) << std::endl; // Prints: 1

    return 0;
}