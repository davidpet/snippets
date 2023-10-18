## `std::reference_wrapper<T>`

`std::reference_wrapper` is a class template that wraps a reference in a copyable, assignable object. It's often used where you want to store references in containers, which normally don't support references.

### Key Points:

- Can be used to store references in STL containers, like `std::vector`.
- Provides an overloaded `operator()` which makes it usable in place of callable objects.
- Supports conversion back to the referenced object.

## `std::ref` and `std::cref`

`std::ref` and `std::cref` are utility functions that produce a `reference_wrapper` to a given object or to a constant object, respectively.

### Key Points:

- `std::ref` produces a `reference_wrapper<T>` of a given lvalue of type `T`.
- `std::cref` produces a `reference_wrapper<const T>` of a given lvalue of type `T`.
- They're especially useful when passing references to `std::thread` or other standard library functions that usually take objects by value.

### Summary:

- `std::reference_wrapper` allows you to wrap references in a copyable, assignable object.
- `std::ref` and `std::cref` are utility functions that create a `reference_wrapper` or `const reference_wrapper` respectively.
- They're useful in scenarios like storing references in containers or passing them to functions or threads which take their arguments by value.
