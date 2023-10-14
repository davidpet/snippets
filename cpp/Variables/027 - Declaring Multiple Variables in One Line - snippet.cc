#include <iostream>

int main() {
    // Declaring multiple variables of the same type in one line
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl; // Expected output: a: 10, b: 20, c: 30

    // Declaring and initializing multiple variables of the same type in one line
    int x = 1, y = 2, z = 3;
    std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl; // Expected output: x: 1, y: 2, z: 3

    // Declaring multiple variables of different types in one line is not allowed in C++
    // int p = 5, double q = 5.5; // This will cause a compile error

    // However, you can declare multiple variables of different types in one line using auto keyword (since C++11)
    auto i = 4, *j = &i;
    std::cout << "i: " << i << ", *j: " << *j << std::endl; // Expected output: i: 4, *j: 4
}