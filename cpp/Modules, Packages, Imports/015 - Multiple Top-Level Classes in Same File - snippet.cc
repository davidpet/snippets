In C++, it's possible to define multiple top-level classes in the same file. Here's an example:

#include <iostream>

// Class 1
class MyClass1 {
public:
    void printMessage1() {
        std::cout << "Hello from MyClass1!" << std::endl; // This will print: Hello from MyClass1!
    }
};

// Class 2
class MyClass2 {
public:
    void printMessage2() {
        std::cout << "Hello from MyClass2!" << std::endl; // This will print: Hello from MyClass2!
    }
};

int main() {
    MyClass1 class1;
    class1.printMessage1();

    MyClass2 class2;
    class2.printMessage2();

    return 0;
}