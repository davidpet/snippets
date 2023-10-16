I had to organize these snippets as .cc files with accompanying .md files because I could not find a working C++ kernel for Jupyter. The best one I found, in theory, supported C++ at least up to 17, was xeus-cling, but when you try to install that from conda-forge, it's just not there.

To try to make it more convenient, I generated BUILD files, but it turns out the BUILD files don't work because the .cc files have spaces in the names, which apparently Bazel can'd do.  Instead, use this command (on Mac M1 at least):
`clang++ thefile.cc -o output && ./output`

Potentially Missing Topics That I"ll Probably Manually Do:
- std::function<void(int, int)> template type syntax
- details of std::function (and maybe sample implementation)
- terminology: 'free functions'
- lambda with auto parameters (generic)
- built-in lambda types like in java.util.function?
- lambda to function pointer (only if not capture), then what if capture?
    - actual type of a lambda and what's inside
- syntax for template function taking a lambda
- function pointers with and without & (optional for free functions, mandatory for instance methods)

- attributes like [[maybe_unused]] - what is that and are there others?
- void*
- guarding headers with #ifndef type macros (or #pragma once)
- equivalents of all the main Java interview data structures
- regex
- using namespace
- sub-namespaces, global namespace
- parameters that are references, and returning references (and scope implications/dangers of that)
- placement new
- std::move
- std::any
- constexpr, decltype
- std::decay
- calling conventions, interop, etc.
- construction order of statics & globals in different source files linked together
- stdlib details: smart pointers, algorithms, stream I/O, file I/O, etc.
- most vexing parse
- variant/dynamic type?
- hashing
- new in C++ 20: automatic operator== and operator!= provided
- std::initializer_list
- how to enable C++ 20 in VSCode to avoid errors in "009 - Type Constraints" in "Templates"?
- concepts (improve the "Type Constraints" snippet)(https://en.cppreference.com/w/cpp/language/constraints)
- understand variadic templates better (notebook 016)
- std::back_inserter
- std::transform and std::copy_if overloads

- key uniquenesses of C++: stack vs. heap allocation, allocation just by making a variable, pointers and reference variables, templates instead of generics (duck-typed), :: for scope resolution instead of just ., header vs. implementation, direct unmanaged access to blocks of memory, ; required at end of class and enum declarations, virtual functions not the default (have to specify), true destructors (no finalizer or disposer) called at predictable time (right when out of scope), operator overloading + destructors + templates allowing for very fluent sublanguages to be built, things like iteration rely on conventions/protocols instead of base interfaces, TCO available under right circumstances, passing by const reference (immutability of object itself instead of just variable), access modifiers as sections rather than modifiers on members, all classnames explicit (no super, base, or this for that purpose), no base/root object, arbitrary access level changes in subclasses, lambda syntax very different and type differs based on what captured (strange), lambda has to specify what's captured and how, capture by reference can get dangling reference
