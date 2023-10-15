#include <iostream>

// Function with no parameters
void printHello() {
    std::cout << "Hello, World!" << std::endl;
}

// Function with one parameter
void printNumber(int num) {
    std::cout << "Number: " << num << std::endl;
}

// Function with two parameters
void printSum(int num1, int num2) {
    std::cout << "Sum: " << num1 + num2 << std::endl;
}

// Overloaded function with different parameter types
void printSum(double num1, double num2) {
    std::cout << "Sum: " << num1 + num2 << std::endl;
}

// Overloaded function with different number of parameters
void printSum(int num1, int num2, int num3) {
    std::cout << "Sum: " << num1 + num2 + num3 << std::endl;
}

int main() {
    printHello(); // prints: Hello, World!
    printNumber(5); // prints: Number: 5
    printSum(3, 2); // prints: Sum: 5
    printSum(1.2, 3.4); // prints: Sum: 4.6
    printSum(1, 2, 3); // prints: Sum: 6

    return 0;
}