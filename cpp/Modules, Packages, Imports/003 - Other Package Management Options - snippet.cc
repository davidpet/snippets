C++ does not have built-in support for modules or packages like Python or Java. However, it does have a system for including other files, which is often used to create a modular structure. Additionally, there are several third-party package managers available for C++, such as Conan, vcpkg, and CMake.

Here is an example of how you might use the `#include` directive to create a modular structure in your C++ code:

// File: my_module.h
#ifndef MY_MODULE_H
#define MY_MODULE_H

void my_function();

#endif

// File: my_module.cpp
#include "my_module.h"
#include <iostream>

void my_function() {
    std::cout << "Hello from my_function!" << std::endl; // This will print: Hello from my_function!
}

// File: main.cpp
#include "my_module.h"

int main() {
    my_function();
    return 0;
}

In this example, `my_module.h` is a header file that declares the function `my_function`. `my_module.cpp` is the corresponding implementation file, which defines `my_function`. `main.cpp` includes `my_module.h` and calls `my_function`.

The `#ifndef`, `#define`, and `#endif` directives are used to prevent multiple inclusion of the same header file.