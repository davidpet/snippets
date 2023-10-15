# Pointers

1. Pointers store __memory addresses__ that are expected to contain an object of the right size and structure based on the type of the pointer.
1. Pointers to pointers (and so on) just dereference one level at a time.
1. It's possible to have a reference to a pointer.
1. `*` on a pointer dereferences the value and can occur on either the left or right side of an assignment, and can be chained multiply (eg. `**` for a pointer to pointer).
1. Arithmetic on a pointer adjusts (or diffs) the address by chunks of the size of the data type of the pointer.  For instance, for `int*`, 1 = 4 bytes.
1. You can use `reinterpret_cast<>` to do something like treat a block of memory as a `char[]` to get raw bytes.
1. Object and struct pointers work the same way, but in addition to `*` for dereferencing, you can use `->` for dereferencing to get a member, call a method, etc.
1. When allocating on the __heap__, you use `new` to get a pointer value and `delete` or `delete[]` to free it later.
1. When using `new` on a __single value__, it can take __constructor arguments__ or use the default constructor (which for int means junk).
1. When using `new` on an __array__, the type must have a __default constructor__ (such as junk for an int).
1. For primitive arrays with `new`, there is an additional way to specify values (or just the first few values and let the rest become __zero__), and also a way to set all to zero by using `()`.
1. `const int *` means the int itself is constant and thus the pointer can't be used to change it, but the pointer variable itself can be rebound.  `int * const p` on the other hand means p itself is a constant, but that the value it points to can change. For pointers to pointers and such, you just have to figure out where the const is binding.
1. All pointers, as examined with `sizeof()`, are 64-bit, with the exception of a __local array variable__, but a pointer to that variable is still 64-bit.  Dynamic arrays are just pointer sized.

NOTE: references and pointers do not keep an object alive like in a garbage collected system.  They can become invalid without knowing it if used dangerously.
