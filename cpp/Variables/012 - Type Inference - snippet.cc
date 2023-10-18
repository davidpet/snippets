#include <iostream>
#include <typeinfo>

const int& fn(const int &x) {
    return x;
}

auto fn() {
    return 5;
}

int main() {
    // Type inference with auto keyword
    auto a = 5; // a is inferred as int
    std::cout << a << " is of type " << typeid(a).name() << std::endl; // prints: 5 is of type int

    auto b = 3.14; // b is inferred as double
    std::cout << b << " is of type " << typeid(b).name() << std::endl; // prints: 3.14 is of type double

    auto c = "Hello, World!"; // c is inferred as const char*
    std::cout << c << " is of type " << typeid(c).name() << std::endl; // prints: Hello, World! is of type const char*

    // Type inference with decltype keyword
    decltype(a) d = 10; // d is of same type as a (int)
    std::cout << d << " is of type " << typeid(d).name() << std::endl; // prints: 10 is of type int

    decltype(b) e = 6.28; // e is of same type as b (double)
    std::cout << e << " is of type " << typeid(e).name() << std::endl; // prints: 6.28 is of type double

    decltype(c) f = "Goodbye, World!"; // f is of same type as c (const char*)
    std::cout << f << " is of type " << typeid(f).name() << std::endl; // prints: Goodbye, World! is of type const char*

    // flexible about using of * and & along with it
    auto *p = new int[10];
    auto q = new int[10];
    auto &x = *p;

    delete[] p;
    delete[] q;

    // auto assigned a const reference
    int x2 = 100;
    auto y2 = fn(x2);
    y2 = 10; // the auto did not capture either & or const

    // auto assigned a const reference
    const int x3 = 100;
    auto y3 = x3;
    y3 = 10;

    // explicitly stating const reference
    const int x4 = 1000;
    const auto &y4 = x4;
    // y4 = 10; // ILLEGAL

    // auto reference to constant
    const int x5 = 10;
    auto &y5 = x5;
    // y5 = 10; // ILLEGAL!

    // calling function with auto return type
    int x6 = fn();
    
    return 0;
}