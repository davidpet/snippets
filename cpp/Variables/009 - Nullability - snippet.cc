#include <iostream>
#include <cstddef> // for NULL

int main() {
    // In C++, variables can be nullable. This means that they can hold the value `null` or `nullptr` 
    // in addition to the usual values of their type. This is often used to indicate that the variable 
    // does not have a value.

    // For example, a pointer can be null. This is often used to indicate that it does not point to any object.
    int *p = nullptr;
    if (p == nullptr) {
        std::cout << "p is null" << std::endl; // This will print "p is null"
    }

    // The `null` value can also be represented as `0` or `NULL` for pointers.
    int *q = 0;
    if (q == 0) {
        std::cout << "q is null" << std::endl; // This will print "q is null"
    }

    // old-fashioned macro you might see around
    int *r = NULL;
    if (r == NULL) {
        std::cout << "r is null" << std::endl; // This will print "r is null"
    }

    // However, using `nullptr` is more type-safe and is the recommended way to represent a null pointer in C++.

    // Note that non-pointer variables cannot be null in C++. For example, the following code would not compile:
    // int s = nullptr; // error: cannot convert 'std::nullptr_t' to 'int' in initialization

    return 0;
}