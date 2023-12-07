# Uniqueness of Method Signature

In C++, the uniqueness of a function (or method) signature is determined by the function name, the number of parameters, and the type of parameters. The parameter names do not contribute to the uniqueness of the function signature. This allows for function overloading, where multiple functions can have the same name but different parameter lists.

In the provided code snippet, we have demonstrated this concept with a series of functions named `printSum`. Each `printSum` function has a unique signature, either because it takes a different number of parameters or because it takes parameters of different types. The compiler can distinguish between these functions based on their signatures, and it will call the appropriate function based on the arguments provided at the call site.

Note that the return type of a function does not contribute to its signature. Therefore, you cannot have two functions with the same name and parameter list but different return types.

Note: this is better shown in __inline functions__ above where a function pointer does not contain parameter names but only parameter types.
Note: function prototypes are allowed to have just types and not param names too. Only the implementations need param names.  The param names can even be there, but not match!

`const` and `&` are part of the uniqueness of the signature. They can sometimes be ommitted in one place or the other and still work, but they're really supposed to be there. You can even overload by them, but it's ambiguous, and sometimes the compiler will just show an error if it doesn't know what you want it to call.
 