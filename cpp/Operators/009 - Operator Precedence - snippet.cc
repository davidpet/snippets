#include <iostream>

int main() {
    // Operator precedence determines the grouping of terms in an expression.
    // This affects how an expression is evaluated. Certain operators have higher precedence than others.

    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int result;

    // Here, operators with higher precedence will be evaluated first
    // The precedence of * and / is higher than + and -
    result = a + b * c / d; // 20 + 10*15/5 = 20 + 30 = 50
    std::cout << "a + b * c / d = " << result << std::endl; // Expected output: 50

    // Parentheses can change the order of evaluation
    // Here, the operations inside the parentheses will be performed first
    result = (a + b) * c / d; // (20 + 10)*15/5 = 30*15/5 = 90
    std::cout << "(a + b) * c / d = " << result << std::endl; // Expected output: 90

    // If the precedence level is the same, the order of evaluation is from left to right
    result = a + b - c; // 20 + 10 - 15 = 15
    std::cout << "a + b - c = " << result << std::endl; // Expected output: 15

    // The precedence of the assignment operator (=) is lower than other operators
    // So the right-hand side of the assignment is evaluated first
    result = a = b; // a is assigned the value of b, then result is assigned the value of a
    std::cout << "result = a = b = " << result << std::endl; // Expected output: 10

    return 0;
}