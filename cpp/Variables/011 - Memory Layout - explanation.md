# Memory layout

A variable __declared locally__ is an __automatic variable__ allocated on the __stack__.  Unlike pretty much all other languages, in C++, just declaring an automatic variable creates the object.  For instance, `MyClass m;` will use the default constructor to create an instance of `MyClass`, but you can also call other constructors (`MyClass m(10);`);

A __member variable__ of a class that is not a pointer or reference is allocated as part of the __storage of the class__, which could be on the __stack of heap__ depending on how the class was created. Like with local variables, declaring a type on the class will trigger the default constructor, but you can override that behavior in the __constructor initialization list__ to choose a different constructor.

A __member reference__ must be bound in the __constructor initialization list__ and then stays bound forever, but storage-wise, it is a pointer underneath.  The value pointed to could be anywhere in memory (stack, heap, etc.).

In general, the total __size of a class__ is the size needed for all the variables plus the vtable if it has one plus any extra memory used to make the object align better for CPU operations.  It only has a vtable if it has __virtual functions__.

An object allocated on the __heap__ behaves the same way other than where the object is physically located, and the fact that if you don't deallocate it, it will leak.
