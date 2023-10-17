#include <iostream>
#include <map>

int main() {
    // Declare a map (dictionary) with string keys and int values
    std::map<std::string, int> myMap; // ordered map - use unordered_map if want O(1)

    // Insert key-value pairs into the map
    myMap["apple"] = 1;
    myMap["banana"] = 2;
    myMap["cherry"] = 3;

    // Print the value associated with the key "banana"
    std::cout << myMap["banana"] << std::endl; // Expected output: 2

    // Iterate over the map and print all key-value pairs
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    // Expected output:
    // apple: 1
    // banana: 2
    // cherry: 3

    // Check if a key exists in the map
    if (myMap.find("apple") != myMap.end()) {
        std::cout << "Key 'apple' found" << std::endl; // Expected output: Key 'apple' found
    } else {
        std::cout << "Key 'apple' not found" << std::endl;
    }

    // Remove a key-value pair from the map
    myMap.erase("apple");

    // Check again if the key "apple" exists
    if (myMap.find("apple") != myMap.end()) {
        std::cout << "Key 'apple' found" << std::endl;
    } else {
        std::cout << "Key 'apple' not found" << std::endl; // Expected output: Key 'apple' not found
    }

    // uniform initialization
    std::map<std::string, int> myMap = {{"apple", 1}, {"banana", 2}, {"cherry", 3}};

    return 0;
}
