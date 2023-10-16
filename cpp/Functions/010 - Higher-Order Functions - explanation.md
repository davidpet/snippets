# Higher-Order Functions

In this code, we demonstrate three ways to implement higher-order functions in C++: function pointers, functors, and lambda functions.

1. Function Pointers: We define a function `multiplyByTwo` that takes a double and returns its double. We then use this function as an argument to `std::transform`, which applies the function to each element in the vector `numbers`.  This can be assigned to a function pointer variable or passed as a function pointer into a function.

2. Functors: We define a struct `DivideBy` that overloads the function call operator `()`. This allows us to create objects that behave like functions. We create a `DivideBy` object with divisor 2 and pass it to `std::transform`.

3. Lambda Functions: We define an anonymous function (lambda function) that takes a double and returns its triple. We pass this lambda function to `std::transform`.

In all three cases, `std::transform` is a higher-order function that takes a function as an argument and applies it to each element in a range.

Note: you can think of function pointer (which is callable without dereferencing like it's the function) as the type of all these things, and then functions and lambdas are both assignable to function pointers. This is only true if the lambda doesn't capture.  This will be covered more in "Functional Programming".

Note: the syntax for the function pointer declaration looks like if it were the function prototype, but replace the function name with `*variableName`.
