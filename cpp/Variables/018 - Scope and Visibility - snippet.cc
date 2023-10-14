#include <iostream>

// Global variable
int globalVar = 10;

void testFunction() {
    // Local variable in a function
    int localVar = 20;
    std::cout << "Inside testFunction, globalVar: " << globalVar << ", localVar: " << localVar << std::endl; // Expected: globalVar: 10, localVar: 20
}

int main() {
    std::cout << "In main, globalVar: " << globalVar << std::endl; // Expected: globalVar: 10

    // Local variable in main function
    int localVar = 30;
    std::cout << "In main, localVar: " << localVar << std::endl; // Expected: localVar: 30

    // Calling testFunction
    testFunction();

    // Trying to access localVar from testFunction
    // Uncommenting the following line will cause a compile error because localVar in testFunction is not visible here
    // std::cout << localVar << std::endl;

    // Block scope
    {
        // This localVar is different from the localVar in main function
        int localVar = 40;
        std::cout << "In block, localVar: " << localVar << std::endl; // Expected: localVar: 40
    }

    // localVar here is still the one from main function
    std::cout << "In main, localVar: " << localVar << std::endl; // Expected: localVar: 30

    return 0;
}