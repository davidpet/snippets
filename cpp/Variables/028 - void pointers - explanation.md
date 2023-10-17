# void*

`void*` is a special pointer type that means a pointer to an object of __unknown type__.  It is just a memory address.

You __cannot__ do these things:
1. pointer arithmetic
2. dereference

You can __implicitly cast other types__ to `void*`.

You can __statically cast__ `void*` to other types.

`void*` generally has the following purposes:
1. Pass a pointer to an object when you don't know what the type of the object you'll get is.
1. Interface with old library code, especially C code.
