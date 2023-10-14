# Nested Functions
In this example, `outerFunction` is a lambda function that takes an integer `x` and returns another lambda function `nestedFunction`. `nestedFunction` captures `x` from its enclosing scope and takes another integer `y`. It then returns the sum of `x` and `y`. 

In the `main` function, we call `outerFunction` with `5` and store the returned lambda function in `myNestedFunction`. We then call `myNestedFunction` with `3`, which returns `8` (the sum of `5` and `3`), and we print this result.

This is a way to simulate nested functions in C++, but it's not exactly the same as having direct support for nested functions like some other languages do. In C++, functions cannot be defined inside other functions. However, lambda functions can be defined inside other functions and can capture variables from their enclosing scope, which can provide similar functionality.