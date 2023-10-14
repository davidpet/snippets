C++ does not natively support partial application like some functional programming languages do. However, we can achieve similar functionality using `std::bind` from the `<functional>` library or using lambda functions. Here's an example:

#include <iostream>
#include <functional>

// A simple function that takes two integers and returns their sum
int add(int a, int b) {
    return a + b;
}

int main() {
    // Using std::bind to create a function that has the first argument 'pre-filled'
    auto addFive = std::bind(add, 5, std::placeholders::_1);

    std::cout << addFive(10) << std::endl; // Expected output: 15

    // Using a lambda function to achieve the same result
    auto addTen = [](int b) { return add(10, b); };

    std::cout << addTen(20) << std::endl; // Expected output: 30

    return 0;
}