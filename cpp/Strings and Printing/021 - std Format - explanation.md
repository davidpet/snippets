## `std::format`

Introduced in C++20, `std::format` provides a more powerful, flexible, and type-safe way to format and print data compared to older functions like `printf` and `sprintf`. The `std::format` function is influenced by Python's `str.format()` method and the format string syntax is also reminiscent of Python's.

### Syntax:

```cpp
std::string std::format(const std::string& format_string, auto... args);
```

### Features:
- **Type Safety**: The format function checks the type of arguments and the format specifiers, ensuring type safety.
- **Consistent Syntax**: Unlike `printf`, where different format specifiers need to be used depending on the context (e.g., `%lld` for `long long int`, `%u` for `unsigned int`), `std::format` uses a more consistent syntax.
- **Positional Arguments**: You can specify the order of arguments to be formatted using `{}` placeholders.

### Notes:
- `std::format` is defined in the `<format>` header.
- It's much safer than older C-style formatting functions and is also expected to be more efficient in certain situations due to better type checking.
- The function can throw exceptions (`std::format_error`) if there's a mismatch between format specifiers and provided arguments or if the format string itself is invalid.

NOTE: it seems both VSCode and Clang are missing this feature, so don't rely on it yet!
