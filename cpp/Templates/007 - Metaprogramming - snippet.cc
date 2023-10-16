#include <iostream>

// A simple template class
template <typename T>
class SimpleTemplate {
public:
    T value;

    SimpleTemplate(T val) : value(val) {}

    void print() {
        std::cout << value << std::endl; // This will print the value of the template class
    }
};

// Template metaprogramming: factorial calculation at compile time
template <int N>
struct Factorial {
    enum { value = N * Factorial<N - 1>::value };
};

template <>
struct Factorial<0> {
    enum { value = 1 };
};

int main() {
    SimpleTemplate<int> myInt(10);
    myInt.print(); // This will print: 10

    SimpleTemplate<std::string> myString("Hello, World!");
    myString.print(); // This will print: Hello, World!

    std::cout << "Factorial of 5 at compile time: " << Factorial<5>::value << std::endl; // This will print: 120

    return 0;
}
