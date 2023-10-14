# Callable Object/Call Operator
In this example, we have three classes: `CallableClass`, `CallableClassNoArgs`, and `CallableClassMultipleArgs`. Each of these classes has a call operator (`operator()`), which allows objects of these classes to be called as if they were functions.

The `CallableClass`'s call operator takes a string argument and prints it. The `CallableClassNoArgs`'s call operator takes no arguments and simply prints a message. The `CallableClassMultipleArgs`'s call operator takes a string and an integer, and prints the string the specified number of times.

In the `main` function, we create an object of each class and call it using the call operator. This demonstrates how to use callable objects in C++.