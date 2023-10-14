C++ does not have a built-in module/package system like Python or Java. However, it does have a system for including other files and namespaces that can be used to organize code in a similar way. Here is an example of how you might use fully-qualified symbol usages without importing first in C++.

// File: MyModule.h
namespace MyModule {
    void myFunction() {
        std::cout << "Hello from MyModule!" << std::endl;
    }
}

// File: main.cpp
#include <iostream>

// Include the header file, but don't use a using directive
#include "MyModule.h"

int main() {
    // Use the fully-qualified name to call the function
    MyModule::myFunction(); // Prints: "Hello from MyModule!"
    return 0;
}