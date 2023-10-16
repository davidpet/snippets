#include <iostream>

// A generic function to print a single value
template <typename T>
void printValues(const T& value) {
    std::cout << "Single parameter: " << value << std::endl;
    // This will print: Single parameter: <value>
}

// Overloading the generic function to print two values
template <typename T1, typename T2>
void printValues(const T1& value1, const T2& value2) {
    std::cout << "Two parameters: " << value1 << ", " << value2 << std::endl;
    // This will print: Two parameters: <value1>, <value2>
}

// Overloading the generic function to print three values
template <typename T1, typename T2, typename T3>
void printValues(const T1& value1, const T2& value2, const T3& value3) {
    std::cout << "Three parameters: " << value1 << ", " << value2 << ", " << value3 << std::endl;
    // This will print: Three parameters: <value1>, <value2>, <value3>
}

int main() {
    printValues(5); // Single parameter
    printValues(5, 10); // Two parameters
    printValues(5, 10, 15); // Three parameters

    return 0;
}
