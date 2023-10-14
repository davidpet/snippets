#include <iostream>
#include <memory>

// Define a class with nullable members
class MyClass {
public:
    int* nullableInt; // Nullable integer pointer
    std::unique_ptr<int> nullableUniqueInt; // Nullable unique_ptr

    MyClass() : nullableInt(nullptr), nullableUniqueInt(nullptr) {} // Constructor initializes nullable members to null
};

int main() {
    MyClass myObject;

    // Check if nullableInt is null
    if (myObject.nullableInt == nullptr) {
        std::cout << "nullableInt is null" << std::endl; // This should print
    }

    // Check if nullableUniqueInt is null
    if (myObject.nullableUniqueInt == nullptr) {
        std::cout << "nullableUniqueInt is null" << std::endl; // This should print
    }

    // Assign values to nullable members
    myObject.nullableInt = new int(10);
    myObject.nullableUniqueInt = std::make_unique<int>(20);

    // Check if nullableInt is null
    if (myObject.nullableInt != nullptr) {
        std::cout << "nullableInt is not null, value: " << *myObject.nullableInt << std::endl; // This should print: nullableInt is not null, value: 10
    }

    // Check if nullableUniqueInt is null
    if (myObject.nullableUniqueInt != nullptr) {
        std::cout << "nullableUniqueInt is not null, value: " << *myObject.nullableUniqueInt << std::endl; // This should print: nullableUniqueInt is not null, value: 20
    }

    // Clean up
    delete myObject.nullableInt;

    return 0;
}