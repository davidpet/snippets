#include <iostream>

class BaseClass {
    public:
        int x = 1;

        void f() {}
        virtual void g() {}
    protected:
        int y = 100;

        void h() {}
        virtual void i() {}
};

class DerivedClass : public BaseClass {
    public:
        int y = 2;

        using BaseClass::h;

        void i() override {}

    protected:
        int x = 200;

        void f() {}
        void g() override {}
};

int main() {
    DerivedClass d;
    BaseClass &b = d;

    std::cout << d.y << std::endl; // 2
    std::cout << b.x  << std::endl; // 1

    d.i();
    // d.g(); // ILLEGAL
    // b.i();  // ILLEGAL
    b.g();

    d.h();
    
    return 0;
}