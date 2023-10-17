# C++14 (2014): Minor update with improved lambda functions, digit separators, etc.

C++14 can be thought of as a refinement of C++11. While it didn't introduce as many groundbreaking features as C++11, it made many smaller additions and improvements that significantly enhanced the language's usability and expressiveness. Here's a summary of the important new features in C++14:

## C++14 Important Features

### Language Features:

- **Generalized Lambda Capture (Lambda Init Capture)**: Allows lambdas to capture variables by moving them or initializing new variables in the capture list.
    ```cpp
    auto lambda = [x = std::move(someVar)]{ /* ... */ };
    ```

- **Generic Lambdas**: Lambda functions can take auto-typed parameters, effectively making them function templates.
    ```cpp
    auto lambda = [](auto x, auto y) { return x + y; };
    ```

- **Relaxed `constexpr`**: `constexpr` functions can include more types of statements, widening its applicability.
  
- **Variable Templates**: Allows defining template variables.
    ```cpp
    template<typename T>
    constexpr T pi = T(3.1415926535897932385);
    ```

- **Binary Literals**: Introduction of binary number literals.
    ```cpp
    int x = 0b101101;
    ```

- **Digit Separators**: Use of `'` as a digit separator in numeric literals for better readability.
    ```cpp
    int one_million = 1'000'000;
    ```

- **Return Type Deduction for Normal Functions**: Function return types can be deduced similarly to `auto` variables.
    ```cpp
    auto func() { return 42; } // deduces int
    ```

- **Deprecated Attributes**: To indicate that certain code is deprecated and will or should no longer be used.
    ```cpp
    [[deprecated("Use newFunc instead")]]
    void oldFunc();
    ```

### Library Features:

- **User-defined Literals for Standard Library Types**: Such as `std::string`, `std::chrono`, etc.
  
- **Extensions to `<algorithm>`**: Introduction of new standard library algorithms, e.g., `std::make_heap`, `std::sort_heap`, `std::is_sorted_until`, etc.

- **`std::shared_timed_mutex`**: A timed version of shared mutex.

- **`std::make_unique` Function**: A helper function to create a `std::unique_ptr`.

- **`std::exchange` Utility Function**: Replaces the value of an object and returns its old value.

- **`std::integer_sequence` and Friends**: Tools for metaprogramming with integer sequences.

- **`std::quoted` Function**: A helper for input/output of strings with embedded spaces or special characters.

- **`std::get` for Tuples**: Obtain the value of a tuple with a specified type.

These features make C++14 a richer and more expressive language compared to C++11, smoothing out some of the rough edges from the earlier version and adding more utility functions and types to the standard library.
