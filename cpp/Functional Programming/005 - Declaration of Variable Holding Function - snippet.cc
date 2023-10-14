Sure, here is a code snippet demonstrating the declaration of a variable holding a function in C++ with a focus on functional programming.

#include <iostream>
#include <functional>

// Declare a function
int add(int x, int y) {
    return x + y;
}

int main() {
    // Declare a variable holding a function
    std::function<int(int, int)> func = add;

    // Use the function
    int result = func(2, 3);
    std::cout << result << std::endl; // Expected output: 5

    // Declare a variable holding a lambda function
    std::function<int(int, int)> lambdaFunc = [](int x, int y) {
        return x + y;
    };

    // Use the lambda function
    int lambdaResult = lambdaFunc(3, 4);
    std::cout << lambdaResult << std::endl; // Expected output: 7

    return 0;
}