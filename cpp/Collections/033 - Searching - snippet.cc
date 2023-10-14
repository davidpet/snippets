Sure, here is a comprehensive example of searching in collections in C++:

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Declare a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Declare the value we want to search for
    int target = 5;

    // Use the std::find function to search for the target
    auto result = std::find(numbers.begin(), numbers.end(), target);

    // Check if the target was found
    if (result != numbers.end()) {
        std::cout << "Found " << target << " at index " << (result - numbers.begin()) << std::endl; // Expected output: Found 5 at index 4
    } else {
        std::cout << "Did not find " << target << std::endl; // This line will not be printed in this case
    }

    // Declare a vector of strings
    std::vector<std::string> words = {"apple", "banana", "cherry", "date", "elderberry"};

    // Declare the string we want to search for
    std::string target_word = "cherry";

    // Use the std::find function to search for the target_word
    auto result_word = std::find(words.begin(), words.end(), target_word);

    // Check if the target_word was found
    if (result_word != words.end()) {
        std::cout << "Found " << target_word << " at index " << (result_word - words.begin()) << std::endl; // Expected output: Found cherry at index 2
    } else {
        std::cout << "Did not find " << target_word << std::endl; // This line will not be printed in this case
    }

    return 0;
}