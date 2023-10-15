#include <iostream>
#include <type_traits>

// C++14 introduced automatic return type deduction for all functions.
// This means that the compiler will automatically deduce the return type of a function from its return statements.

// Here is a simple function that returns an integer.
auto simpleFunction() {
    return 42; // The compiler will deduce that the return type is int.
}

// Here is a function that returns the sum of two numbers.
// The return type will be deduced from the type of the sum.
template <typename T, typename U>
auto sum(T t, U u) {
    return t + u; // The compiler will deduce the return type from the types of t and u.
}

// Here is a function that returns a lambda function.
// The return type will be deduced from the type of the lambda.
auto makeLambda() {
    return [](int x) { return x * 2; }; // The compiler will deduce the return type to be a function that takes an int and returns an int.
}

auto trailingReturnType() -> int {
    return 10;
}

auto trailingReturnType() -> decltype(10 * 2) {
    return 20;
}

int main() {
    std::cout << simpleFunction() << std::endl; // Prints: 42
    std::cout << sum(3, 4) << std::endl; // Prints: 7
    std::cout << sum(3.5, 4.5) << std::endl; // Prints: 8.0
    auto lambda = makeLambda();
    std::cout << lambda(5) << std::endl; // Prints: 10
    return 0;
}