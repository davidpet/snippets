## `std::numeric_limits` in C++

The `std::numeric_limits` template is a way to obtain properties of arithmetic types in C++. It's a part of the `<limits>` header.

### Key Features:

- Provides information about the properties and limits of numeric types.
  
- Can be used with all fundamental numeric types like `int`, `float`, `double`, etc.
  
- Gives insights on:
  - Min and max values
  - Infinity and quiet NaN (Not a Number) representations for floating-point types
  - Whether the type is signed, integral, or represents exact integers, etc.

---

### Code Snippets:

1. **Basic properties of `int`**:

    ```cpp
    #include <iostream>
    #include <limits>

    int main() {
        std::cout << "Minimum int value: " << std::numeric_limits<int>::min() << "\n";
        std::cout << "Maximum int value: " << std::numeric_limits<int>::max() << "\n";
        std::cout << "Is int signed? " << std::numeric_limits<int>::is_signed << "\n";
        std::cout << "Is int an integer? " << std::numeric_limits<int>::is_integer << "\n";
    }
    ```

2. **Properties of `double`**:

    ```cpp
    #include <iostream>
    #include <limits>

    int main() {
        std::cout << "Minimum double value: " << std::numeric_limits<double>::min() << "\n";
        std::cout << "Maximum double value: " << std::numeric_limits<double>::max() << "\n";
        std::cout << "Infinity for double: " << std::numeric_limits<double>::infinity() << "\n";
        std::cout << "Double has infinity? " << std::numeric_limits<double>::has_infinity << "\n";
    }
    ```

---

### Things to Remember:

- Use `std::numeric_limits` when you need to determine properties or boundaries of numeric types, which can be especially handy for writing portable code.
  
- Some properties might not be applicable to all numeric types. For example, integral types won't have infinity or NaN values.

---

By employing `std::numeric_limits`, developers can obtain a wide array of data about numeric types, making it easier to write portable and error-free numerical code.
