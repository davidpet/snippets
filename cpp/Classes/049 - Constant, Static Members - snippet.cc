#include <iostream>

int f() {
    return 1000;
}

class MyClass {
    public:
        const int x; // has to be set in c'tor or can't construct object
        const int y = 100;
        const int z = f(); // ok that not compile-time constant

        static const int s = 1000; // this one DOES have to be a compile-time constant
        static const int t; // this can only be provided outside the class

        // static int s2 = 10; // ILLEGAL
        static int s3;

        MyClass(): x(1000) {
            // note that x could not be set in the body (only; in the init list)
        }
};

// note that we drop the 'static' but keep the rest
const int MyClass::t = 100;
int MyClass::s3 = 1000;

int main() {
    MyClass m;

    std::cout << m.x << std::endl;
    std::cout << m.y << std::endl;
    std::cout << m.z << std::endl;

    std::cout << m.t << std::endl;

    return 0;
}
