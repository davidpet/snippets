#include <iostream>
#include <concepts>

// Define a concept "Equal" which will be used as a type constraint
template<typename T>
concept Equal = requires(T a, T b) {
    { a == b } -> std::convertible_to<bool>;
};

// A generic function that uses the "Equal" concept as a type constraint
template<Equal T>
bool areEqual(T a, T b) {
    return a == b;
}

// Define a concept "HasToString" which will be used as a type constraint
template<typename T>
concept HasToString = requires(T a) {
    { a.toString() } -> std::convertible_to<std::string>;
};

// A generic function that uses the "HasToString" concept as a type constraint
template<HasToString T>
void printToString(T a) {
    std::cout << a.toString() << std::endl;
}

struct MyType {
    int value;
    bool operator==(const MyType& other) const {
        return value == other.value;
    }
    std::string toString() const {
        return std::to_string(value);
    }
};

int main() {
    // Test the "areEqual" function with integers
    std::cout << areEqual(5, 5) << std::endl; // Expected output: 1 (true)

    // Test the "areEqual" function with custom type
    MyType a{5};
    MyType b{5};
    std::cout << areEqual(a, b) << std::endl; // Expected output: 1 (true)

    // Test the "printToString" function with custom type
    printToString(a); // Expected output: 5
}