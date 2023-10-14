# Interface Member Visibility (default and modifiers)
In the above code, we have a class `MyClass` with public, protected, and private members. The public members can be accessed from anywhere, the protected members can only be accessed within the class itself and its derived classes, and the private members can only be accessed within the class itself.

In the `main` function, we create an instance of `MyClass` and try to access its members. We can access the public members, but not the protected or private ones.

We also have a derived class `MyDerivedClass` that inherits from `MyClass`. In its `accessBaseMembers` function, it tries to access the base class's members. It can access the public and protected members, but not the private ones.

This demonstrates the different levels of visibility for class members in C++. The default visibility is private if no access modifier is specified.