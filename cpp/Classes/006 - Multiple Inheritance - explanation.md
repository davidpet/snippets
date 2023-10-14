# Multiple Inheritance
In this example, we have two base classes `Class1` and `Class2`, and a derived class `Derived`. The derived class inherits from both base classes, demonstrating multiple inheritance. 

Each class has a print method that prints a message indicating which class it belongs to. In the `main` function, we create an object of the `Derived` class and call each of the print methods. This demonstrates that the `Derived` class has access to the methods of both base classes, as well as its own methods.

Note that in C++, a derived class inherits all the members (fields, methods, etc.) of the base classes. The public, protected and private inheritance specifies the access level of the base class members in the derived class. In this example, we used public inheritance, so all public members of the base classes are public in the derived class, and all protected members of the base classes are protected in the derived class.

Also note that multiple inheritance can lead to the "diamond problem" where the derived class can inherit from two classes that have a common base class. This can lead to ambiguity because the derived class would inherit two copies of the members of the common base class. C++ resolves this problem by using virtual inheritance, but that's a topic for another time.