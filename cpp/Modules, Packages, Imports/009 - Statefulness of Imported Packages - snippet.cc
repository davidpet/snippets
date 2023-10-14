C++ does not have built-in support for modules or packages like Python or Java. However, it does have a system for including other files, which can be used to create a similar effect. The `#include` directive is used to include the contents of another file at that point in the program. This is often used to include libraries or other parts of a program.

The statefulness of imported packages in C++ is a bit different than in some other languages. In C++, when you include a file, you're essentially copying and pasting its contents into your file. This means that any state in the included file is not shared between different files that include it. Each inclusion of the file gets its own separate copy of the state.

Here's an example:

// file1.cpp
#include <iostream>

int state = 0;

void incrementState() {
    state++;
}

void printState() {
    std::cout << state << std::endl; // This will print the current value of state
}

// file2.cpp
#include "file1.cpp"

int main() {
    incrementState();
    printState(); // This will print 1
    return 0;
}

// file3.cpp
#include "file1.cpp"

int main() {
    incrementState();
    printState(); // This will print 1, not 2
    return 0;
}

In this example, `file2.cpp` and `file3.cpp` both include `file1.cpp`. They each have their own separate copy of the `state` variable, so when they call `incrementState()`, they're incrementing their own copy of `state`, not a shared copy.

This is different from languages like Python, where importing a module gives you a reference to a single shared instance of that module, and state in the module is shared between all files that import it.