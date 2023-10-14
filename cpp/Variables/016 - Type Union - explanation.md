# Type Union
In the above code, a union named `Data` is defined with three members: `i` (integer), `f` (float), and `str` (string). In the `main` function, we create a variable `data` of type `Data` and demonstrate assigning and accessing each member of the union.

It's important to note that a union can only hold a value for one of its members at a time. This is because all members of a union share the same memory location. So, when we assign a value to `str`, it overwrites the values of `i` and `f`. This is why the values of `i` and `f` are corrupted when we print them after assigning a value to `str`.

Unions are a powerful tool for managing memory and optimizing your programs, but they should be used with caution due to this behavior.