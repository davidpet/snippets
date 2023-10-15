I had to organize these snippets as .cc files with accompanying .md files because I could not find a working C++ kernel for Jupyter. The best one I found, in theory, supported C++ at least up to 17, was xeus-cling, but when you try to install that from conda-forge, it's just not there.

To try to make it more convenient, I generated BUILD files, but it turns out the BUILD files don't work because the .cc files have spaces in the names, which apparently Bazel can'd do.  Instead, use this command (on Mac M1 at least):
`clang++ thefile.cc -o output && ./output`

Potentially Missing Topics That I"ll Probably Manually Do:
- all the ways to initialize a stack object vs. heap object (inc. uniform initialization from C++ 11)
- const correctness/const overloading
- const class members
- make sure to cover reference and pointer binding of class members in initializer list and inline, etc.
- struct and how compares to class
- strongly point out somewhere that the way we inline functions and classes in snippets is not the norm (usually separate prototype)
- inline methods
- changing access level of base member in subclass?
- virtual method until certain subclass - makes non-virtual after that or not?
- diamond inheritance and ambiguities between base class members in subclass (virtual inheritance)
- in c'tor init list, can you do x(x) safely to send param to member?
- does init list in c'tor that delegates to aother c'tor really replace instead of augmenting?  ChatGPT says so but it doesn't make sense.
- class declared locally

- guarding headers with #ifndef type macros (or #pragma once)
- equivalents of all the main Java interview data structures
- regex
- using namespace
- sub-namespaces, global namespace
- parameters that are references, and returning references (and scope implications/dangers of that)
- template specializations
- placement new
- std::move
- std::any
- constexpr, decltype
- std::decay
- variadic templates
- calling conventions, interop, etc.
- construction order of statics & globals in different source files linked together
- stdlib details: smart pointers, algorithms, stream I/O, file I/O, etc.
- what things have to be compile-time constants?
- most vexing parse
- variant/dynamic type?
- terminology: 'free functions'
- hashing
- new in C++ 20: automatic operator== and operator!= provided

- key uniquenesses of C++: stack vs. heap allocation, allocation just by making a variable, pointers and reference variables, templates instead of generics, :: for scope resolution instead of just ., header vs. implementation, direct unmanaged access to blocks of memory, ; required at end of class and enum declarations, virtual functions not the default (have to specify), true destructors (no finalizer or disposer) called at predictable time (right when out of scope), operator overloading + destructors + templates allowing for very fluent sublanguages to be built, things like iteration rely on conventions/protocols instead of base interfaces, TCO available under right circumstances, passing by const reference (immutability of object itself instead of just variable), access modifiers as sections rather than modifiers on members, all classnames explicit (no super, base, or this for that purpose), no base/root object
