#include <iostream>

// A simple class with a constructor
class SimpleClass {
public:
    // Constructor with no parameters
    SimpleClass() {
        std::cout << "SimpleClass default constructor called" << std::endl;
    }
};

// A class with a constructor that takes parameters
class ParameterClass {
public:
    int x;

    // Constructor with one parameter
    ParameterClass(int value) : x(value) {
        std::cout << "ParameterClass constructor called with value: " << x << std::endl;
    }
};

// A class with multiple constructors
class MultipleConstructorsClass {
public:
    int x, y;

    // Default constructor
    MultipleConstructorsClass() : x(0), y(0) {
        std::cout << "MultipleConstructorsClass default constructor called" << std::endl;
    }

    // Constructor with one parameter
    MultipleConstructorsClass(int value) : x(value), y(0) {
        std::cout << "MultipleConstructorsClass constructor called with one value: " << x << std::endl;
    }

    // Constructor with two parameters
    MultipleConstructorsClass(int value1, int value2) : x(value1), y(value2) {
        std::cout << "MultipleConstructorsClass constructor called with two values: " << x << ", " << y << std::endl;
    }
};

int main() {
    SimpleClass sc; // SimpleClass default constructor called
    ParameterClass pc(10); // ParameterClass constructor called with value: 10
    MultipleConstructorsClass mcc1; // MultipleConstructorsClass default constructor called
    MultipleConstructorsClass mcc2(20); // MultipleConstructorsClass constructor called with one value: 20
    MultipleConstructorsClass mcc3(30, 40); // MultipleConstructorsClass constructor called with two values: 30, 40

    return 0;
}