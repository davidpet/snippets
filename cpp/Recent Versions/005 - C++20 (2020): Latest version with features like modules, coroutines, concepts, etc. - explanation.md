# C++20 (2020): Latest version with features like modules, coroutines, concepts, etc.

C++20 brought in a lot of significant features and improvements to the language. Here's a summary of the important new additions and changes in C++20 compared to C++17:

## C++20 Important Features

### Language Features:

- **Concepts**: A feature to specify constraints on template parameters, enhancing compile-time type-checking.
    ```cpp
    template<typename T>
    concept Arithmetic = std::is_arithmetic_v<T>;
    ```

- **Ranges**: A new way to think about sequences and algorithms, which offers composable operations on ranges.
    ```cpp
    std::vector<int> vec = {1, 2, 3, 4, 5};
    auto evenNumbers = vec | std::views::filter([](int n) { return n % 2 == 0; });
    ```

- **Coroutines**: Allow functions to be exited and later resumed, paving the way for more readable asynchronous code.
    ```cpp
    std::task<int> computeValue() {
        co_return 42; 
    }
    ```

- **`consteval`**: Ensures that a function is always executed at compile time.

- **Three-way Comparison (Spaceship Operator `<=>`)**: Simplifies writing comparison functions.
    ```cpp
    auto operator<=>(const T& other) const = default;
    ```

- **`[[likely]]` and `[[unlikely]]` Attributes**: Provides hints to the compiler about the expected likelihood of a branch.

- **Feature Test Macros**: Macros to test whether a certain feature is available.

### Library Features:

- **`std::span`**: A lightweight, non-owning reference to a contiguous sequence, or a span.

- **`std::jthread`**: A thread with cooperative interruption via `stop_token`.

- **`std::format`**: A new, type-safe way to format text, influenced by the popular `fmt` library.
  
- **`std::stopwatch`**: A utility to conveniently measure elapsed time.

- **`std::bit_cast`**: A utility for reinterpreting an object representation.

- **`std::starts_with` and `std::ends_with` for `std::string` and `std::string_view`**: Methods to check prefix and suffix.

- **Calendars and Time Zones in `<chrono>`**: Comprehensive date and time utilities with time zone support.

- **`contains` Member Function for Associative Containers**: Simplified check if a key exists in a container.

- **New Algorithms**: Includes `std::shift_left`, `std::shift_right`, `std::is_sorted_until`, among others.

- **`std::atomic_ref`**: Atomic operations on non-atomic objects.

- **Concepts Library (`<concepts>`)**: Provides a set of standard concepts.

- **Ranges Library**: Extends the existing algorithms with range-based overloads and introduces new range adaptors and views.

- **`std::bind_front`**: Front arguments binding utility, akin to `std::bind` but more focused.

- **Improved `std::function`**: Now able to store objects with noexcept move constructors and no copy constructor.

- **`std::remove_cvref` Type Trait**: Simplifies obtaining the type stripped of top-level cv-qualifiers and reference.

### Miscellaneous:

- **Modules**: A new way to manage and organize code, aiming to replace traditional header files and improve compilation times. (Though it's worth noting that the ecosystem adoption might take a while.)

- **New Standard Attributes**: Includes `[[no_unique_address]]` and others.

- **Improved constexpr**: More STL functions and methods are `constexpr`, and there's better support for `constexpr` dynamic allocation.

- **New Numeric Libraries**: Such as `<numbers>` which provides mathematical constants.

This list captures many of the major features of C++20, but there are also numerous smaller improvements and refinements across the board. The update greatly enhances the power and expressiveness of the language and its standard library.
