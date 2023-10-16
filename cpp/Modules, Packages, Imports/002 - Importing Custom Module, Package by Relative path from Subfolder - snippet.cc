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
