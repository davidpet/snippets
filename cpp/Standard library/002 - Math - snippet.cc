Sure, here is a comprehensive code snippet demonstrating the usage of the math library in C++.

#include <iostream>
#include <cmath> // Include the math library

int main() {
    double num = 9.0;

    // sqrt() returns the square root of a number
    std::cout << "Square root of " << num << " is " << sqrt(num) << std::endl; // Expected output: Square root of 9.0 is 3.0

    // pow() returns the power of a number
    std::cout << "2 to the power of 3 is " << pow(2.0, 3.0) << std::endl; // Expected output: 2 to the power of 3 is 8

    // abs() returns the absolute value of a number
    std::cout << "Absolute value of -10 is " << abs(-10) << std::endl; // Expected output: Absolute value of -10 is 10

    // ceil() returns the smallest integer greater than or equal to a number
    std::cout << "Ceiling value of 2.3 is " << ceil(2.3) << std::endl; // Expected output: Ceiling value of 2.3 is 3

    // floor() returns the largest integer less than or equal to a number
    std::cout << "Floor value of 2.3 is " << floor(2.3) << std::endl; // Expected output: Floor value of 2.3 is 2

    // log() returns the natural logarithm (base e) of a number
    std::cout << "Natural logarithm of 2 is " << log(2.0) << std::endl; // Expected output: Natural logarithm of 2 is 0.693147

    // log10() returns the base 10 logarithm of a number
    std::cout << "Base 10 logarithm of 100 is " << log10(100.0) << std::endl; // Expected output: Base 10 logarithm of 100 is 2

    // sin(), cos() and tan() returns the sine, cosine and tangent of a number respectively
    std::cout << "Sine of 30 degrees is " << sin(30.0) << std::endl; // Expected output: Sine of 30 degrees is -0.988032
    std::cout << "Cosine of 60 degrees is " << cos(60.0) << std::endl; // Expected output: Cosine of 60 degrees is -0.952413
    std::cout << "Tangent of 45 degrees is " << tan(45.0) << std::endl; // Expected output: Tangent of 45 degrees is 1.61978

    return 0;
}