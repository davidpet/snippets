#include <iostream>
#include <set>
#include <map>

int main() {
    // Declare a set. A set is a sorted collection of unique elements.
    std::set<int> mySet;

    // Insert elements. They will be automatically sorted.
    mySet.insert(30);
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(40);

    // Print the set. Elements will be in sorted order.
    for (int num : mySet) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected output: 10 20 30 40

    // Declare a multiset. A multiset is a sorted collection that allows duplicate elements.
    std::multiset<int> myMultiset;

    // Insert elements. They will be automatically sorted.
    myMultiset.insert(30);
    myMultiset.insert(10);
    myMultiset.insert(20);
    myMultiset.insert(10);

    // Print the multiset. Elements will be in sorted order.
    for (int num : myMultiset) {
        std::cout << num << " ";
    }
    std::cout << std::endl; // Expected output: 10 10 20 30

    // Declare a map. A map is a sorted collection of key-value pairs. Keys are unique.
    std::map<int, std::string> myMap;

    // Insert elements. They will be automatically sorted by key.
    myMap.insert({2, "Apple"});
    myMap.insert({1, "Banana"});
    myMap.insert({3, "Cherry"});

    // Print the map. Elements will be in sorted order of keys.
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    } // Expected output: 1: Banana 2: Apple 3: Cherry

    // Declare a multimap. A multimap is a sorted collection that allows duplicate keys.
    std::multimap<int, std::string> myMultimap;

    // Insert elements. They will be automatically sorted by key.
    myMultimap.insert({2, "Apple"});
    myMultimap.insert({1, "Banana"});
    myMultimap.insert({2, "Cherry"});

    // Print the multimap. Elements will be in sorted order of keys.
    for (const auto& pair : myMultimap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    } // Expected output: 1: Banana 2: Apple 2: Cherry

    return 0;
}
