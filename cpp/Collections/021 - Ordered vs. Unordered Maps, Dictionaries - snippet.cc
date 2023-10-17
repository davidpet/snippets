#include <iostream>
#include <map>
#include <unordered_map>

int main() {
    // Ordered map
    std::map<int, std::string> orderedMap;

    // Insert elements into the ordered map
    orderedMap[5] = "five";
    orderedMap[3] = "three";
    orderedMap[4] = "four";
    orderedMap[1] = "one";
    orderedMap[2] = "two";

    std::cout << "Ordered map:" << std::endl;
    for (const auto& pair : orderedMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    } // This will print: 1: one, 2: two, 3: three, 4: four, 5: five

    // Unordered map
    std::unordered_map<int, std::string> unorderedMap;

    // Insert elements into the unordered map
    unorderedMap[5] = "five";
    unorderedMap[3] = "three";
    unorderedMap[4] = "four";
    unorderedMap[1] = "one";
    unorderedMap[2] = "two";

    std::cout << "Unordered map:" << std::endl;
    for (const auto& pair : unorderedMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    } // This will print the elements in an arbitrary order

    return 0;
}
