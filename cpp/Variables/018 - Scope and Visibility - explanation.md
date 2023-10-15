# Scope and Visibility
In this code snippet, we demonstrate the concept of variable scope and visibility in C++. 

1. `globalVar` is a global variable, which means it is visible throughout the file. It can be accessed both inside `main` function and `testFunction`.

2. `localVar` in `main` function and `testFunction` are local variables. They are only visible within their respective functions. That's why we can declare `localVar` in both functions without causing a naming conflict.

3. Inside the block in `main` function, we declare another `localVar`. This variable is only visible within this block. Outside the block, `localVar` refers to the one declared in `main` function.

4. Trying to access a variable outside its scope, like accessing `localVar` from `testFunction` in `main` function, will cause a compile error.

This demonstrates the basic rules of variable scope and visibility in C++. However, it's worth noting that C++ also supports other types of scopes like class scope, namespace scope, and function parameter scope, which are not covered in this snippet.

Note: Unlike a garbage collected language like Java, when a variable goes out of scope, it is destructed right then, which is useful for things like smart pointers where you want them to be deallocated when they're done.
