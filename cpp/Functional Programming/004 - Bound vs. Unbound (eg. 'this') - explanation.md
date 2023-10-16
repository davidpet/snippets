# Bound vs. Unbound (eg. 'this')

In the code, we first define a simple class `MyClass` with a member variable `x` and a member function `printX()`. 

In the `main()` function, we create an object `obj` of `MyClass` and initialize `x` to `10`.

We then demonstrate the concept of unbound and bound member functions. 

An unbound member function pointer `unboundPtr` is created which points to the member function `printX()`. To call this unbound member function, we need to use an object of `MyClass` (in this case `obj`) and the `.*` operator.

Next, we demonstrate bound member functions. A bound member function is a member function that is associated with a specific object. We create a bound member function `boundFn` using `std::bind()`. The `std::bind()` function takes the member function and the object as arguments and returns a function object that can be called without any arguments.

We also demonstrate another way to create a bound member function using `std::function`. `std::function` is a general-purpose polymorphic function wrapper. We create a `std::function` object `boundFn2` that wraps the bound member function.

Both `boundFn` and `boundFn2` can be called without any arguments and they will print the value of `x` in the `obj` object.

For a __static method__, it's just a normal function pointer but with scope resolution to find the method.

Note: You cannot get a bound function from an instance directly like in other languages - you have to do the stuff above with `std::bind()` unfortunately.

Note: You cannot call an unbound method with a `this` pointer as an argument like you would in other languages.

Note: while the `&` is optional for normal functions assinged to function pointers, they're required for instsance methods.
