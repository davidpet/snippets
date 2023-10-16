# Templates vs. Generics

Although some of the comments and snippet names in here use "Generics", that is an artifact of the generic way in which I generated these snippets using an OOP template. C++ does not have generics but rather than templates instead, in order to implement __generic programming__.

Note the following differences:
1. Templates create new copies of the function/class at __compile-time__ while generics use 1 function/class (usually with type erasure and some rules, wildcards, etc.)
1. Templates use __duck typing__ instead of relying on interfaces and constraints like generics.  If something happens to compile against a template, it works.  This allows, for instance, the use of a class with a call operator vs. a lambda vs. a function pointer interchangeably.
1. Templates can be used for more than just element types - for instance __metaprogramming__ via passing in numeric arguments, etc.
1. While generics in Java only work on reference types and not primitives, templates in C++ work on any type, built-in or user-defined, as longa s they duck-type correctly.

It's worth noting that templates are the one area where C++ starts to really act like Python in terms of duck typing, whereas the rest of the language is very strongly statically typed.
