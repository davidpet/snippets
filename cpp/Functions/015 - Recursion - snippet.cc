#include <iostream>

// A simple recursive function to calculate factorial
int factorial(int n) {
    // Base case: if n is 0, return 1
    if (n == 0) {
        return 1;
    }
    // Recursive case: n * factorial of n-1
    else {
        return n * factorial(n - 1);
    }
}

// A recursive function to calculate Fibonacci series
int fibonacci(int n) {
    // Base case: if n is 0 or 1, return n
    if (n == 0 || n == 1) {
        return n;
    }
    // Recursive case: sum of fibonacci of n-1 and n-2
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num = 5;
    std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl; // Expected output: Factorial of 5 is 120
    std::cout << "Fibonacci number at position " << num << " is " << fibonacci(num) << std::endl; // Expected output: Fibonacci number at position 5 is 5
    return 0;
}