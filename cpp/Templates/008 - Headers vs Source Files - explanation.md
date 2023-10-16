# Headers vs. Source Files

1. Templates are typically provided entirely in the header file for simplicity to avoid the complexity of template instantiation.
   - the compiler won't inline it if it's big enough for redundancy to be a problem (probably)
   - this snippet shows how the other approach (implementation in source file) looks for templates
1. The content of the header file looks exactly like what we did in the other snippets, except functions and methods don't have bodies because we only give prototypes.
1. The syntax for defining function and method bodies in the source file is not entirely unexpected though very ugly.  See the examples.
   - you could roughly sum it up as looking like an inline function template but where you have to put the class (with type params).
1. An additional step is needed (that I curiously didn't learn in school years ago) to make it all linkable.
   - all classes and functions (separately any methods that have their own separate templates) must be __instantiated__ in the source file.
   - without doing that, you will get __link errors__
   - instead of `MyClass<T>` being a generic, in C++ `MyClass<int>` becomes its own generated class separate from `MyClass<char*>` for instance
1. If you didn't know ahead of time which types to instantiate, you'd have to either put the implementation in the header or use a special file supported by modern compilers (eg. `.tpp` file).
1. Within the client code, just include the header and use the template.  The compiler will generate the right prototypes for your types, and the linker will link it up with the instantiated templates in the source file.
