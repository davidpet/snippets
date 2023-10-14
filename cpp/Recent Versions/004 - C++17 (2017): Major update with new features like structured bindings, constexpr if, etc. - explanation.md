# C++17 (2017): Major update with new features like structured bindings, constexpr if, etc.
1. Structured bindings allow you to declare multiple variables initialized from a tuple, pair, array, or struct. In the example, we used structured bindings to extract the elements of a pair and a map.

2. `constexpr if` is a compile-time if statement. It allows you to discard branches of an if statement at compile time based on a condition that can be evaluated at compile time. In the example, we used `constexpr if` to check the size of an int and in a template function to perform different actions based on the type of the argument.

3. The `get_value` function demonstrates how `constexpr if` can be used in a template function to perform different actions based on the type of the argument. If the argument is a vector, it returns the first element; otherwise, it returns the argument itself.