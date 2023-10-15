# Return Type Inference

In the code, we have demonstrated the use of return type inference in C++. The `auto` keyword is used to let the compiler deduce the return type of a function from its return statements. This feature is particularly useful when working with templates or lambda functions, where the return type might not be known in advance.

The `simpleFunction` function returns an integer, so the compiler deduces its return type to be `int`. The `sum` function returns the sum of two numbers, so the compiler deduces its return type from the types of the numbers. The `makeLambda` function returns a lambda function, so the compiler deduces its return type to be a function that takes an `int` and returns an `int`.

In the `main` function, we call these functions and print their results to demonstrate that the return type inference is working correctly. The `simpleFunction` function returns `42`, the `sum` function returns `7` and `8.0` for integer and floating point inputs respectively, and the `makeLambda` function returns a lambda function that doubles its input, so it returns `10` when called with `5`.

At the bottom, we also demonstrate __trailing return types__ which build off of the use of `auto` as the return type.  You provide a `->` expression at the end and then either give a type or use a `decltype` expression to specify the type based on something else.  This is very useful for readability when the type or the expression is compelx, especially when templates are involved. Note that this is the way lambdas provide return types to begin with.

Here's a more complex example not shown in the code:

```C++
template<typename T, typename U>
auto multiply(T a, U b) -> decltype(a * b) {
    return a * b;
}
```
