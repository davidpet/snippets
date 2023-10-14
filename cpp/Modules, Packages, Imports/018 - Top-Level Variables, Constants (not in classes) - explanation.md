# Top-Level Variables/Constants (not in classes)
In the above code, we have demonstrated the use of top-level variables and constants in C++. These are variables and constants that are declared outside any function or class, and are accessible from any part of the program.

The `globalVar` is a top-level variable, and its value can be changed throughout the program. We first print its initial value, then change it and print the new value.

The `globalConst` is a top-level constant, and its value cannot be changed after it is initialized. We print its value, but if we try to change it (as in the commented line), it will cause a compile error.

This covers the basic usage of top-level variables and constants in C++. Note that while global variables can be useful, they should be used sparingly to avoid issues with side effects and maintainability.