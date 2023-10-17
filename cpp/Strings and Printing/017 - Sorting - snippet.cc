#include <iostream> // For input/output
#include <string>   // For string class
#include <algorithm> // For sort function
#include <vector>   // For vector class

int main() {
    // Declare a vector of strings
    std::vector<std::string> strVec = {"Hello", "World", "C++", "Programming", "Language"};

    // Print the original vector
    std::cout << "Original Vector: ";
    for(const auto& str : strVec) {
        std::cout << str << " ";
    }
    std::cout << std::endl; // Prints: Original Vector: Hello World C++ Programming Language

    // Sort the vector in ascending order
    std::sort(strVec.begin(), strVec.end());

    // Print the sorted vector
    std::cout << "Sorted Vector: ";
    for(const auto& str : strVec) {
        std::cout << str << " ";
    }
    std::cout << std::endl; // Prints: Sorted Vector: C++ Hello Language Programming World

    // Sort the vector in descending order
    std::sort(strVec.begin(), strVec.end(), std::greater<std::string>());

    // Print the sorted vector
    std::cout << "Sorted Vector (Descending): ";
    for(const auto& str : strVec) {
        std::cout << str << " ";
    }
    std::cout << std::endl; // Prints: Sorted Vector (Descending): World Programming Language Hello C++

    // Sorting a single string
    std::string s = "zabdy";
    std::sort(s.begin(), s.end());
    std::cout << s << std::endl;

    return 0;
}
