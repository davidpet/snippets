#include <iostream>

// Function declaration
void greet(); // This is a function with no parameters and no return value

int add(int a, int b); // This is a function with parameters and a return value

// Function with default parameters
int multiply(int a, int b = 2); // If the second parameter is not provided, it defaults to 2

// Function with reference parameters
void swap(int &a, int &b); // The '&' symbol indicates that the parameters are references

// Function with const parameters
void printConst(const int a); // The 'const' keyword indicates that the parameter cannot be modified within the function

int main() {
    greet(); // Function call
    std::cout << "Sum: " << add(3, 4) << std::endl; // Expected output: Sum: 7
    std::cout << "Product: " << multiply(3) << std::endl; // Expected output: Product: 6
    std::cout << "Product: " << multiply(3, 3) << std::endl; // Expected output: Product: 9

    int x = 5, y = 10;
    swap(x, y);
    std::cout << "Swapped values: " << x << ", " << y << std::endl; // Expected output: Swapped values: 10, 5

    printConst(100); // Expected output: Const value: 100

    return 0;
}

// Function definition
void greet() {
    std::cout << "Hello, World!" << std::endl; // Expected output: Hello, World!
}

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void printConst(const int a) {
    std::cout << "Const value: " << a << std::endl;
}