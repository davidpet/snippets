C++ does not have built-in support for modules or packages like Python or Java. However, it does have a system for organizing code into separate files and controlling access to code within those files. This is done through the use of header files (.h or .hpp) and implementation files (.cpp), and the `#include` directive.

In C++, the `#include` directive is used to import code from other files. The `#include` directive essentially copies and pastes the contents of the specified file into the current file.

Here's an example of how you might organize code into separate files and use the `#include` directive to import code:

// File: my_class.hpp
#ifndef MY_CLASS_HPP
#define MY_CLASS_HPP

class MyClass {
public: // public members can be accessed from anywhere
    MyClass(int x);
    void publicMethod();

private: // private members can only be accessed from within the class
    int myVariable;
    void privateMethod();
};

#endif

// File: my_class.cpp
#include "my_class.hpp"
#include <iostream>

MyClass::MyClass(int x) : myVariable(x) {}

void MyClass::publicMethod() {
    std::cout << "Public method called!" << std::endl;
    privateMethod();
}

void MyClass::privateMethod() {
    std::cout << "Private method called!" << std::endl;
}

// File: main.cpp
#include "my_class.hpp"

int main() {
    MyClass myObject(10);
    myObject.publicMethod();
    // myObject.privateMethod(); // This would cause a compile error
    return 0;
}

In this example, `my_class.hpp` is the header file for the `MyClass` class. It declares the class and its public and private members. `my_class.cpp` is the implementation file for the `MyClass` class. It defines the methods declared in the header file.

In `main.cpp`, we include `my_class.hpp` to use the `MyClass` class. We can call the `publicMethod` of `MyClass`, but we can't call the `privateMethod` because it's private.