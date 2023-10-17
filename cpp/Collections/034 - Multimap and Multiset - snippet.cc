#include <iostream>
#include <set>
#include <map>

int main() {
    std::multiset<int> mset = {1, 1, 2, 3, 3, 3, 4, 5};  // ordered multiset

    // Insert another 3
    mset.insert(3);

    std::cout << "Elements of multiset:\n";
    for (int num : mset) {
        std::cout << num << " ";
    }
    // Output: 1 1 2 3 3 3 3 4 5

    std::multimap<std::string, std::string> mmp; // ordered multimap

    mmp.insert({"apple", "fruit"});
    mmp.insert({"apple", "company"});
    mmp.insert({"banana", "fruit"});
    mmp.insert({"microsoft", "company"});

    std::cout << "Elements of multimap:\n";
    for (const auto& pair : mmp) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }
    std::cout << std::endl;

    /* Output:
    apple: fruit
    apple: company
    banana: fruit
    microsoft: company
    */

   auto range = mmp.equal_range("apple");
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->first << ": " << it->second << "\n";
    }

    /* Output:
    apple: fruit
    apple: company
    */
}
