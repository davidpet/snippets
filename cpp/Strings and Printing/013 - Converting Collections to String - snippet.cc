#include <iostream>
#include <vector>
#include <sstream>

int main() {
    // Declare a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Declare an ostringstream object
    std::ostringstream oss;

    // Use a range-based for loop to iterate over the vector
    for (const auto &num : numbers) {
        // Use the '<<' operator to append each number to the ostringstream
        oss << num << ' ';
    }

    // Use the str() member function to get the string
    std::string numbers_str = oss.str();

    // Print the string
    std::cout << numbers_str << std::endl; // Expected output: "1 2 3 4 5 "
}
