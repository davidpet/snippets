Sure, here is a code snippet demonstrating the move, copy, and clone semantics in C++.

#include <iostream>
#include <vector>

// Define a simple class to demonstrate copy and move semantics
class MyClass {
public:
    int data;

    // Default constructor
    MyClass() : data(0) {
        std::cout << "Default constructor called\n";
    }

    // Parameterized constructor
    MyClass(int val) : data(val) {
        std::cout << "Parameterized constructor called\n";
    }

    // Copy constructor
    MyClass(const MyClass& source) : data(source.data) {
        std::cout << "Copy constructor called\n";
    }

    // Move constructor
    MyClass(MyClass&& source) noexcept : data(std::move(source.data)) {
        std::cout << "Move constructor called\n";
        source.data = 0; // Reset source object since it has been moved
    }

    // Copy assignment operator
    MyClass& operator=(const MyClass& source) {
        std::cout << "Copy assignment operator called\n";
        if (this == &source)
            return *this;
        data = source.data;
        return *this;
    }

    // Move assignment operator
    MyClass& operator=(MyClass&& source) noexcept {
        std::cout << "Move assignment operator called\n";
        if (this == &source)
            return *this;
        data = std::move(source.data);
        source.data = 0; // Reset source object since it has been moved
        return *this;
    }
};

int main() {
    MyClass obj1(10); // Calls parameterized constructor
    MyClass obj2 = obj1; // Calls copy constructor
    MyClass obj3(std::move(obj1)); // Calls move constructor

    std::cout << "obj1.data: " << obj1.data << "\n"; // Prints 0, obj1 has been moved
    std::cout << "obj2.data: " << obj2.data << "\n"; // Prints 10, obj2 is a copy of obj1
    std::cout << "obj3.data: " << obj3.data << "\n"; // Prints 10, obj3 has moved obj1

    MyClass obj4; // Calls default constructor
    obj4 = obj2; // Calls copy assignment operator

    MyClass obj5; // Calls default constructor
    obj5 = std::move(obj3); // Calls move assignment operator

    std::cout << "obj3.data: " << obj3.data << "\n"; // Prints 0, obj3 has been moved
    std::cout << "obj4.data: " << obj4.data << "\n"; // Prints 10, obj4 is a copy of obj2
    std::cout << "obj5.data: " << obj5.data << "\n"; // Prints 10, obj5 has moved obj3

    return 0;
}