# Different Floating Point Type Sizes
In the above code, we have demonstrated the different floating point type sizes in C++. We have used three types of floating point variables: `float`, `double`, and `long double`. 

For each type, we have printed the size of the variable (in bytes), the maximum value it can hold, and the minimum value it can hold. The `sizeof` operator is used to get the size of the variable, and `std::numeric_limits<T>::max()` and `std::numeric_limits<T>::lowest()` are used to get the maximum and minimum values respectively, where `T` is the type of the variable.

Please note that the size of `long double` and its maximum and minimum values may vary depending on the system and the compiler.