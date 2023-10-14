#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Basic lambda function
    auto basicLambda = []() { std::cout << "Hello, Lambda!\n"; }; // No parameters, no return type
    basicLambda(); // Prints: Hello, Lambda!

    // Lambda function with parameters
    auto paramLambda = [](int x, int y) { return x + y; }; // Takes two integers, returns their sum
    std::cout << paramLambda(5, 3) << "\n"; // Prints: 8

    // Lambda function with explicit return type
    auto explicitReturnLambda = [](double x, double y) -> double { return x / y; }; // Takes two doubles, returns their division
    std::cout << explicitReturnLambda(10.0, 2.0) << "\n"; // Prints: 5

    // Lambda function capturing local variables by value
    int a = 5;
    int b = 10;
    auto valueCaptureLambda = [a, b]() { return a + b; }; // Captures 'a' and 'b' by value
    std::cout << valueCaptureLambda() << "\n"; // Prints: 15

    // Lambda function capturing local variables by reference
    auto referenceCaptureLambda = [&a, &b]() { return a + b; }; // Captures 'a' and 'b' by reference
    std::cout << referenceCaptureLambda() << "\n"; // Prints: 15

    // Lambda function capturing all local variables by value
    auto allValueCaptureLambda = [=]() { return a + b; }; // Captures all local variables by value
    std::cout << allValueCaptureLambda() << "\n"; // Prints: 15

    // Lambda function capturing all local variables by reference
    auto allReferenceCaptureLambda = [&]() { return a + b; }; // Captures all local variables by reference
    std::cout << allReferenceCaptureLambda() << "\n"; // Prints: 15

    // Lambda function used in algorithm
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::for_each(numbers.begin(), numbers.end(), [](int n) { std::cout << n << " "; }); // Prints each number in the vector
    std::cout << "\n"; // Prints: 1 2 3 4 5 

    return 0;
}