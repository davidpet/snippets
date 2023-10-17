# RValue References

The special operator `&&` defines a parameter as an rvalue reference, which means that overload of the function/method will be called when a temporary object createad as part of the current expression is passed in.

The main use case of this is to take the data from that temporary object without copying it, since you know the object is going to die at the end of the expression anyway.

This is  known as __move semantics__.

`std::move` is a special function to take a regular lvalue and turn it into an rvalue reference for passing into a move constructor or assignment. You should assume the object passed in is no longer valid/defined after that point. This is useful when you don't need that object anymore but want to avoid unnecessary copying.
