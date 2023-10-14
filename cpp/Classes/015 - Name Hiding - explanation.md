# Name Hiding
In the above code, we have a base class `Base` and a derived class `Derived`. Both classes have a member variable `x` and two member functions `setX(int)` and `print()`. 

In the `main()` function, we create an object `d` of the `Derived` class. When we call `d.setX(10)`, the `setX(int)` function of the `Derived` class is called, not the `Base` class. This is because the `setX(int)` function in the `Derived` class hides the `setX(int)` function in the `Base` class. This is known as name hiding in C++. 

To call the `setX(int)` function of the `Base` class, we need to use the scope resolution operator `::` with the class name, like this: `d.Base::setX(20)`. 

The same concept applies to the `print()` function and the `x` variable. The `print()` function and the `x` variable in the `Derived` class hide the `print()` function and the `x` variable in the `Base` class. 

This code demonstrates the concept of name hiding in C++ classes. It shows how member functions and variables in a derived class can hide member functions and variables with the same name in a base class. It also shows how to access the hidden members in the base class using the scope resolution operator.