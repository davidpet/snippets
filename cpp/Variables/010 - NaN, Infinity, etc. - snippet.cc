#include <iostream>
#include <cmath> // Required for NaN and Infinity
#include <limits> // Required for NaN and Infinity

int main() {
    // NaN stands for 'Not a Number'. It's a special floating-point value which is used to represent undefined or unrepresentable values.
    double nanValue = std::numeric_limits<double>::quiet_NaN();
    std::cout << "NaN Value: " << nanValue << std::endl; // This will print: NaN Value: nan

    // Checking if a value is NaN
    if(std::isnan(nanValue)) {
        std::cout << "The value is NaN" << std::endl; // This will print: The value is NaN
    }

    // Infinity is a special floating-point value which is greater than any other number.
    double infinityValue = std::numeric_limits<double>::infinity();
    std::cout << "Infinity Value: " << infinityValue << std::endl; // This will print: Infinity Value: inf

    // Checking if a value is Infinity
    if(std::isinf(infinityValue)) {
        std::cout << "The value is Infinity" << std::endl; // This will print: The value is Infinity
    }

    // Negative Infinity is also possible
    double negativeInfinityValue = -std::numeric_limits<double>::infinity();
    std::cout << "Negative Infinity Value: " << negativeInfinityValue << std::endl; // This will print: Negative Infinity Value: -inf

    // Checking if a value is Negative Infinity
    if(std::isinf(negativeInfinityValue)) {
        std::cout << "The value is Negative Infinity" << std::endl; // This will print: The value is Negative Infinity
    }

    return 0;
}