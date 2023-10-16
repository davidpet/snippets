/*
 * File: example.cpp
 * Author: Your Name
 * Date: Date of creation
 * 
 * This file demonstrates the use of comments in C++ for documentation.
 * It includes a function that adds two integers.
 */

#include <iostream>

// This function adds two integers and returns the result.
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    std::cout << result << std::endl;  // This should print 8.
    return 0;
}
