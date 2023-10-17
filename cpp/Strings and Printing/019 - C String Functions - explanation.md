## C String Operations in C++

C++ provides a set of C string functions that operate on null-terminated strings (`char*` and `wchar_t*`). These functions can be found in the `<cstring>` header for `char` and `<cwchar>` for `wchar_t`.

### Important C String Operations

- **strlen/wcslen**: Returns the length of the string.
- **strcpy/wcscpy**: Copies a string to another string.
- **strcat/wcscat**: Concatenates two strings.
- **strcmp/wcscmp**: Compares two strings.
- **strtok/wcstok**: Tokenizes a string using delimiters.

**Note**: Care should be taken when using these functions as they don't perform bounds checking and can lead to buffer overflows or other vulnerabilities. Modern C++ code typically uses the `std::string` class instead of C-style strings.
