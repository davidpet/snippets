# Base and Delegating Constructors

You can select which base constructor(s) to use in the __initializer list__ of a constructor of the derived class.  If you don't specify one, the __default constructor__ will be used to make the base.  In addition, you can delegate to another constructor of the __same class__ the same way, in the initializer list.  In both cases, you have to say the appropriate class name directly - there are no special keywords like in other languages.

In the code, we have two classes: `Base` and `Derived`. `Derived` is a subclass of `Base`, meaning it inherits from `Base`.

The `Base` class has two constructors: a default constructor that takes no parameters and a constructor that takes an integer parameter. When these constructors are called, they print a message to the console.

The `Derived` class also has two constructors, which are delegating constructors. This means that they call the constructors of the `Base` class. The `Derived` constructors also print a message to the console.

In the `main` function, we create two instances of the `Derived` class. The first instance, `d1`, is created using the default constructor. This causes the default constructor of the `Base` class to be called, followed by the constructor of the `Derived` class. The second instance, `d2`, is created using the constructor that takes an integer parameter. This causes the corresponding constructor of the `Base` class to be called, followed by the constructor of the `Derived` class.

This demonstrates the use of base and delegating constructors in C++. The base constructor is called first, followed by the derived constructor. This is a fundamental aspect of object-oriented programming in C++.
