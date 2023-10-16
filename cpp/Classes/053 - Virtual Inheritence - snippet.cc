#include <iostream>

class Base {
public:
    int value;

    Base(int v) : value(v) {
        std::cout << "Base constructor called with value: " << v << std::endl;
    }
};

class Derived1 : virtual public Base {
public:
    Derived1() : Base(1) {}
};

class Derived2 : virtual public Base {
public:
    Derived2() : Base(2) {}
};

class MostDerived : public Derived1, public Derived2 {
public:
    // With virtual inheritance, only one Base sub-object exists, so we need to
    // initialize it directly from MostDerived. This is necessary because the
    // compiler doesn't know which intermediate class's constructor should be 
    // responsible for calling Base's constructor.
    MostDerived() : Base(3) {}
};

int main() {
    MostDerived md;

    // No ambiguity now, since there's only one Base sub-object
    std::cout << md.value << std::endl;  // prints 3
}
