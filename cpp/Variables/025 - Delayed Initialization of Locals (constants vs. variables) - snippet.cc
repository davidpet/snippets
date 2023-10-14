#include <iostream>

int main() {
    // Delayed initialization of a local variable
    int a;
    a = 10;
    std::cout << "Value of a: " << a << std::endl; // Expected output: Value of a: 10

    // Delayed initialization of a local constant
    const int b;
    b = 20;
    std::cout << "Value of b: " << b << std::endl; // Expected output: Value of b: 20

    // Delayed initialization of a local variable with a function
    int c;
    c = a + b;
    std::cout << "Value of c: " << c << std::endl; // Expected output: Value of c: 30

    // Delayed initialization of a local constant with a function
    const int d;
    d = a + b;
    std::cout << "Value of d: " << d << std::endl; // Expected output: Value of d: 30

    return 0;
}