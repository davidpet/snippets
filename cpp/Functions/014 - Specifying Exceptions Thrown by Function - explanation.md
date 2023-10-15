# Specifying Exceptions Thrown by Function

The code demonstrates the use of exception specifications in C++ functions. The `noexcept` keyword is used to specify that a function does not throw any exceptions. If no exception specification is provided, a function can throw any type of exception. A specific type of exception can be specified using the `throw` keyword followed by the type of exception in parentheses. In the `main` function, we call these functions inside `try` blocks and catch the exceptions they throw using `catch` blocks. The expected output of the program is:

```
This function is declared to throw no exceptions.
This function can throw any type of exception.
Caught exception: Runtime error thrown from anyThrow()
This function can throw a specific type of exception.
Caught specific exception: Runtime error thrown from specificThrow()
```

##### Note: Exception specifications other than `noexcept` are deprecated in C++11 and later. It is generally recommended to use `noexcept` where possible and let any other exceptions propagate to the caller without specifying them in the function declaration.
