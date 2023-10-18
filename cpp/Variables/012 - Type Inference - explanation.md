# Type Inference

In the code, we demonstrate type inference in C++ using the `auto` and `decltype` keywords.

The `auto` keyword tells the compiler to automatically deduce the type of the variable from its initializer. In the example, we see that `a` is inferred as `int`, `b` as `double`, and `c` as `const char*`.

The `decltype` keyword, on the other hand, is used to deduce the type of a given expression. In the example, `d` is of the same type as `a` (which is `int`), `e` is of the same type as `b` (which is `double`), and `f` is of the same type as `c` (which is `const char*`).

The `typeid` operator is used to get the name of the type of a variable. It's used here to print out the type of each variable to demonstrate the type inference.

Note that `auto` and `decltype` are features introduced in C++11, so they are not available in older versions of C++.

## Notes on & and const with auto

`auto` does not deduce either `const` or `&` - it only deduces the type itself contained within. Thus, if you use `auto` alone, you're getting the variable __by value__.

In order to make the variable a constant and/or reference, you have to combine that syntax with `auto` (eg. `const auto &x`).

This applies to variables and function return types.

There is __one exception__ - if you define an `auto &` to a constant, the type is __automatically__ inferred as `const auto &`.  The reason for this is that you can't take a non-const reference to a constant, so that is the only valid option for `auto` to use.

Note that __pointers__ are their own fundamental type, so `auto` is able to infer them just fine.

Another __special case__ is __string literals__ which are inferred as `const char *` without having to specify the `const`.
