#include <iostream>

class MyClass {
    private:
        int x = 100;

        friend void g(const MyClass &m);
        friend class MyOtherClass;

    public:
        friend void f(const MyClass &m) {
            std::cout << "friend called!" << std::endl;
            std::cout << m.x << std::endl;
        }
};

void f(const MyClass &m);

void g(const MyClass &m) {
    std::cout << "other friend called!" << std::endl;
    std::cout << m.x << std::endl;
}

class MyOtherClass {
    public:
        void h(const MyClass &m) {
            std::cout << "friend class called!" << std::endl;
            std::cout << m.x << std::endl;
        }
};

int main() {
    MyClass m;

    // m.f(); // ILLEGAL
    // MyClass::f(); // ILLEGAL
    f(m); // OK only because we defined a prototype outside the class
    g(m); // OK

    MyOtherClass n;
    n.h(m);

    return 0;
}
