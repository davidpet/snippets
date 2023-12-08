# RValue References

The special operator `&&` defines a parameter as an rvalue reference, which means that overload of the function/method will be called when a temporary object createad as part of the current expression is passed in.

The main use case of this is to take the data from that temporary object without copying it, since you know the object is going to die at the end of the expression anyway.

This is  known as __move semantics__.

`std::move` is a special function to take a regular lvalue and turn it into an rvalue reference for passing into a move constructor or assignment. You should assume the object passed in is no longer valid/defined after that point. This is useful when you don't need that object anymore but want to avoid unnecessary copying.

Some More Caveats about RValue References:
  - usually described in terms of class methods, but the same logic applies to functions (except when talking about constructors and assignment)
  - a function can be overloaded to take a parameter all 3 ways: value, reference, rvalue reference
     - value can be ambiguous with either one because it works for both lvalues and rvalues
        - which will give a compiler error on usage
     - lvalue reference cannot take an rvalue unless `const`
     - rvalue reference overload takes precedence over lvalue lreference one for rvalues, even if `const`
  - the fact that the function took an rvalue reference of your object doesn't intrinsically change it, even if `std::move` was used
     - eg. if it was your own function and you know you didn't do anything to the object passed in, you can ignore the fact that was rvalue
     - but if the function and/or class actually implement move semantics, then it will definitely matter
