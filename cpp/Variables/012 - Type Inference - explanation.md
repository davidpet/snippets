# Type Inference

In the code, we demonstrate type inference in C++ using the `auto` and `decltype` keywords.

The `auto` keyword tells the compiler to automatically deduce the type of the variable from its initializer. In the example, we see that `a` is inferred as `int`, `b` as `double`, and `c` as `const char*`.

The `decltype` keyword, on the other hand, is used to deduce the type of a given expression. In the example, `d` is of the same type as `a` (which is `int`), `e` is of the same type as `b` (which is `double`), and `f` is of the same type as `c` (which is `const char*`).

The `typeid` operator is used to get the name of the type of a variable. It's used here to print out the type of each variable to demonstrate the type inference.

Note that `auto` and `decltype` are features introduced in C++11, so they are not available in older versions of C++.