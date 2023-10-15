#include <iostream>

class MyClass {
    public:
        int x, y, z; // primitive automic variables
};

class OtherClass {
    public:
        MyClass m; // automatic variable as class member
        const MyClass &n; // reference as class member (set in c'tor init list)

        OtherClass(const MyClass &other):
            n(other) {
        }
};

void automaticVariables() {
    int x = 10; // primitive
    MyClass m;  // default c'tor
    OtherClass o(m);
    m.x = 100;

    std::cout << o.m.x << std::endl;    // not 100
    std::cout << o.n.x << std::endl;    // 100

    std::cout << sizeof(MyClass) << std::endl; // 12 (3 ints, no vtable)
    std::cout << sizeof(OtherClass) << std::endl; // >=20 (MyClass + a pointer/reference, no vtable)
}

void dynamicVariables() {
    MyClass *p = new MyClass(); // this part looks like Java but it's different
    OtherClass *o = new OtherClass(*p);

    delete p;
    delete o;
}

int main() {
    automaticVariables();
    std::cout << std::endl;
    dynamicVariables();
    std::cout << std::endl;

    return 0;
}