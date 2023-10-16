# Importing Custom Module/Package by Relative path from Subfolder

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


To compile this project, you might use a command like this:

g++ -I . main.cpp module/module.cpp -o main

This command tells the compiler to look for include files (`-I`) in the current directory (`.`), and to compile `main.cpp` and `module/module.cpp` into an executable named `main`.

Note: The `-I .` option is necessary to allow `#include "module/module.h"` to work. Without it, the compiler would not know where to look for `module/module.h`. Also, the relative path from the file where the `#include` directive is used to the header file is specified. In this case, since `main.cpp` is in the root directory, the relative path to `module.h` is `module/module.h`. If `main.cpp` were in a subdirectory, the relative path would need to be adjusted accordingly.

Note: most modern compilers also support the non-standard `#pragma once` at the beginning of a header to guard it from being mulitply imported.

Note: the snippet doesn't compile because it pretends to be multiple files in one - just use it as an example.
