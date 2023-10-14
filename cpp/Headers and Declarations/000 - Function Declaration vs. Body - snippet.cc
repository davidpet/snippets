#include <iostream>

// Function Declaration
void printHello(); // This is a function declaration. It tells the compiler that a function named 'printHello' exists.

// Function Declaration with parameters
int add(int a, int b); // This is a function declaration with parameters. It tells the compiler that a function named 'add' exists which takes two integers as parameters.

// Function Declaration with default parameters
int multiply(int a, int b = 2); // This is a function declaration with default parameters. It tells the compiler that a function named 'multiply' exists which takes two integers as parameters and if the second parameter is not provided, it will be considered as 2.

// Function Body
void printHello() { // This is the body of the function 'printHello'. It defines what the function does when it is called.
    std::cout << "Hello, World!" << std::endl; // prints: Hello, World!
}

// Function Body with parameters
int add(int a, int b) { // This is the body of the function 'add'. It defines what the function does when it is called.
    return a + b;
}

// Function Body with default parameters
int multiply(int a, int b) { // This is the body of the function 'multiply'. It defines what the function does when it is called.
    return a * b;
}

int main() {
    printHello(); // Calling the function 'printHello'. It will print: Hello, World!

    int sum = add(5, 3); // Calling the function 'add' with parameters 5 and 3. It will return 8 which is stored in the variable 'sum'.
    std::cout << "Sum: " << sum << std::endl; // prints: Sum: 8

    int product = multiply(4); // Calling the function 'multiply' with one parameter 4. Since the second parameter is not provided, it will be considered as 2. It will return 8 which is stored in the variable 'product'.
    std::cout << "Product: " << product << std::endl; // prints: Product: 8

    return 0;
}