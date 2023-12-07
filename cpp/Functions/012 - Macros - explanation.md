# Macros

In this code, we have demonstrated the use of macros in C++. We have defined a macro PI with a value of 3.14159. We have also defined a macro MIN that takes two parameters and returns the minimum of the two. We have also shown how to define a multiline macro using the '\' character. We have also shown how to undefine a macro using the #undef directive. Finally, we have shown how to conditionally define a macro using the #ifndef, #define and #endif directives. In the main function, we have demonstrated the use of these macros.

Note the use of `()` to guard against one of the primary weaknesses of C++ macros - they don't follow normal lexical rules of the language. This is in contrast with a language like __Lisp__ where macros parse the syntax tree, rather than doing simple text substitution.
