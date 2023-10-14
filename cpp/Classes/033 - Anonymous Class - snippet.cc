I'm sorry for the confusion, but C++ does not support anonymous classes like some other languages such as Java or JavaScript. In C++, all classes must be named upon declaration. However, C++ does support anonymous objects, which are instances of a class that are not assigned to a variable name. Here is an example of how you can use anonymous objects in C++:

#include <iostream>

// Define a simple class
class MyClass {
public:
    MyClass() {
        std::cout << "MyClass constructor called!" << std::endl;
    }

    ~MyClass() {
        std::cout << "MyClass destructor called!" << std::endl;
    }

    void sayHello() {
        std::cout << "Hello from MyClass!" << std::endl;
    }
};

int main() {
    // Create an anonymous object
    MyClass().sayHello();
    // MyClass constructor called!
    // Hello from MyClass!
    // MyClass destructor called!

    return 0;
}

In the above code, `MyClass().sayHello();` creates an anonymous object of `MyClass` and immediately calls the `sayHello` method on it. After this line, the anonymous object is no longer accessible and its destructor is called.