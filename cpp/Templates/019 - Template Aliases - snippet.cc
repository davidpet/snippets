#include <iostream>
#include <vector>
#include <map>

// Template alias for a vector of integers
using VecOfInts = std::vector<int>;

// Template alias for a map from string to any type
template<typename T>
using StringMap = std::map<std::string, T>;

int main() {
    VecOfInts v = {1, 2, 3, 4, 5};
    for(int num : v) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    StringMap<int> ages;
    ages["Alice"] = 28;
    ages["Bob"] = 24;
    for(const auto& pair : ages) {
        std::cout << pair.first << " is " << pair.second << " years old." << std::endl;
    }
}
