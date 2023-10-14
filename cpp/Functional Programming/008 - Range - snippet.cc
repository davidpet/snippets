C++ does not inherently support functional programming like languages such as Haskell or Erlang. However, with the introduction of C++11 and C++14, many features were added that allow for a more functional style of programming. One of these features is the range-based for loop, which can be used to iterate over a range of values in a container.

Here is a code snippet demonstrating the use of range-based for loops in C++:

#include <iostream>
#include <vector>

int main() {
    // Declare a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Use a range-based for loop to iterate over the vector
    for (int num : numbers) {
        std::cout << num << std::endl; // This will print each number in the vector on a new line
    }

    // It's also possible to modify the elements in the range
    for (int& num : numbers) {
        num *= 2;
    }

    // Print the modified vector
    for (const int& num : numbers) {
        std::cout << num << std::endl; // This will print each number in the vector (now doubled) on a new line
    }

    return 0;
}