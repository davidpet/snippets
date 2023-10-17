I had to organize these snippets as .cc files with accompanying .md files because I could not find a working C++ kernel for Jupyter. The best one I found, in theory, supported C++ at least up to 17, was xeus-cling, but when you try to install that from conda-forge, it's just not there.

To try to make it more convenient, I generated BUILD files, but it turns out the BUILD files don't work because the .cc files have spaces in the names, which apparently Bazel can'd do.  Instead, use this command (on Mac M1 at least):
`clang++ thefile.cc -o output && ./output`

Potentially Missing Topics That I"ll Probably Manually Do:
- unordered_map and unordered_set
- multimap and multiset (and unordered variants)
- how map and set hash & order elements (default vs. custom ordering)
    - in general how collections get info about elements (which operators, etc.)
- equivalents of all the main Java interview data structures
- hashing
- std::initializer_list
- std::pair
- std::wstring, tstring, u*string, etc?
- std::array
- std::valarray
- std::bitset
- <algorithm> header operations to use these efficiently
- deep copying
- usual way to do toString() behavior and what do the collections implement already?

** folders left: 3rd Party Libraries, Language-Specific Features, Recent Versions, Standard Library, Strings, Testing **
- MyClass() = default;
- size_t
- void*
- #pragma
- regex
- parameters that are references, and returning references (and scope implications/dangers of that)
- placement new
- std::move, swap
- std::any
- constexpr, decltype
- std::decay
- calling conventions, interop, etc.
- stdlib details: smart pointers, algorithms, stream I/O, file I/O, etc.
- ??? check java quick sheet & google for any missing concepts from stdlib
- most vexing parse
- variant/dynamic type?
- new in C++ 20: automatic operator== and operator!= provided
- how to enable C++ 20 in VSCode to avoid errors in "009 - Type Constraints" in "Templates"?
- concepts (improve the "Type Constraints" snippet)(https://en.cppreference.com/w/cpp/language/constraints)
- understand variadic templates better (notebook 016)
- std::back_inserter
- std::transform and std::copy_if overloads
- new in C++ 20: modules
- std random numbers and such

- key uniquenesses of C++: stack vs. heap allocation, allocation just by making a variable, pointers and reference variables, templates instead of generics (duck-typed), :: for scope resolution instead of just ., header vs. implementation, direct unmanaged access to blocks of memory, ; required at end of class and enum declarations, virtual functions not the default (have to specify), true destructors (no finalizer or disposer) called at predictable time (right when out of scope), operator overloading + destructors + templates allowing for very fluent sublanguages to be built, things like iteration rely on conventions/protocols instead of base interfaces, TCO available under right circumstances, passing by const reference (immutability of object itself instead of just variable), access modifiers as sections rather than modifiers on members, all classnames explicit (no super, base, or this for that purpose), no base/root object, arbitrary access level changes in subclasses, lambda syntax very different and type differs based on what captured (strange), lambda has to specify what's captured and how, capture by reference can get dangling reference, templates only put <> in the declaration for specializations, attributes with [[]] instead of @ and not custom or usable by others
