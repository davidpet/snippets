# Root Class of Type System (and methods to override)
In this code snippet, we first define a root class `Root` with a virtual function `print()`. This function is declared as `virtual`, which means it can be overridden in any derived class.

Next, we define a derived class `Derived` that inherits from `Root`. In this derived class, we override the `print()` function. The `override` keyword is used to indicate that the function is intended to override a virtual function in the base class.

In the `main()` function, we create objects of both the root and derived classes and call their `print()` functions. When called on the root object, the root class's `print()` function is executed. When called on the derived object, the derived class's overridden `print()` function is executed.

Finally, we create a pointer of `Root` type and point it to a `Derived` object. When we call the `print()` function on this pointer, the derived class's `print()` function is executed. This is because the function is virtual, and C++ uses dynamic binding to decide which function to call at runtime.