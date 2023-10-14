C++ does not natively support higher-order functions in the same way as functional programming languages like Haskell or Lisp. However, we can still achieve similar functionality using function pointers, functors (function objects), and lambda functions. Here's a demonstration:

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

// Function pointer
double multiplyByTwo(double num) {
    return num * 2;
}

// Functor
struct DivideBy {
    double divisor;
    DivideBy(double divisor): divisor(divisor) {}
    double operator()(double num) const {
        return num / divisor;
    }
};

int main() {
    std::vector<double> numbers = {1.0, 2.0, 3.0, 4.0, 5.0};

    // Using function pointer
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), multiplyByTwo);
    for (double num : numbers) {
        std::cout << num << " "; // Prints: 2 4 6 8 10
    }
    std::cout << std::endl;

    // Using functor
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), DivideBy(2));
    for (double num : numbers) {
        std::cout << num << " "; // Prints: 1 2 3 4 5
    }
    std::cout << std::endl;

    // Using lambda function
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](double num) { return num * 3; });
    for (double num : numbers) {
        std::cout << num << " "; // Prints: 3 6 9 12 15
    }
    std::cout << std::endl;

    return 0;
}