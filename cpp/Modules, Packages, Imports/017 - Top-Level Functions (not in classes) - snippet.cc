Sure, here is a code snippet demonstrating the use of top-level functions in C++. 

#include <iostream>

// This is a top-level function. It is not inside any class.
void sayHello() {
    std::cout << "Hello, World!" << std::endl; // This will print "Hello, World!"
}

// This is another top-level function. It takes an integer as an argument.
void printNumber(int num) {
    std::cout << "The number is: " << num << std::endl; // This will print "The number is: " followed by the value of num.
}

// This is a top-level function that returns a value.
int addNumbers(int num1, int num2) {
    return num1 + num2; // This will return the sum of num1 and num2.
}

int main() {
    sayHello(); // Call the top-level function sayHello.

    printNumber(5); // Call the top-level function printNumber with an argument of 5.

    int sum = addNumbers(3, 4); // Call the top-level function addNumbers with arguments of 3 and 4, and store the return value in sum.
    std::cout << "The sum is: " << sum << std::endl; // This will print "The sum is: " followed by the value of sum.

    return 0;
}