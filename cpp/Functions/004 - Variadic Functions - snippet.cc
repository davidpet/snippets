#include <iostream>
#include <cstdarg> // needed to use ellipsis

// Function that takes in two numbers as arguments and returns their sum
int add(int num1, int num2) {
    return num1 + num2;
}

// Variadic function that takes in at least one number as argument
// and returns the sum of all numbers
int add(int num, ...) {
    va_list args; // declare a va_list type variable
    va_start(args, num); // use int parameter as the start of the arguments

    int sum = 0;

    // loop through the arguments
    for (int i = 0; i < num; i++) {
        sum += va_arg(args, int); // add the next argument in the list to the sum
    }

    va_end(args); // clean up the list

    return sum;
}

int main() {
    std::cout << add(2, 3) << std::endl; // prints: 5
    std::cout << add(3, 4, 5, 6) << std::endl; // prints: 15
    std::cout << add(5, 1, 2, 3, 4, 5) << std::endl; // prints: 15
    return 0;
}