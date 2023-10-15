#include <iostream>

// Forward declaration of class B
class B;

class A {
public:
    // This is a forward declaration of a member function that uses class B
    void doSomething(B& b);

    // This is a member variable of type int
    int a;
};

class B {
public:
    // This is a member function that uses class A
    void doSomething(A& a) {
        a.a = 10;
    }
};

// Now we can define the member function of class A that uses class B
void A::doSomething(B& b) {
    B b2;
    b2.doSomething(*this);
}

int main() {
    A a;
    B b;
    a.doSomething(b);
    std::cout << a.a << std::endl; // This should print 10
    return 0;
}