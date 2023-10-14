# Templates for Type-Independent Code
1. The `add` function is a simple function template that can add two values of any type that supports the `+` operator. It is used with both `int` and `double` types in the `main` function.

2. The `MyArray` class is a class template that represents an array of any type. It is used with both `int` and `std::string` types in the `main` function.

3. The `are_equal` function is a template with multiple type parameters. It checks if two values are equal, even if they are of different types. It is used with `int` and `double` types, and `std::string` and `const char*` types in the `main` function.

4. The `std::boolalpha` manipulator is used to print boolean values as `true` or `false` instead of `1` or `0`.

5. This code demonstrates the basic usage of function templates, class templates, and templates with multiple type parameters. There are many more advanced features of templates in C++, such as template specialization, variadic templates, and template metaprogramming, which are not covered in this example.