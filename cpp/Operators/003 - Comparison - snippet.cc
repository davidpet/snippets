#include<iostream>

int main() {
    // Declare and initialize variables
    int a = 10;
    int b = 20;

    // Equal to operator
    std::cout << (a == b) << std::endl; // 0 (false), because 10 is not equal to 20

    // Not equal to operator
    std::cout << (a != b) << std::endl; // 1 (true), because 10 is not equal to 20

    // Greater than operator
    std::cout << (a > b) << std::endl; // 0 (false), because 10 is not greater than 20

    // Less than operator
    std::cout << (a < b) << std::endl; // 1 (true), because 10 is less than 20

    // Greater than or equal to operator
    std::cout << (a >= b) << std::endl; // 0 (false), because 10 is not greater than or equal to 20

    // Less than or equal to operator
    std::cout << (a <= b) << std::endl; // 1 (true), because 10 is less than or equal to 20

    return 0;
}