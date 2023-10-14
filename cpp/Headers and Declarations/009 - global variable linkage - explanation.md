# global variable linkage
In the above code, we have two files: `global.cpp` and `global_def.cpp`. 

In `global_def.cpp`, we define a global variable `g_var` and a function `printGlobalVar()`. The global variable `g_var` is accessible from any part of the program, including from within the function `printGlobalVar()`.

In `global.cpp`, we declare the global variable `g_var` using the `extern` keyword. This tells the compiler that the variable `g_var` is defined somewhere else in the program. We also declare the function `printGlobalVar()`. 

In the `main()` function, we access the global variable `g_var` and call the function `printGlobalVar()`. Both of these will access the same global variable `g_var` defined in `global_def.cpp`.

This demonstrates the concept of global variable linkage in C++. The global variable `g_var` is linked across multiple files, and can be accessed from any part of the program.