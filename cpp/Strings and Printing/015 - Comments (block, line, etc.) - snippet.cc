#include <iostream>

int main() {
    // This is a single line comment in C++
    // Single line comments start with two forward slashes and continue until the end of the line

    std::cout << "Single line comments are ignored by the compiler." << std::endl; // This will print: Single line comments are ignored by the compiler.

    /* This is a block comment in C++
       Block comments start with a forward slash followed by an asterisk
       and end with an asterisk followed by a forward slash
       They can span multiple lines */

    std::cout << "Block comments are also ignored by the compiler." << std::endl; /* This will print: Block comments are also ignored by the compiler. */

    return 0;
}
