# Linkage

A symbol with __external linkage__ is one that can be seen outside of the source file that it's in (as opposed to __internal linkage__).

The following have __external linkage__:
  - global variables
  - functions

The following have __internal linkage__:
  - static global variables
  - static functions 
    - you can mark a top-level function as `static` just to make it internal (that's all it means)

To use a function with external linkage in a different source file, all you need to do is declare the prototype (as in a header) and use it.

To use a variable with external linkage in a different source file, you need to declare it like this: `extern int x;`
  - that is conceptually similar to what a function prototype is doing and could also be in a header

Note that in either case, having the `extern` or prototype in the same file where the real things are defined is fine and safe.

Note: a similar concept is how you have to provide static members an initialization somewhere outside the prototype.
