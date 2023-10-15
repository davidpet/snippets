# Covariant Return Types

In this code snippet, we have a base class `Base` and a derived class `Derived`. Both classes have a `clone` method that creates a copy of the object and returns a pointer to it. 

In the base class, `clone` returns a `Base*`. In the derived class, `clone` returns a `Derived*`. This is an example of a covariant return type. The return type of the `clone` method in the derived class is a pointer to the derived class, which is a type derived from the return type of the `clone` method in the base class.

When we call `clone` on a `Base*` that actually points to a `Derived` object, the `clone` method of the `Derived` class is called, and a `Derived*` is returned. This demonstrates the use of covariant return types in C++.

The expected output of this program is:

```
Cloning Base
Cloning Derived
```

This shows that the correct `clone` method is called depending on the actual type of the object, and that the covariant return type allows the `clone` method in the derived class to return a more specific type.
