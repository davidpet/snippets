# Wrapping Multiple Imported Symbols

In C++, you can also use namespaces to wrap imported symbols. This can be useful if you want to avoid name clashes between symbols from different files. Here is an example:

```cpp
// File: my_library.h
namespace my_library {
    // Declare some functions
    int add(int a, int b);
    int subtract(int a, int b);
}
```

```cpp
// File: my_library.cpp
#include "my_library.h"

// Define the functions
int my_library::add(int a, int b) {
    return a + b;
}

int my_library::subtract(int a, int b) {
    return a - b;
}
```

```cpp
// File: main.cpp
#include <iostream>
#include "my_library.h"

int main() {
    // Use the imported symbols
    std::cout << my_library::add(1, 2) << std::endl; // Prints: 3
    std::cout << my_library::subtract(5, 3) << std::endl; // Prints: 2

    return 0;
}
```

In this example, the `my_library` namespace is used to wrap the `add` and `subtract` functions. This means that these functions can be accessed as `my_library::add` and `my_library::subtract` in `main.cpp`.

Note: you could use `using namespace my_library;` in `main.cpp` but people don't typically like to pollute the global namespace like that.
