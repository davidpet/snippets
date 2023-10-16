#include <iostream>

class Base {
public:
    int value;
    int value2;

    Base(int v) : value(v) {
        value2 = value;
        std::cout << "Base constructor called with value: " << v << std::endl;
    }
};

class Derived1 : public Base {
public:
    Derived1() : Base(1) {}
};

class Derived2 : public Base {
public:
    Derived2() : Base(2) {}
};

class MostDerived : public Derived1, public Derived2 {
    public:
        // using Derived1::Base::value2; // doesn't work
};

int main() {
    MostDerived md;

    // This line would produce a compilation error, because it's ambiguous:
    // std::cout << md.value << std::endl;
    
    // Instead, we have to explicitly specify which path to follow:
    std::cout << md.Derived1::value << std::endl;  // prints 1
    std::cout << md.Derived2::value << std::endl;  // prints 2

    // std::cout << md.value2 << std::endl; //doesn't work
}
