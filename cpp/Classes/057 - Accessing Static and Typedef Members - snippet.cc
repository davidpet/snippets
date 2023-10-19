#include <iostream>

class MyClass {
    public:
        typedef int Integer;
        using Int = int;

        static int x;
        static void f() {}
};

int MyClass::x = 10;

int main() {
    MyClass m;

    // static members, the proper way
    std::cout << MyClass::x << std::endl; // 10
    MyClass::f();

    // static members, technically works but is not recommended
    std::cout << m.x << std::endl; // 10
    m.x = 100;
    std::cout << MyClass::x << std::endl; // 100 (the actual static one was changed)
    m.f();

    // typdefs, the proper way
    MyClass::Integer x = 100;
    MyClass::Int y = 200;
    int z = x + y;

    // typedefs, the way that doesn't work
    // m::Integer a = 100;
    // m.Integer b = 100;

    // typedefs, if you had the instance but not the type
    // (or didn't want to say the whole type)
    decltype(m)::Integer c = 200;
    std::cout << c << std::endl;    // 200

    return 0;
}
