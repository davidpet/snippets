I had to organize these snippets as .cc files with accompanying .md files because I could not find a working C++ kernel for Jupyter. The best one I found, in theory, supported C++ at least up to 17, was xeus-cling, but when you try to install that from conda-forge, it's just not there.

To try to make it more convenient, I generated BUILD files, but it turns out the BUILD files don't work because the .cc files have spaces in the names, which apparently Bazel can'd do.  Instead, use this command (on Mac M1 at least):
`clang++ thefile.cc -o output && ./output`

Potentially Missing Topics That I"ll Probably Manually Do:
- C++ 20 ranges
- C++ 20 coroutines
- C++ 20 spaceship operator
- new in C++ 20: automatic operator== and operator!= provided
- new in C++ 20: modules

- concepts (improve the "Type Constraints" snippet)(https://en.cppreference.com/w/cpp/language/constraints)
- understand variadic templates better (notebook 016)

- ??? check java quick sheet & google for any missing concepts from stdlib
- ??? check old C++ notes doc for any missing concepts
- ??? check Anki cards for any missing concepts

- key uniquenesses of C++: stack vs. heap allocation, allocation just by making a variable, pointers and reference variables, templates instead of generics (duck-typed), :: for scope resolution instead of just ., header vs. implementation, direct unmanaged access to blocks of memory, ; required at end of class and enum declarations, virtual functions not the default (have to specify), true destructors (no finalizer or disposer) called at predictable time (right when out of scope), operator overloading + destructors + templates allowing for very fluent sublanguages to be built, things like iteration rely on conventions/protocols instead of base interfaces, TCO available under right circumstances, passing by const reference (immutability of object itself instead of just variable), access modifiers as sections rather than modifiers on members, all classnames explicit (no super, base, or this for that purpose), no base/root object, arbitrary access level changes in subclasses, lambda syntax very different and type differs based on what captured (strange), lambda has to specify what's captured and how, capture by reference can get dangling reference, templates only put <> in the declaration for specializations, attributes with [[]] instead of @ and not custom or usable by others, RAII idiom, preprocessor directives and macros, most vexing parse
