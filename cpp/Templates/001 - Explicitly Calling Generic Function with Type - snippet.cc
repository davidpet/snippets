#include <iostream>

// A generic function
template <typename T>
void func(T arg) {
    std::cout << "Generic function called with value: " << arg << std::endl;
}

// A generic function with two types
template <typename T1, typename T2>
void func2(T1 arg1, T2 arg2) {
    std::cout << "Generic function called with values: " << arg1 << " and " << arg2 << std::endl;
}

int main() {
    // Explicitly calling the generic function with type
    func<int>(10); // This will print: Generic function called with value: 10
    func<double>(20.5); // This will print: Generic function called with value: 20.5
    func<std::string>("Hello"); // This will print: Generic function called with value: Hello

    // Explicitly calling the generic function with two types
    func2<int, double>(10, 20.5); // This will print: Generic function called with values: 10 and 20.5
    func2<std::string, std::string>("Hello", "World"); // This will print: Generic function called with values: Hello and World
}