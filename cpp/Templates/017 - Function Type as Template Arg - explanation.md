# Function Type as Template Arg

To use a function type as the template arg, you just use it like any other type arg and treat it as a function.

To specify the function type when you use the template, the syntax is similar to function pointers but without  name: `void(int, int)`.

This snippet also demonstrates statically binding a specific function pointer to a templated class.
