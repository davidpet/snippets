# Partial Application

In the code, we first define a simple function `add` that takes two integers and returns their sum. We then use `std::bind` to create a new function `addFive` that has the first argument of `add` 'pre-filled' with the value 5. The `std::placeholders::_1` is a placeholder for the second argument of `add`, which will be provided when `addFive` is called.  There are more placeholders such as `std::placeholders::_2`, etc.

We then demonstrate the use of `addFive` by calling it with the argument 10. The expected output is 15, because `addFive` is essentially the same as calling `add(5, 10)`.

Next, we use a lambda function to achieve the same result. The lambda function `addTen` takes one argument `b` and returns the result of calling `add(10, b)`. We demonstrate the use of `addTen` by calling it with the argument 20. The expected output is 30, because `addTen` is essentially the same as calling `add(10, 20)`.

This demonstrates the concept of partial application in C++: creating new functions by 'pre-filling' some of the arguments of an existing function.
