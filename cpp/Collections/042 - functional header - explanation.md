# Functional header

### 1. Function Wrappers:
- **`std::function`**: General-purpose polymorphic function wrapper.

### 2. Predicates:
- **`std::less`**: Function object for less-than inequality comparison.
- **`std::greater`**: Function object for greater-than comparison.
- **`std::not_fn`**: C++17's utility to create a function object that negates the result of another function object.

### 3. Logical Operations:
- **`std::logical_and`**: Logical AND function object.
- **`std::logical_or`**: Logical OR function object.

### 4. Arithmetic Operations:
- **`std::plus`**: Addition function object.
- **`std::minus`**: Subtraction function object.

### 5. Binders:
- **`std::bind`**: Binds one or more arguments to a function object.

### 6. Other Utilities:
- **`std::ref` and `std::cref`**: Generate references or constant references to objects.

This example illustrates how the `<functional>` header can be used in tandem with collections. The header offers utilities that can make certain operations, especially with algorithms, more succinct and expressive.
