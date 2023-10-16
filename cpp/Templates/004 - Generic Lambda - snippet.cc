#include <iostream>
#include <vector>

int main() {
    // A generic lambda is a lambda function that uses auto keyword to allow 
    // parameters to be of any type. Here we define a generic lambda that 
    // takes two parameters and returns their sum.
    auto generic_lambda = [](auto a, auto b) {
        return a + b;
    };

    // Using the generic lambda with integer parameters
    int sum_int = generic_lambda(5, 7);
    std::cout << sum_int << std::endl; // Expected output: 12

    // Using the generic lambda with double parameters
    double sum_double = generic_lambda(3.5, 2.5);
    std::cout << sum_double << std::endl; // Expected output: 6.0

    // Using the generic lambda with string parameters
    std::string sum_string = generic_lambda(std::string("Hello "), std::string("World"));
    std::cout << sum_string << std::endl; // Expected output: Hello World

    // Generic lambdas can also be used in algorithms. Here we use a generic 
    // lambda to find the sum of all elements in a vector.
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int sum = 0;
    std::for_each(numbers.begin(), numbers.end(), [&sum](auto n) {
        sum += n;
    });
    std::cout << sum << std::endl; // Expected output: 15

    return 0;
}
