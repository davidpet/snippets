#include <iostream>
#include <new> // for placement new
#include <type_traits> // for std::aligned_storage

struct MyStruct {
    int x;
    double y;
    MyStruct(int a, double b) : x(a), y(b) {}
    void display() { std::cout << "x: " << x << ", y: " << y << std::endl; }
};

int main() {
    // Allocate raw memory to hold MyStruct
    std::aligned_storage<sizeof(MyStruct), alignof(MyStruct)>::type storage;

    // Construct a MyStruct object in the allocated memory using placement new
    MyStruct* ptr = new (&storage) MyStruct(42, 3.14);
    ptr->display(); // x: 42, y: 3.14

    // Explicitly call the destructor since the memory is managed manually
    ptr->~MyStruct();

    return 0;
}
