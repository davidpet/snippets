# Declaration of Variable Holding Function

In the code, we first declare a function `add` that takes two integers and returns their sum. Then, in the `main` function, we declare a variable `func` of type `std::function<int(int, int)>`. This type represents a function that takes two integers and returns an integer. We assign our `add` function to `func`.

We then use `func` to add 2 and 3 together, and print the result, which is 5.

Next, we declare a variable `lambdaFunc` of the same type, but this time we assign a lambda function to it. This lambda function does the same thing as our `add` function.

We use `lambdaFunc` to add 3 and 4 together, and print the result, which is 7.

This demonstrates the basic usage of variables holding functions in C++. The `std::function` type is a general-purpose polymorphic function wrapper, which can hold anything that can be called as a function, including normal functions, lambda functions, function objects, and member function pointers.

The actual type of a lambda is secret to the compiler but can be assigned to function pointers (if not capture) or `std::function` in the general case.
