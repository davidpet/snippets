# C++ 11 (2011)

C++11 introduced a myriad of new features that significantly improved the language both in terms of capabilities and ease of use. Here's a summary of the major new features:

## C++11 Major Features

### Language Features:

- **Auto Keyword**: Deduce the type of a variable from its initializer.
    ```cpp
    auto i = 42; // i is an int
    ```

- **Lambda Expressions**: Define anonymous functions inline.
    ```cpp
    auto lambda = [](int x) { return x + 1; };
    ```

- **Ranged-Based For Loops**: Simplified way to iterate over containers.
    ```cpp
    for (auto& value : vector) { /*...*/ }
    ```

- **Initializer Lists**: Uniform initialization syntax.
    ```cpp
    std::vector<int> v = {1, 2, 3};
    ```

- **nullptr**: A new keyword for the null pointer, distinct from the integer 0.
  
- **Static Assertions**: Compile-time assertions using `static_assert`.

- **Override and Final Specifiers**: Explicitly indicate overriding of virtual functions or prevent further overriding.

- **Deleted and Defaulted Functions**: Explicitly delete or default special member functions.

- **Type Aliases**: Using `using` for type definitions, an alternative to `typedef`.
    ```cpp
    using Vec = std::vector<int>;
    ```

- **Attributes**: Introduce attribute syntax.
    ```cpp
    [[nodiscard]] int compute();
    ```

- **Trailing Return Types**: Useful especially with auto-returning functions.
    ```cpp
    auto func() -> int;
    ```

- **Raw String Literals**: Allow strings to not treat backslashes as escape characters.
    ```cpp
    R"(raw_string)";
    ```

### Library Features:

- **Smart Pointers**: Memory management tools like `std::unique_ptr`, `std::shared_ptr`, and `std::weak_ptr`.

- **Threading Support**: Introduction of threads, mutexes, condition variables, and other synchronization primitives.

- **New Containers**: Such as `std::array`, `std::forward_list`, and `std::unordered_map`.

- **Regular Expressions**: Added support for regex processing with `std::regex`.

- **Tuples**: A fixed-size collection of heterogeneous values, `std::tuple`.

- **Chrono Library**: For dealing with time, durations, and clocks.

- **Functional Library Extensions**: Including `std::function` and `std::bind`.

- **C++ Standard Library Algorithms Improvements**: New algorithms and improvements to existing ones.

- **Move Semantics**: Optimization technique utilizing rvalue references.

### Concurrency:

- **Memory Model for C++**: Ensures that threaded programs behave well.

- **Atomic Operations**: Operations that run completely independently of any other operations and are uninterruptible.

- **Thread-Local Storage**: Allows each thread to have its own instance of a variable.

These are just the major highlights of C++11. The actual specification contains more detailed features, improvements, and nuances.
