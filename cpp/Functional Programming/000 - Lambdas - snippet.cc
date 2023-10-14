#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // 1. Basic lambda function
    // A lambda function is a function that you can write inline in your source code.
    // The following lambda function takes two integers as input and returns their sum.
    auto sum = [](int a, int b) {
        return a + b;
    };
    std::cout << sum(5, 3) << std::endl; // Expected output: 8

    // 2. Lambda function with capture
    // Lambda functions can "capture" local variables from the surrounding scope.
    // The following lambda function captures the variable x from the surrounding scope.
    int x = 3;
    auto add_x = [x](int a) {
        return a + x;
    };
    std::cout << add_x(5) << std::endl; // Expected output: 8

    // 3. Lambda function with mutable capture
    // By default, captured variables are const inside a lambda function.
    // If you want to modify a captured variable, you can add the mutable keyword.
    auto increment_x = [x]() mutable {
        return ++x;
    };
    std::cout << increment_x() << std::endl; // Expected output: 4

    // 4. Lambda function with capture by reference
    // By default, captured variables are copied into the lambda function.
    // If you want to capture a variable by reference, you can add the & symbol.
    auto increment_x_ref = [&x]() {
        return ++x;
    };
    std::cout << increment_x_ref() << std::endl; // Expected output: 4
    std::cout << x << std::endl; // Expected output: 4

    // 5. Lambda function as a parameter
    // Lambda functions can be passed as parameters to other functions.
    // The following code uses a lambda function as a comparator for sorting.
    std::vector<int> numbers = {5, 2, 9, 1, 5, 6};
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a > b;
    });
    for (int number : numbers) {
        std::cout << number << " "; // Expected output: 9 6 5 5 2 1
    }
    std::cout << std::endl;

    return 0;
}