Sure, here is a code snippet demonstrating the difference between reference types and value types in C++ using classes.

#include <iostream>

// Define a simple class
class MyClass {
public:
    int value;

    MyClass(int v) : value(v) {}
};

void changeValueByValue(MyClass obj) {
    obj.value = 100; // This change won't affect the original object
}

void changeValueByReference(MyClass& obj) {
    obj.value = 100; // This change will affect the original object
}

int main() {
    MyClass obj1(10);
    MyClass obj2(20);

    changeValueByValue(obj1);
    std::cout << obj1.value << std::endl; // This will print: 10

    changeValueByReference(obj2);
    std::cout << obj2.value << std::endl; // This will print: 100

    return 0;
}