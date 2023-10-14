In C++, there are no "default imports" in every program like in some other languages such as Python or Java. Instead, C++ uses a preprocessor directive called `#include` to include libraries or other source files in the program. The libraries or files to be included are not automatically included in every program; they must be explicitly stated.

Here is a simple example of how to use `#include`:

#include <iostream> // Include the iostream library

int main() {
    std::cout << "Hello, World!" << std::endl; // Print "Hello, World!" to the console
    return 0;
}

In this example, `#include <iostream>` includes the iostream library, which provides facilities for input/output operations. We then use `std::cout` to print a message to the console. `std::endl` is used to insert a new line.