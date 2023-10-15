# Delayed Initialization of Locals

There is no ban on not initializing local variables in C++, but integral types that are not static will contain junk if you don't initialize them.

It is not possible to delay initialization of a __constant or reference__ - you have to initialize them __immediately__.
