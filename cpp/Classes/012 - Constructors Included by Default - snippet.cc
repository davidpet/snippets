#include <iostream>

class MyClass {
    public:
        int x, y;
};

class MyOtherClass {
    public:
        int x, y;

        MyOtherClass(int x, int y) {
            this->x = x;
            this->y = y;
        }
};

class MyClassWithRemovals {
    private:
        MyClassWithRemovals() {} // prevent public usage
    public:
        MyClassWithRemovals(const MyClassWithRemovals &other) = delete;

        MyClassWithRemovals(int x, int y) {}
};

void default5() {
    MyClass m; // default constructor
    m.x = 100;
    m.y = 200;

    MyClass n(m); // copy constructor
    n.x = 1000;
    n.y = 2000;

    MyClass o = m; // copy constructor (not assignment)
    o.x = 1;
    o.y = 2;

    o = n;  // copy assignment (because object exists now)

    MyClass p((MyClass()));   // move constructor
    p = MyClass();  // move assignment

    std::cout << m.x << std::endl; // 100
    std::cout << n.x << std::endl; // 1000
    std::cout << o.x << std::endl; // 1000
    std::cout << std::endl;
}

void withParameterized() {
    MyOtherClass m(100, 200); // parameterized constructor
    // MyOtherClass n; // ILLEGAL (lost default c'tor)

    MyOtherClass n(m); // copy constructor
    n.x = 1000;
    n.y = 2000;

    MyOtherClass o = m; // copy constructor (not assignment)
    o.x = 1;
    o.y = 2;

    o = n;  // copy assignment (because object exists now)

    MyOtherClass p((MyOtherClass(0, 0)));   // move constructor
    p = MyOtherClass(0, 0);  // move assignment

    std::cout << m.x << std::endl; // 100
    std::cout << n.x << std::endl; // 1000
    std::cout << o.x << std::endl; // 1000
    std::cout << std::endl;
}

void withRemovals() {
    // MyClassWithRemovals m; // ILLEGAL (private)
    MyClassWithRemovals m(100, 200);

    // MyClassWithRemovals n(m); // ILLEGAL (removed)

    // MyClassWithRemovals o = m; // ILLEGAL (removed)

    MyClassWithRemovals n(1000, 2000);
    m = n;  // copy assignment (still OK)

    MyClassWithRemovals p((MyClassWithRemovals(0, 0)));   // move constructor (still OK)
    p = MyClassWithRemovals(0, 0);  // move assignment (still OK)

    std::cout << std::endl;
}

int main() {
    default5();
    withParameterized();
    withRemovals();

    return 0;
}