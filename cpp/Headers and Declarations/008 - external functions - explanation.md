# external functions
In the above code, we have three files: `main.cpp`, `external.h`, and `external.cpp`.

In `main.cpp`, we include the header file `external.h` where the external function `add` is declared. We then call this function in the `main` function.

In `external.h`, we declare the external function `add`. This is done using the `int add(int a, int b);` line. The `#ifndef`, `#define`, and `#endif` lines are used to prevent multiple inclusions of the header file.

In `external.cpp`, we define the external function `add`. This is done using the `int add(int a, int b) { return a + b; }` line.

The `add` function is an external function because it is defined in a different file (`external.cpp`) than where it is used (`main.cpp`). This is a common practice in C++ to organize code into different files.