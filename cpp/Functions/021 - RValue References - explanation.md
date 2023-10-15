# RValue References

The special operator `&&` defines a parameter as an rvalue reference, which means that overload of the function/method will be called when a temporary object createad as part of the current expression is passed in.

The main use case of this is to take the data from that temporary object without copying it, since you know the object is going to die at the end of the expression anyway.

This is  known as __move semantics__.
