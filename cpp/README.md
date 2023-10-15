I had to organize these snippets as .cc files with accompanying .md files because I could not find a working C++ kernel for Jupyter. The best one I found, in theory, supported C++ at least up to 17, was xeus-cling, but when you try to install that from conda-forge, it's just not there.

To try to make it more convenient, I generated BUILD files, but it turns out the BUILD files don't work because the .cc files have spaces in the names, which apparently Bazel can'd do.  Instead, use this command (on Mac M1 at least):
`clang++ thefile.cc -o output && ./output`

Potentially Missing Topics That I"ll Probably Manually Do:
- guarding headers with #ifndef type macros (or #pragma once)
- all the ways to initialize a stack object vs. heap object (inc. uniform initialization from C++ 11)
- equivalents of all the main Java interview data structures
- array decay in functions
- regex
- variations allowed for 'main' function signature
- trailing return types
- rvalue references in functions
- default included constructors & all the automatically called constructors, conversions, assignments in various scenarios
- using namespace
- sub-namespaces, global namespace
- passing by reference, constant reference, const bool type stuff, const pointers
- const correctness
- const class members
- lifetime and construction of class members inc. construction order, constant expression requirements, etc.
- this is a pointer, not a reference
- make sure to cover reference and pointer binding of class members in initializer list and inline, etc.
- parameters that are references, and returning references (and scope implications/dangers of that)
- struct and how compares to class
- strongly point out somewhere that the way we inline functions and classes in snippets is not the norm (usually separate prototype)
- template specializations
- placement new
- destructors, virtual destructors
- operator overloading (both inside the class and in friend functions)
- std::move
- constexpr
- std::decay
- throw specifier and noexcept
- inline functions and inline methods
- variadic templates
- calling conventions, interop, etc.

- key uniquenesses of C++: stack vs. heap allocation, allocation just by making a variable, pointers and reference variables, templates instead of generics, :: for scope resolution instead of just ., header vs. implementation, direct unmanaged access to blocks of memory, ; required at end of class and enum declarations, virtual functions not the default (have to specify), true destructors (no finalizer or disposer) called at predictable time (right when out of scope), operator overloading + destructors + templates allowing for very fluent sublanguages to be built, things like iteration rely on conventions/protocols instead of base interfaces, TCO available under right circumstances, passing by const reference (immutability of object itself instead of just variable)

