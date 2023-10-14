# Character Types and Quoting
In this code snippet, we demonstrate the usage of different character types in C++: `char`, `wchar_t`, `char16_t`, and `char32_t`. The `char` type is used to store a single character, `wchar_t` is used to store a wide character, and `char16_t` and `char32_t` are used to store Unicode characters. 

We also show how to use quoting in C++. Single quotes are used for characters and double quotes are used for strings. 

Finally, we demonstrate how to declare and use strings in C++. Strings can be declared as arrays of characters or using the `string` class. 

Note that when printing `char16_t` and `char32_t` types, the ASCII value of the character is printed instead of the character itself. This is because the `cout` object is not designed to handle these types directly.