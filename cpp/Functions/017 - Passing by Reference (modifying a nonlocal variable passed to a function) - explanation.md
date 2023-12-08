# Passing by Reference

In the code, we have a function `modifyValue` that takes an integer reference as an argument. This means that when we pass a variable to this function, it doesn't create a new copy of it. Instead, it uses the same existing variable. So, any changes made to this variable inside the function will affect the original variable.

In the `main` function, we declare an integer variable `x` and initialize it with the value `10`. We then print the value of `x`, which is `10`.

Next, we call the `modifyValue` function and pass `x` to it by reference. Inside the `modifyValue` function, we change the value of `x` to `20`. Since `x` was passed by reference, this change affects the original `x` variable in the `main` function.

Finally, we print the value of `x` again, which is now `20`, demonstrating that the original variable was indeed modified by the function.

This is a basic example of passing by reference in C++. It's a powerful feature that allows functions to modify nonlocal variables, among other things. However, it should be used with care, as it can make code harder to understand and debug if overused or used improperly.

NOTE: if you pass in a temporary object (an rvalue), it will be interpretted either as by value or by __constant referece__, depending on how the function is overloaded (error if ambiguous).  A function that takes a non-constant reference cannot take an rvalue.
