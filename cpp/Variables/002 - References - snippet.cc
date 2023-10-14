#include <iostream>

class MyClass {
    public:
        int x, y;
    
        MyClass(int x, int y) {
            this->x = x;
            this->y = y;
        }
};

void primitiveReferences() {
    int x = 10;
    int &y = x;

    std::cout << x << std::endl; // 10
    std::cout << y << std::endl; // 10

    // actually incrementing twice
    ++y;
    ++x;

    std::cout << x << std::endl; // 12
    std::cout << y << std::endl; // 12

    // reassigning the original value, not the variable
    y = 100;
    std::cout << x << std::endl; // 100

        // int &r; // ILLEGAL because not referencing anything
}

void objectReferences() {
    MyClass m(10, 20);
    MyClass &r = m;

    std::cout << m.x << "," << m.y << std::endl; // 10,20
    std::cout << r.x << "," << r.y << std::endl; // 10,20 (same object)

    // changing the reference changes the original variable
    r = MyClass(100, 200);
    std::cout << m.x << "," << m.y << std::endl; // 100,200
}

void constReference() {
    int x = 100;
    const int &y = x;
    // y = 200; // ILLEGAL

    const int z = 200;
    // int &r = z; // ILLEGAL
}

void rvalueReference() {
    // int &x = 100; // ILLEGAL
    int &&y = 100; // LEGAL
    y = 1000;

    // int &&&z = 1000; // ILLEGAL (references don't chain like this)
    
    std::cout << y << std::endl;
}

int main() {
    primitiveReferences();
    std::cout << std::endl;
    objectReferences();
    std::cout << std::endl;
    constReference();
    std::cout << std::endl;
    rvalueReference();

    return 0;
}