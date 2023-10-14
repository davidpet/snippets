# Optional/Default Arguments
In the above code, we have two functions `greet` and `display` that demonstrate the use of default and optional arguments in C++ functions.

The `greet` function has a default argument. If no argument is provided when calling the function, the default value "User" is used. This is demonstrated in the `main` function where we first call `greet` without any arguments, and then with the argument "Alice".

The `display` function has an optional argument. If the second argument is not provided when calling the function, the default value 0 is used and the function behaves differently based on whether the age is provided or not. This is demonstrated in the `main` function where we first call `display` with only one argument, and then with two arguments.

This code snippet demonstrates the basic usage of default and optional arguments in C++. However, it's important to note that all default arguments must be the trailing arguments in a function. That is, you cannot have a default argument followed by a non-default argument.