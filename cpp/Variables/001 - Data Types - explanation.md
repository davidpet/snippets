# Data Types

Basic data types in C++ include integer, floating point, double precision floating point, character, boolean, and wide character data types. The `int` keyword is used to declare an integer, `float` for floating point, `double` for double precision floating point, `char` for character, `bool` for boolean, and `wchar_t` for wide character. Each variable is initialized with a value and then printed to the console. The expected output is commented at the end of each print statement.

Integers can be further divided into `short`, `long`, and `long long`, with and without the `int` keyword after them.

Sizes are not guaranteed by the spec, but usually `long` and `int` are 32-bit while `long long` is 64-bit, and `short` is 16-bit.  `char` and `bool` are usually a single byte.

To make any integral type `unsigned`, just use the `unsigned keyword` with it.  However, literals are usuall only up to `long` and if you have an `unsigned long` or `long long` or `unsigned long long`, you need to append `UL`, `LL`, or `ULL` to the end of the literal, similar to using `L` in Java.

You can append `f` to specify float instead of double literal.  Scientific notation (eg. `1e-3`) is supported.

NOTE: there's something called a `long double` which seems to be the same thing as `double`.
NOTE: `char` can be unsigned as well, as it can be treated as a __number of character__.
