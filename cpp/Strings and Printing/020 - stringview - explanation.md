## `std::string_view` in C++

### Overview

Introduced in C++17, `std::string_view` is a lightweight, non-owning reference to a string. It can be thought of as a pair of a pointer to a character array and a size, and is especially useful when you want to avoid unnecessary copies of strings.

### Key Features:

- Non-owning: It does not manage the lifetime of the characters it points to.
- Lightweight: Typically just the size of two pointers.
- Substring operations don't allocate memory or copy characters.
- Can be used with any character array, not just `std::string`.
- Immutable: Elements cannot be changed through the view.

### Notes:

- Use `std::string_view` when you want to inspect or access parts of a string without copying or allocating memory.
- Remember that the `std::string_view` does not manage the memory of what it points to. If the original string is destroyed or goes out of scope, the string view will be left dangling.
- Supports all the usual string operations like `substr`, `find`, etc. but in a non-allocating manner.
