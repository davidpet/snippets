Sure, here is a code snippet demonstrating the creation of a generic class with a specific type in C++.

#include <iostream>

// Define a generic class with a template parameter T
template <typename T>
class GenericClass {
public:
    // Constructor
    GenericClass(T x) {
        value = x;
    }

    // Method to get the value
    T getValue() {
        return value;
    }

private:
    T value;
};

int main() {
    // Explicitly create a GenericClass object with type int
    GenericClass<int> intObject(10);
    std::cout << intObject.getValue() << std::endl; // Expected output: 10

    // Explicitly create a GenericClass object with type double
    GenericClass<double> doubleObject(20.5);
    std::cout << doubleObject.getValue() << std::endl; // Expected output: 20.5

    // Explicitly create a GenericClass object with type string
    GenericClass<std::string> stringObject("Hello, World!");
    std::cout << stringObject.getValue() << std::endl; // Expected output: Hello, World!

    return 0;
}