#include <iostream>
#include <limits>

int main() {
    // Get the maximum value of int
    int maxInt = std::numeric_limits<int>::max();
    std::cout << "Max value of int: " << maxInt << std::endl; // Expected to print: Max value of int: 2147483647

    // Get the minimum value of int
    int minInt = std::numeric_limits<int>::min();
    std::cout << "Min value of int: " << minInt << std::endl; // Expected to print: Min value of int: -2147483648

    // Get the maximum value of float
    float maxFloat = std::numeric_limits<float>::max();
    std::cout << "Max value of float: " << maxFloat << std::endl; // Expected to print: Max value of float: 3.40282e+38

    // Get the minimum value of float
    float minFloat = std::numeric_limits<float>::min();
    std::cout << "Min value of float: " << minFloat << std::endl; // Expected to print: Min value of float: 1.17549e-38

    // Get the maximum value of char
    char maxChar = std::numeric_limits<char>::max();
    std::cout << "Max value of char: " << (int)maxChar << std::endl; // Expected to print: Max value of char: 127

    // Get the minimum value of char
    char minChar = std::numeric_limits<char>::min();
    std::cout << "Min value of char: " << (int)minChar << std::endl; // Expected to print: Min value of char: -128

    return 0;
}