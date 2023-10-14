# Interfaces and Abstract Base Classes
In the above code, `AbstractClass` is an abstract base class that provides an interface for its subclasses. It has two pure virtual functions `setWidth` and `setHeight` that must be implemented by any non-abstract class that inherits from `AbstractClass`.

`Rectangle` and `Triangle` are concrete classes that inherit from `AbstractClass` and implement the `getArea` method. The `getArea` method for `Rectangle` returns the product of its width and height, while for `Triangle` it returns half the product of its width and height.

In the `main` function, we create instances of `Rectangle` and `Triangle`, set their width and height, and print their areas. The expected output is the area of the rectangle and triangle based on the dimensions set.

This code demonstrates the use of interfaces and abstract base classes in C++. The abstract base class provides a common interface for the subclasses, and the subclasses provide the specific implementations.