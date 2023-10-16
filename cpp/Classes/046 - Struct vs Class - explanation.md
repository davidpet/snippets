# Struct vs. Class

A `struct` is just a `class` with the following differences:
1. A `struct` defaults to `public` while a `class` defaults to `private`.
1. A `struct` defaults to public inheritance while a `class` defaults to private inheritance.

Other than those differences, a `struct` can have anything a `class` can have, though usually, by convention only, a `struct` tends to represent a POD type, wrapping some values.

Note: In C (not C++) there is some weirdness with structs that you don't have to worry about in C++, such as having to use `->` when it's not a pointer, and having to use the word `struct` in front of the type.

Note: there is no difference between `struct` and `class` in terms of padding.  Any members can have padding in between for optimization.  Some systems code will assume a block of memory looks like a struct (eg. from the ISO spec) - in order to do that, you need to signal to the compiler __not to pad__ the object with some type of directive, pragma, etc.  This differs by compiler.
