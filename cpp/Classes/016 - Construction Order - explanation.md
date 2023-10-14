# Construction Order
In this code snippet, we have a base class `Base` and a derived class `Derived`. When we create an instance of `Derived`, the constructor of the base class `Base` is called first, followed by the constructor of the derived class `Derived`. This demonstrates the construction order in C++ classes, where base class constructors are called before derived class constructors.

When the object `d` goes out of scope at the end of the `main` function, the destructors are called in the reverse order of the constructors. That is, the destructor of the derived class `Derived` is called first, followed by the destructor of the base class `Base`. This is because the derived class may depend on the base class, so the base class should be the last to be destroyed.

The expected output of this program is:

```
Base class constructor called.
Derived class constructor called.
Derived class destructor called.
Base class destructor called.
```

This output demonstrates the construction and destruction order in C++ classes.