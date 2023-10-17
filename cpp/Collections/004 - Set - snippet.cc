#include <iostream>
#include <set>

int main() {
    // Declare a set of integers
    std::set<int> mySet; // ordered set - use unordered_set if want O(1)

    // Insert elements into the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40);
    mySet.insert(50);

    // Print the elements of the set
    for (int element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl; // Expected output: 10 20 30 40 50

    // Check if an element is in the set
    if (mySet.find(20) != mySet.end()) {
        std::cout << "20 is in the set" << std::endl; // Expected output: 20 is in the set
    } else {
        std::cout << "20 is not in the set" << std::endl;
    }

    // Remove an element from the set
    mySet.erase(20);

    // Print the elements of the set
    for (int element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl; // Expected output: 10 30 40 50

    // Check the size of the set
    std::cout << "The size of the set is " << mySet.size() << std::endl; // Expected output: The size of the set is 4

    // Check if the set is empty
    if (mySet.empty()) {
        std::cout << "The set is empty" << std::endl;
    } else {
        std::cout << "The set is not empty" << std::endl; // Expected output: The set is not empty
    }

    // Clear the set
    mySet.clear();

    // Check if the set is empty
    if (mySet.empty()) {
        std::cout << "The set is empty" << std::endl; // Expected output: The set is empty
    } else {
        std::cout << "The set is not empty" << std::endl;
    }

    return 0;
}
