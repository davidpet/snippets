# Curiously Recurring Template Pattern (CRTP)
The Curiously Recurring Template Pattern (CRTP) is a technique in C++ where a class `Derived` is derived from a base class template `Base<Derived>`. This pattern is used to achieve static (compile-time) polymorphism, which is more efficient than dynamic (runtime) polymorphism achieved through virtual functions.

In the above code, `Base` is a class template that expects its template argument to be the derived class. The `interface` function in the `Base` class calls the `implementation` function, which is expected to be provided by the derived class. The `implementation` function is called using `static_cast<Derived*>(this)`, which casts the `this` pointer to `Derived*` type. This is safe because the `Derived` class is-a `Base<Derived>`.

The `Derived` class is derived from `Base<Derived>` and provides its own `implementation` function. When the `interface` function is called on an object of the `Derived` class, it calls the `Derived::implementation` function, demonstrating static polymorphism.

The `main` function creates an object of the `Derived` class and calls the `interface` function on it. This prints "Derived implementation", demonstrating that the `Derived::implementation` function was called.