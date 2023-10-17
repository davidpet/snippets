#include <iostream>
#include <functional>
#include <tuple>

struct Dog {
    void bark() const { std::cout << "Woof!\n"; }
};

void printSum(int a, int b, int c) {
    std::cout << "Sum: " << (a + b + c) << "\n";
}

int main() {
    auto lambda = []() { std::cout << "Lambda called!\n"; };

    // Using std::invoke with a lambda
    std::invoke(lambda);

    Dog d;

    // Using std::invoke with a member function
    std::invoke(&Dog::bark, d);

    // Using std::apply to unpack tupleArgs and call printSum
    std::tuple<int, int, int> tupleArgs(1, 2, 3);
    std::apply(printSum, tupleArgs);

    return 0;
}
