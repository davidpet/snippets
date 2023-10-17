#include <iostream>
#include <optional>

std::optional<int> divide(int numerator, int denominator) {
    if (denominator == 0) {
        return {};  // return an empty optional
    }
    return numerator / denominator;  // will implicitly convert int to std::optional<int>
}

int main() {
    auto result1 = divide(10, 2);
    if (result1.has_value()) {
        std::cout << "Result of 10/2: " << result1.value() << "\n";
    } else {
        std::cout << "Division by zero encountered.\n";
    }

    auto result2 = divide(10, 0);
    if (result2) {  // shorthand for result2.has_value()
        std::cout << "Result: " << *result2 << "\n";  // shorthand for result2.value()
    } else {
        std::cout << "Division by zero encountered.\n";
    }

    return 0;
}
