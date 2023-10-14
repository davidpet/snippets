#include <iostream>

int main() {
    // In C++, the boolean value of different data types is determined by whether they are zero or non-zero.
    // Zero values are considered false, non-zero values are considered true.

    // For integer types
    int a = 0;
    int b = 5;
    std::cout << "Truthiness of integer types:\n";
    std::cout << "a: " << (a ? "True" : "False") << std::endl; // Expected: False
    std::cout << "b: " << (b ? "True" : "False") << std::endl; // Expected: True

    // For floating point types
    double c = 0.0;
    double d = 3.14;
    std::cout << "\nTruthiness of floating point types:\n";
    std::cout << "c: " << (c ? "True" : "False") << std::endl; // Expected: False
    std::cout << "d: " << (d ? "True" : "False") << std::endl; // Expected: True

    // For pointer types
    int* e = nullptr;
    int f = 10;
    int* g = &f;
    std::cout << "\nTruthiness of pointer types:\n";
    std::cout << "e: " << (e ? "True" : "False") << std::endl; // Expected: False
    std::cout << "g: " << (g ? "True" : "False") << std::endl; // Expected: True

    // For boolean types
    bool h = false;
    bool i = true;
    std::cout << "\nTruthiness of boolean types:\n";
    std::cout << "h: " << (h ? "True" : "False") << std::endl; // Expected: False
    std::cout << "i: " << (i ? "True" : "False") << std::endl; // Expected: True

    return 0;
}