#include <iostream>
#include <functional>

int main() {
    // Improved lambda functions
    // In C++14, lambda functions can have auto type parameters
    auto lambda = [](auto x, auto y) { return x + y; };
    std::cout << lambda(5, 3) << std::endl; // 8
    std::cout << lambda(2.5, 1.5) << std::endl; // 4.0

    // Digit separators
    // C++14 introduced the ability to use single quotes as digit separators
    // This can make large numbers more readable
    int a = 1'000'000;
    std::cout << a << std::endl; // 1000000

    // Generic lambdas
    // C++14 introduced generic lambdas, which can take arguments of any type
    auto generic_lambda = [](auto x) { return x; };
    std::cout << generic_lambda("Hello, World!") << std::endl; // Hello, World!
    std::cout << generic_lambda(123) << std::endl; // 123

    // Lambda capture expressions
    // C++14 allows lambda capture expressions to use the same syntax as auto type deduction
    int x = 5;
    auto lambda_capture = [x = x + 2]() { return x; };
    std::cout << lambda_capture() << std::endl; // 7

    return 0;
}
