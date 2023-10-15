# Name Hiding

Name hiding in C++ applies to __non-virtual functions__ and __variables__.  In those cases, a name in a subclass hides the name from the base class when used with the subclass interface.  If you use the base class interface, you get the base versions.  The storage for the variables in the base and subclass are separate. The syntax to access the base version from the derived interface looks like the base class is similar to calling a base method from a derived override: `m.MyBase::x` or simply `MyBase::x` from inside.

In the code, we have a base class `Base` and a derived class `Derived`. Both classes have a member variable `x` and two member functions `setX(int)` and `print()`. 

In the `main()` function, we create an object `d` of the `Derived` class. When we call `d.setX(10)`, the `setX(int)` function of the `Derived` class is called, not the `Base` class. This is because the `setX(int)` function in the `Derived` class hides the `setX(int)` function in the `Base` class. This is known as name hiding in C++. 

To call the `setX(int)` function of the `Base` class, we need to use the scope resolution operator `::` with the class name, like this: `d.Base::setX(20)`. 

The same concept applies to the `print()` function and the `x` variable. The `print()` function and the `x` variable in the `Derived` class hide the `print()` function and the `x` variable in the `Base` class. 
