# Sealed/Final Methods

In the code, we have a base class `Base` with two methods: `func()` and `finalFunc()`. The `finalFunc()` is declared as `final`, which means it cannot be overridden in any derived class.

In the derived class `Derived`, we override `func()`. However, if we try to override `finalFunc()`, the compiler will throw an error. This is commented out in the code to prevent the error.

In the `main()` function, we create instances of `Base` and `Derived` and call `func()` and `finalFunc()` on both. As expected, `func()` is overridden in `Derived`, but `finalFunc()` is not, and the base class version is called even on the `Derived` instance.

This demonstrates the use of `final` methods in C++. They are a way to ensure that certain behaviors defined in a base class cannot be changed by any class that inherits from it.
