I had to organize these snippets as .cc files with accompanying .md files because I could not find a working C++ kernel for Jupyter. The best one I found, in theory, supported C++ at least up to 17, was xeus-cling, but when you try to install that from conda-forge, it's just not there.

To try to make it more convenient, I generated BUILD files, but it turns out the BUILD files don't work because the .cc files have spaces in the names, which apparently Bazel can'd do.  Instead, use this command (on Mac M1 at least):
`clang++ thefile.cc -o output && ./output`

Manual Research Items (w/ ChatGPT help as appropriate):
- stdlib concurrency
   - threads (inc. interrupting)
   - futures/promises 
   - locks 
   - atomic
   - signals/conditions
   - sleep, thread pools
   - fork/join framework
   - thread-local storage
- method reference virtual even if on base
- contravariance of "pointers to members"
- object suicide
- DLL loading may cause static/global to go after main
- \<typinfo\> header
- vtable built incrementally during construction (could affect virtual calls)
- class layout when has vtable (including multiple inheritance, thunking, etc.)
- throw to rethrow
- can catch exceptions by value or reference
- catch(...) syntax
- try/catch around whole function body inc. c'tor with init list
- look at members of some of the container classes inc. the typedefs
- std::numeric_limits
- private variable hack via copy of declaration changed trick (don't do though)
- extern templates
- trailing return type lets you use decltype on args after (and can do expressions in decltype like x + y)
- template aliases
- user-defined literals
- static_assert
- alignof and alignas
- reference_wrapper, cref
- structured binding declarations (C++ 17
- switch initializers like if initializers
- constinit

- key uniquenesses of C++: stack vs. heap allocation, allocation just by making a variable, pointers and reference variables, templates instead of generics (duck-typed), :: for scope resolution instead of just ., header vs. implementation, direct unmanaged access to blocks of memory, ; required at end of class and enum declarations, virtual functions not the default (have to specify), true destructors (no finalizer or disposer) called at predictable time (right when out of scope), operator overloading + destructors + templates allowing for very fluent sublanguages to be built, things like iteration rely on conventions/protocols instead of base interfaces, TCO available under right circumstances, passing by const reference (immutability of object itself instead of just variable), access modifiers as sections rather than modifiers on members, all classnames explicit (no super, base, or this for that purpose), no base/root object, arbitrary access level changes in subclasses, lambda syntax very different and type differs based on what captured (strange), lambda has to specify what's captured and how, capture by reference can get dangling reference, templates only put <> in the declaration for specializations, attributes with [[]] instead of @ and not custom or usable by others, RAII idiom, preprocessor directives and macros, most vexing parse, new spaceship operator, variadic templates

--> make plan to do regular reviews of this (and other languages) snippets, and to resume Anki on C++ (and incorporate items missing from here)
    (plus Anki of Python and maybe other things)
