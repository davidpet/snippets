# std::bitset

`std::bitset` is a class template in the C++ standard library that represents a fixed-size sequence of `N` bits. It is designed to manipulate data in the form of bitsets, allowing individual bit access, bit iteration, and bitwise operations.

#### **Key Features of `std::bitset`:**

- **Fixed Size**: The size of a `std::bitset` is determined at compile-time.

- **Bitwise Operations**: Supports all the standard bitwise operations (`&, |, ^, ~, <<, >>`).

- **Individual Bit Access**: Direct access to individual bits through the use of the `[]` operator.

- **String Conversions**: A `std::bitset` can be constructed from a string representation of a binary number, and can also be converted to a string.

- **Utility Functions**: Provides various utility functions like `count()` (to count set bits), `size()`, `test()`, `set()`, `reset()`, and `flip()`.

In the example, we demonstrate the creation of `std::bitset` objects from a string and through default initialization. We perform bitwise operations and show how to set, check, and manipulate individual bits. The `std::bitset` is a powerful tool for tasks involving bit manipulation and provides a convenient and clear interface for such operations.
