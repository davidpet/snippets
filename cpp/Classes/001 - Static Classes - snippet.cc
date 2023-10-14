#include <iostream>

// In C++, there's no such thing as a "static class" like in some other languages such as C# or Java.
// However, you can create a class that only has static members.

class StaticClass {
public:
    // Static member variable
    static int staticVar;

    // Static member function
    static void staticFunction() {
        std::cout << "This is a static function." << std::endl;
    }
};

// Initialize static member variable
int StaticClass::staticVar = 0;

int main() {
    // Accessing static member variable
    StaticClass::staticVar = 5;
    std::cout << "Static variable: " << StaticClass::staticVar << std::endl; // Expected output: Static variable: 5

    // Accessing static member function
    StaticClass::staticFunction(); // Expected output: This is a static function.

    return 0;
}