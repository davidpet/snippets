# Return Type Inference

In the code, we have a class `MyClass` with two functions `func` and `func2` that demonstrate return type inference. 

The `func` function uses return type inference to automatically determine the return type based on the type of the value that is returned. In this case, the function returns `x * 2`, so the return type is `int`.

The `func2` function uses return type inference with trailing return type syntax. The `decltype(x)` after the `->` operator specifies the return type of the function. This is useful when the return type depends on the type of the function parameters.

In the `main` function, we create an object of `MyClass` and call the `func` and `func2` functions. The `typeid` operator is used to print the type of the returned value.

Note: this is just like in top-level functions and is included here for completeness.
