# Type Alias

In the code, we have demonstrated the use of type alias in C++. Type alias is a powerful feature in C++ that allows you to create a new name for an existing type. This can be particularly useful when working with complex types, as it can make your code more readable and easier to understand.

We have shown how to create a type alias for simple types like `int` and `std::string`, as well as for more complex types like pointers and functions. We have also shown how to use these type aliases to declare variables and functions.

The output of the code will be:

```
10
Hello, World!
20
Hello, Function!
```

This demonstrates that the type aliases are working as expected.

Also, note that you can include `const` and `&` as part of the righthand side of the type, and it will be included transparently in uses of the lefthand side.

While `using` is the newer way to do it, the older way to do it is with `typedef`.  `typedef` still works, but is less readable and less flexible.  Unlike a simple equality like with `using`, `typedef` uses the alias name as a variable placeholder in the syntax to define it.
