# Built-in Comparators for Elements
In this code, we first define a simple struct `Point` with two integer members `x` and `y`. We overload the '<' operator for our struct to compare two `Point` objects based on their `x` values.

In the `main` function, we first create a vector of integers and sort it using the `std::sort` function, which uses the built-in comparator for integers. We then print the sorted vector.

Next, we create a vector of `Point` objects and sort it using the `std::sort` function. This time, the '<' operator we overloaded is used as the comparator. We then print the sorted vector.

This demonstrates the use of built-in comparators for elements in C++ templates. The built-in comparators are used when the type of the elements provides a definition for the comparison operation. If the type does not provide a definition, you can define your own, as we did with the `Point` struct.