# NaN, Infinity, etc.
In the code, we are demonstrating the use of NaN (Not a Number) and Infinity in C++. These are special floating-point values that are used to represent undefined or unrepresentable numbers (NaN) and values that are greater than any other number (Infinity).

We use the `std::numeric_limits<double>::quiet_NaN()` to get a NaN value and `std::numeric_limits<double>::infinity()` to get an Infinity value. We can also get a Negative Infinity value by negating the Infinity value.

We can check if a value is NaN or Infinity using the `std::isnan()` and `std::isinf()` functions respectively. These functions return true if the value is NaN or Infinity and false otherwise.

Please note that these special values are part of the IEEE 754 standard for floating-point arithmetic, which is supported by almost all modern processors and programming languages.