# Generic Function

In the code, we have demonstrated the use of generic functions in C++. 

The `get_max` function is a simple generic function that takes two arguments of the same type and returns the maximum of the two. This function can be used with any type that supports the '>' operator.

The `print_pair` function is a generic function with more than one type parameter. It takes two arguments of potentially different types and prints them as a pair. This function can be used with any type that supports the '<<' operator with `std::ostream`.

The `print_array` function is a generic function with a non-type parameter. It takes an array of any type and size, and prints all elements of the array. This function can be used with any type that supports the '<<' operator with `std::ostream`.

In the `main` function, we demonstrate the usage of these generic functions with different types and values.

NOTE: `const`, `&`, etc. can be part of a template type arg too.  If they are also provided in the template, it's additive (not a conflict).
