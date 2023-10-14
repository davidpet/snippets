# Sealed/Final Classes
In the above code, we have a base class `Base` and a derived class `Derived`. The `Derived` class overrides the `show` function from the `Base` class and seals it using the `final` keyword. This means that no further derived class can override the `show` function.

The `FurtherDerived` class tries to derive from the `Derived` class and override the `show` function. However, this will cause a compiler error because the `show` function is sealed in the `Derived` class.

In the `main` function, we create objects of the `Base` and `Derived` classes and call the `show` function. The correct function is called due to polymorphism. If you uncomment the lines related to the `FurtherDerived` class, you will get a compiler error.

This demonstrates the concept of sealed/final classes in C++. The `final` keyword can be used to prevent further overriding of a function in derived classes.