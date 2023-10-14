# Dynamic Types
In this code snippet, we have a base class `Base` and a derived class `Derived`. Both classes have a `print` function. The `print` function in the `Base` class is declared as `virtual`, which means it can be overridden in any derived class.

In the `main` function, we declare a pointer of type `Base` (`basePtr`), an object of type `Base` (`baseObj`), and an object of type `Derived` (`derivedObj`). 

We first point `basePtr` to `baseObj` and call the `print` function. Since `basePtr` is pointing to an object of type `Base`, it calls the `print` function of the `Base` class.

Next, we point `basePtr` to `derivedObj` and call the `print` function. This time, since `basePtr` is pointing to an object of type `Derived`, it calls the `print` function of the `Derived` class. This is an example of dynamic binding, where the method to be invoked is determined at runtime based on the type of the object the pointer is pointing to.

This demonstrates the use of dynamic types in C++ classes. The type of the object that a pointer points to can be determined dynamically at runtime, and the appropriate method will be invoked based on this type.