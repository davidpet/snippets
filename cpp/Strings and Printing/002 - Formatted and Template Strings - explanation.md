# Formatted and Template Strings

1. The first part of the code demonstrates a basic string declaration and printing in C++.
2. The second part shows how to create a formatted string using the old C style `sprintf` function. This function can be unsafe because it does not check the size of the output buffer, which can lead to buffer overflow.
3. The third part shows how to create a formatted string using the safer C style `snprintf` function. This function checks the size of the output buffer to prevent buffer overflow.
4. The fourth part shows how to create a formatted string using the C++ style `stringstream` class. This class provides a high-level interface for string formatting and manipulation.
5. The last part shows how to create a template string and replace a placeholder with a specific value. This is done using the `find` and `replace` methods of the `std::string` class. The `find` method returns the position of the first occurrence of a substring, and the `replace` method replaces a portion of the string with another string.

Note: `sprintf` is actually deprecated in clang, but not in the C++ spec, but it's so famous that I didn't replace it here.
