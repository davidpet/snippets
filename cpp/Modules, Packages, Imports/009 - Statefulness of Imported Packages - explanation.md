# Statefulness of Imported Packages
In C++, if you want to share state between different files, you can use global variables. However, this is generally considered bad practice, as it can make your code harder to understand and debug. A better approach is to use classes or structs to encapsulate state, and pass instances of these classes or structs between different parts of your program.

Here's an example of how you might do this:

```cpp
// state.h
#pragma once

class State {
public:
    int value = 0;

    void increment() {
        value++;
    }

    void print() {
        std::cout << value << std::endl; // This will print the current value of value
    }
};

// file2.cpp
#include "state.h"

int main() {
    State state;
    state.increment();
    state.print(); // This will print 1
    return 0;
}

// file3.cpp
#include "state.h"

int main() {
    State state;
    state.increment();
    state.print(); // This will print 1, not 2
    return 0;
}
```

In this example, `file2.cpp` and `file3.cpp` each create their own instance of the `State` class. They each have their own separate copy of the `value` variable, so when they call `state.increment()`, they're incrementing their own copy of `value`, not a shared copy.