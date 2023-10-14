I had to organize these snippets as .cc files with accompanying .md files because I could not find a working C++ kernel for Jupyter. The best one I found, in theory, supported C++ at least up to 17, was xeus-cling, but when you try to install that from conda-forge, it's just not there.

To try to make it more convenient, I generated BUILD files, but it turns out the BUILD files don't work because the .cc files have spaces in the names, which apparently Bazel can'd do.  Instead, use this command (on Mac M1 at least):
`clang++ thefile.cc -o output && ./output`

Potentially Missing Topics That I"ll Probably Manually Do:
- guarding headers with #ifndef type macros (or #pragma once)
- all the ways to initialize a stack object vs. heap object (inc. uniform initialization from C++ 11)
- 'new' and 'delete'
- equivalents of all the main Java interview data structures
- array decay
- multidimensional arrays
- 'sizeof' operator on stack arrays, dynamic arrays, objects, etc.
- regex
- pointers to pointers, references of pointers, dereferencing, etc.
- pointer arithmetic
- variations allowed for 'main' function signature
- 'auto'
- rvalue references
- default included constructors
