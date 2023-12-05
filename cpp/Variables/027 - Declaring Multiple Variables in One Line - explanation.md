# Declaring Multiple Variables in One Line

In C++, you can declare multiple variables of the same type in one line. This can be done with or without initialization. However, declaring multiple variables of different types in one line is not allowed. But since C++11, you can declare multiple variables of different types in one line using the auto keyword, as long as all the variables have the same base type.

Mixing of * and & within the same line does not rely on `auto` - it is a feature of the fact that * and & bind to the variable instead of the type.