# Lambdas vs. Function Pointers

Function pointers are literally just pointers to functions and don't have any state in them or any virtual behavior that could be used to secretly store state.

Lambdas can only be directly assigned or passed as function pointers if they __do not capture__.

If a lambda captures, it cannot be stored in a function pointer.

`std::function` is a template that wraps multiple kinds of callable objects including lambdas that do and don't capture, so you can treat it like the superset of callable objects.

The actual type of a lambda to the compiler is unknown to us - you can only capture it with `auto` and `decltype` or else assign it to an `std::function`. It is some internal class that handles the capturing behavior.
