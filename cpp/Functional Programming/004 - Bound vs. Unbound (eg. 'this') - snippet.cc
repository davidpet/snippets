#include <iostream>
#include <functional>

// Define a simple class with a member variable and a member function
class MyClass {
public:
    int x;

    MyClass(int val) : x(val) {}

    void printX() {
        std::cout << "Value of x: " << x << std::endl; // This will print the value of x
    }
};

int main() {
    MyClass obj(10); // Create an object of MyClass

    // Unbound member function pointer
    void (MyClass::*unboundPtr)() = &MyClass::printX;

    // Call the unbound member function using the object
    (obj.*unboundPtr)(); // This will print "Value of x: 10"

    // Bound member function using std::bind
    auto boundFn = std::bind(&MyClass::printX, obj);

    // Call the bound member function
    boundFn(); // This will print "Value of x: 10"

    // Bound member function using std::function
    std::function<void()> boundFn2 = std::bind(&MyClass::printX, obj);

    // Call the bound member function
    boundFn2(); // This will print "Value of x: 10"

    return 0;
}