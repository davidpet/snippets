#include <iostream>

int main() {
    // Define and immediately invoke a lambda function
    // This is an example of an IIFE
    auto result = []() -> int {
        int x = 5;
        int y = 10;
        return x + y;
    }(); // The function is immediately invoked with ()

    std::cout << "Result: " << result << std::endl; // Expected output: Result: 15

    // IIFE can also be used without capturing any variables
    []() {
        std::cout << "This is an IIFE without capturing any variables." << std::endl;
    }(); // Expected output: This is an IIFE without capturing any variables.

    // IIFE can also capture variables from the surrounding scope
    int a = 5;
    int b = 10;
    [&]() {
        std::cout << "The sum of a and b is: " << a + b << std::endl;
    }(); // Expected output: The sum of a and b is: 15

    return 0;
}
