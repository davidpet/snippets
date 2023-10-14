C++20 introduced the concept of modules to the language. Modules provide a new, more robust system for handling code organization and dependencies compared to the traditional header and source file approach. Here's a basic example of how to declare a module:

// File: my_module.cppm
export module my_module;  // Declare a module named my_module

export int add(int a, int b) {  // Declare an exportable function
    return a + b;
}