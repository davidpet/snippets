#include <iostream>
#include <initializer_list>

class MyClass {
    public:
        int x, y;
};

class OtherClass {
    public:
        int x, y;
    
    OtherClass() {}
};

class SpecialClass {
    public:
        int x, y;

        SpecialClass(int x, int y) {
            this-> x = x;
            this-> y = y;
        }

        SpecialClass(int z) {
            this->x = z;
            this->y = z;
        }

        explicit operator int() {
            return x;
        }
};

class ContainerClass {
    public:
        int x, y;

        ContainerClass(const std::initializer_list<int> &l) {
            for (auto &val : l) {
                std::cout << val << std::endl;
            }
        }

        ContainerClass(int x, int y) {
            this->x = x;
            this->y = y;
        }
};

SpecialClass f(const SpecialClass &s) {
    return {10, 100};
}

int main() {
    MyClass m1;
    MyClass m2{10, 100};
    MyClass m3 = {20, 200};
    MyClass m4{};
    // MyClass m5(); // ILLEGAL (for some reason)
    MyClass m6 = MyClass();
    MyClass m7 = MyClass{};
    // MyClass m8 = MyClass; // ILLEGAL

    OtherClass o1;
    // OtherClass o2{10, 100}; // ILLEGAL
    // OtherClass o3 = {10, 100}; // ILLEGAL
    OtherClass o4{};

    SpecialClass s1(10, 100);
    SpecialClass s2 = {10, 100}; // c'tor call
    SpecialClass s3{10, 100}; // c'tor call
    SpecialClass s3b{1000}; // different c'tor call
    SpecialClass s4 = SpecialClass{10, 100}; // and so on

    ContainerClass c1(10, 100); // c'tor call
    ContainerClass c2{10, 100}; // passes in list (due to compiler preference for that)
    ContainerClass c3 = {10, 100}; // same as c2

    f(s1);
    f({1000});
    f({10, 100});

    MyClass *p1 = new MyClass;  // default c'tor
    SpecialClass *p2 = new SpecialClass(10, 100);
    SpecialClass *p3 = new SpecialClass{10, 100};

    delete p3;
    delete p2;
    delete p1;

    int x{100};
    // int y(1.2); // WARNING
    // int z{1.2}; // WARNING
    int a1{s1};
    int a2(s1);

    // Primitives don't have the same kind of constructor as objects.
    int i1(0);
    int i2{0};
    int i3{}; // not the same thing as just int i3;
    int i4;  // junk

    std::cout << i3 << std::endl;

    int arr[]{10, 20, 30};

    return 0;
}
