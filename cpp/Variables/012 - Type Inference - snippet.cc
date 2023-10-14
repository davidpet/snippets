#include <iostream>
#include <typeinfo>

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

    return 0;
}