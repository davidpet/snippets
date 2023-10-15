#include <iostream>

class MyClass {
    public:
        int x, y;

        MyClass(int x, int y) {
            this->x = x;
            this->y = y;
        }
};

struct MyStruct {
    int x, y;

    MyStruct(int x, int y) {
        this->x = x;
        this->y = y;
    }
};

void primitivePointers() {
    int x = 100; // original storage

    int *p = &x; // p points to x
    int **q = &p; // q points to p which points to x
    int *&r = p;  // r is a reference to p which points to x

    *p = 1000; // original changed
    std::cout << x << std::endl; // 1000
    **q = 10000; // original changed
    std::cout << x << std::endl; // 10000
    *r = 10;  // original changed
    std::cout << x << std::endl; // 10
}

void pointerMath() {
    int x[] = {1, 2, 3, 4, 5};
    int *p = x;

    std::cout << *p << std::endl; // 1

    p += 2;
    std::cout << *p << std::endl; // 3

    *p = 300;
    std::cout << *p << std::endl; // 300

    std::cout << x[2] << std::endl; // 300
    std::cout << p[1] << std::endl; // 4

    char *q = reinterpret_cast<char*>(x);
    ++q;
    std::cout << (int)(*q) << std::endl; // 0 because in the upper bits of 1
}

void objectPointers() {
    MyClass m(100, 200);
    MyStruct s(1000, 2000);

    MyClass *p = &m;
    MyStruct *q = &s;

    p->x = 50;
    q->x = 500;
    
    std::cout << m.x << std::endl; // 50
    std::cout << s.x << std::endl; // 500

    // older-fashioned (uglier) syntax
    std::cout << (*p).x << std::endl; // 50

    // plus all applicable pointer arithmetic, treating as array, etc.
}

void dynamicPointers() {
    int *p = new int(100); // single int with value of 100
    int *a = new int[100]; // 100 ints with junk values

    std::cout << a[0] << std::endl; // some junk value
    std::cout << p[0] << std::endl; // 100

    // MyClass *m = new MyClass[100]; // ILLEGAL: no default constructor

    delete p;
    delete[] a;

    a = new int[100]{1, 2, 3}; // first 3 are specified, rest become zero
    std::cout << a[2] << std::endl; // 3
    std::cout << a[10] << std::endl; // 0
    delete[] a;

    a = new int[100](); // initializing all to zero
    std::cout << a[0] << std::endl; // 0
    delete[] a;
}

void constPointers() {
    int x = 100;

    const int *p = &x; // const is modifying the target type
    int * const q = &x; // const is modifying the variable itself

    // *p = 200; // ILLEGAL due to const
    *q = 200;   // LEGAL
    // q = nullptr; // ILLEGAL due to const
    p = nullptr;
}

void pointerSizes() {
    short x = 100;
    short *p = &x;
    short *a = new short[100];
    short y[] = {1, 2, 3, 4, 5};
    short *q = y;

    std::cout << "Size of short*: " << sizeof(p) << std::endl; // 8
    std::cout << "Size of short* on array: " << sizeof(a) << std::endl; // 8
    std::cout << "Size of short[] local: " << sizeof(y) << std::endl; // 10
    std::cout << "Size of short* on short[] local: " << sizeof(q) << std::endl; // 8
}

int main() {
    primitivePointers();
    std::cout << std::endl;
    pointerMath();
    std::cout << std::endl;
    objectPointers();
    std::cout << std::endl;
    dynamicPointers();
    std::cout << std::endl;
    constPointers();
    std::cout << std::endl;
    pointerSizes();

    return 0;
}