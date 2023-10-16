# Creation order of constants and statics

### Non-local Variables (Globals and Static Globals):

- Variables declared outside any function or class, potentially with the `static` keyword, are initialized before the `main()` function starts.

- These variables are initialized in an order governed by two primary rules:
  1. Variables within a single translation unit (i.e., a source file that's being compiled) are initialized in the order in which they are defined.
  2. The order of initialization between variables in different translation units is unspecified (it's known as the "Static Initialization Order Fiasco").

- There is a distinction between zero-initialization (which happens first for all non-local static storage duration variables) and dynamic initialization (which happens next, where things like constructors are called).

### Local Static Variables:

- Variables declared inside a function or block with the `static` keyword are initialized the first time control passes through their declaration. They are only initialized once.

- After initialization, they persist for the remainder of the program's execution, retaining their value between function calls.

### Global Constants with `constexpr` or `inline`:

- Starting from C++17, inline variables, including global `constexpr` variables, are guaranteed to be initialized just once across all translation units. This solves the problem of potential multiple initializations that could occur in prior versions of C++ with other techniques.

### Ordering Concerns with Constructors and Destructors:

- For complex objects that have constructors and destructors, the order in which these run across translation units can lead to issues. Destructors for these objects run in the reverse order of the constructors.

- As mentioned, the order of initialization across different translation units is not specified. This can cause problems if one global/static object's constructor relies on another global/static object being already initialized.

**Recommendation:** Be cautious with global and static variables, especially when their initialization order matters. If you find that you're trying to control or rely on the order of global variable initialization, it might be a sign that you should reconsider the design. In some cases, the "Construct On First Use Idiom" can help to avoid static initialization order issues.
