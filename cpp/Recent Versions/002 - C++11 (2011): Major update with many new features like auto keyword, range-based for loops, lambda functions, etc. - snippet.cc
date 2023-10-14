Sure, here is a code snippet demonstrating the new features introduced in C++11:

#include <iostream>
#include <vector>

int main() {
    // 1. Auto keyword
    // The auto keyword tells the compiler to automatically deduce the type of the variable at compile-time.
    auto a = 10; // a is of type int
    auto b = 5.5; // b is of type double
    std::cout << a << ", " << b << std::endl; // Expected output: 10, 5.5

    // 2. Range-based for loops
    // Range-based for loops allow for easy iteration over arrays or other container types.
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for(auto i : vec) {
        std::cout << i << " "; // Expected output: 1 2 3 4 5
    }
    std::cout << std::endl;

    // 3. Lambda functions
    // Lambda functions are a kind of anonymous function that can be defined in-line.
    auto sum = [](int x, int y) { return x + y; };
    std::cout << sum(3, 4) << std::endl; // Expected output: 7
}