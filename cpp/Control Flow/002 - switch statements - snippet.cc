#include <iostream>

int main() {
    // Declare an integer variable
    int x = 2;

    // A switch statement allows a variable to be tested for equality against a list of values
    // Each value is called a case, and the variable being switched on is checked for each case
    switch (x) {
    case 1:
        std::cout << "x is 1" << std::endl; // This will not be printed as x is not 1
        break; // The break keyword exits the switch statement
    case 2:
        std::cout << "x is 2" << std::endl; // This will be printed as x is 2
        break;
    default:
        std::cout << "x is neither 1 nor 2" << std::endl; // This will not be printed as x is 2
        break;
    }

    // Switch statements can be used without break statements to have a fallthrough behavior
    switch (x) {
    case 1:
        std::cout << "x is 1 or 2" << std::endl; // This will not be printed as x is not 1
    case 2:
        std::cout << "x is 2" << std::endl; // This will be printed as x is 2
    default:
        std::cout << "x is neither 1 nor 2" << std::endl; // This will also be printed due to fallthrough
    }

    return 0;
}