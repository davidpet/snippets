C++ does not have built-in support for modules or packages like Python or Java. However, it does support the inclusion of header files, which can be used to organize code in a similar way. Here's an example of how you might structure your project:

project/
│
├── main.cpp
│
└── module/
    ├── module.h
    └── module.cpp

In this structure, `module.h` and `module.cpp` form a "module" that can be used in `main.cpp`. Here's how you might write these files:

`module/module.h`:

// This is the header file for the module.
// It declares the functions that are implemented in module.cpp.

#ifndef MODULE_H
#define MODULE_H

// A function that prints a greeting.
void print_greeting();

#endif

`module/module.cpp`:

// This is the implementation file for the module.
// It includes the header file and defines the functions declared there.

#include "module.h"
#include <iostream>

void print_greeting() {
    std::cout << "Hello, world!" << std::endl; // This will print "Hello, world!"
}

`main.cpp`:

// This is the main file of the project.
// It includes the module's header file and uses the functions defined there.

#include "module/module.h"

int main() {
    print_greeting(); // This will call the function from the module and print "Hello, world!"
    return 0;
}

To compile this project, you might use a command like this:

g++ -I . main.cpp module/module.cpp -o main

This command tells the compiler to look for include files (`-I`) in the current directory (`.`), and to compile `main.cpp` and `module/module.cpp` into an executable named `main`.