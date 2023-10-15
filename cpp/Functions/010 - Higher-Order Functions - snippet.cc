#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

// Function
double multiplyByTwo(double num) {
    return num * 2;
}

// Function pointer
double (*functionPtr)(double) = multiplyByTwo;

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

    // Using function as a function pointer
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), multiplyByTwo);
    for (double num : numbers) {
        std::cout << num << " "; // Prints: 2 4 6 8 10
    }
    std::cout << std::endl;

    // Using the function pointer in a function
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), functionPtr);
    for (double num : numbers) {
        std::cout << num << " "; // Prints: 4 8 12 16 20
    }
    std::cout << std::endl;
    
    // Using the function pointer in a call
    std::cout << functionPtr(10) << std::endl; // 20

    // Using functor
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), DivideBy(2));
    for (double num : numbers) {
        std::cout << num << " "; // Prints: 2 4 6 8 10
    }
    std::cout << std::endl;

    // Using lambda function
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](double num) { return num * 3; });
    for (double num : numbers) {
        std::cout << num << " "; // Prints: 6 12 18 24 30
    }
    std::cout << std::endl;

    return 0;
}