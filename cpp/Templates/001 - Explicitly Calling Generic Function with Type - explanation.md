# Explicitly Calling Generic Function with Type

In the code, we have two generic functions `func` and `func2`. The `func` function takes one argument of any type, while `func2` takes two arguments of any two types. 

In the `main` function, we are explicitly calling these generic functions with types. For example, `func<int>(10)` is calling the `func` function with `int` type and `func2<int, double>(10, 20.5)` is calling the `func2` function with `int` and `double` types.

This is how you can explicitly call a generic function with type in C++. This is useful when you want to specify the type of the arguments at the time of calling the function.
