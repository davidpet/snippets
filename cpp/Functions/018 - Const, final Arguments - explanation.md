# Const/final Arguments

In this code, we first define a class `MyClass` with a const member function `print()`, a function `set()` with a const argument, and a virtual function `display()`. The `print()` function is const, which means it cannot modify any member variables of the class. The `set()` function has a const argument, which means it cannot modify the value of the argument. The `display()` function is virtual, which means it can be overridden in derived classes.

We then define a derived class `MyDerivedClass` that inherits from `MyClass` and overrides the `display()` function. However, we mark this function as final, which means it cannot be overridden in any further derived classes.

In the `main()` function, we create instances of `MyClass` and `MyDerivedClass` and call their functions to demonstrate the use of const and final.

Note: It's very common to pass `const int*`, `const vector<int>&`, etc. This allows you to avoid a copy while preventing modification of the original.
