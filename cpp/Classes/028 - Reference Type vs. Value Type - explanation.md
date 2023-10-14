# Reference Type vs. Value Type
In C++, classes are reference types. However, when you pass them to a function by value, a copy of the object is created and used inside the function. Any changes made to this copy won't affect the original object. This is demonstrated in the `changeValueByValue` function.

On the other hand, when you pass them to a function by reference, no new copy is created. Instead, a reference to the original object is used. Therefore, any changes made inside the function will affect the original object. This is demonstrated in the `changeValueByReference` function.

In the `main` function, we create two objects of `MyClass` and pass them to the two functions. The `std::cout` statements print the value of the `value` member of the objects after the function calls. As explained, the value of `obj1` remains unchanged after the call to `changeValueByValue`, while the value of `obj2` changes after the call to `changeValueByReference`.