# Type Constraints

In the code, we are demonstrating the use of type constraints in C++ templates using the new `concept` feature introduced in C++20. 

We first define a concept `Equal` that requires a type `T` to have an `operator==` that returns a type convertible to `bool`. This concept is then used as a type constraint in the `areEqual` function, which accepts two parameters of a type that satisfies the `Equal` concept.

Next, we define another concept `HasToString` that requires a type `T` to have a `toString` method that returns a type convertible to `std::string`. This concept is used as a type constraint in the `printToString` function, which accepts a parameter of a type that satisfies the `HasToString` concept.

Finally, in the `main` function, we test these functions with both built-in types (like `int`) and custom types (like `MyType`). The `MyType` struct is designed to satisfy both the `Equal` and `HasToString` concepts.
