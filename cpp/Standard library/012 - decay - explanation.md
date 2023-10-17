### `std::decay`

`std::decay` is a type trait in C++ that provides the transformed type obtained by applying certain type adjustments to a type `T`. It's useful in metaprogramming scenarios where we need to determine the result type after decaying a given type.

The type adjustments applied by `std::decay` include:

1. Arrays are converted to pointers.
2. Functions are converted to function pointers.
3. `const`, `volatile`, and references are removed.

`std::decay` is commonly used in generic programming to ensure that we work with prvalue (pure rvalue) types, especially when using `decltype` which may return lvalue references.
