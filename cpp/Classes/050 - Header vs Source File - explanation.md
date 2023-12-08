# Header vs. Source File

While most of the examples in these snippets show the class being declared and defined in 1 chunk like in Java, C#, Python, etc, in practical everyday usage, this is not idiomiatic C++.  It is done here for convenience due to the snippet format.

In reality, the following usually go in a header (that is protected to only include once):
1. class declarations
1. function prototypes
1. extern variables
1. `virtual`, `override`, `final`

While the implementations of class methods, functions, and variables usually go in a source file that is linked in with the target program, having been compiled without the user having to see it.

The information in the header is enough for clients of the entities to use them and compile against them. Then the linker needs to find the actual definitions of methods, variables, and functions in order to properly link a fully functioning executable.

The syntax is straightforward - you just don't give bodies in the prototypes and then use scope resolution to give them in the source files.  It's not necessary to give access specifiers or static in the implementation bodies.

Note: if you provide the method body in the class declaration in the header, that is actually an __implicit inline__ method, which means, if possible, the compiler will generate the code inline as an optimization when someone calls it.  Top-level functions can also provide the bodies inline, but they're not as strongly considered for inlining unless they also use the `inline` keyword. This all depends on what the compiler decides to do in the end.
