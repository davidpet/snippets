# Copying/Cloning
This code demonstrates the use of classes in C++ with a focus on copying/cloning. The class `MyClass` has a single data member `data` and several methods including a default constructor, a parameterized constructor, a copy constructor, an assignment operator, and a clone method.

The default constructor initializes `data` to 0, while the parameterized constructor allows the user to specify a value for `data`. The copy constructor and assignment operator are used to copy the contents of one object to another. The clone method creates a new object that is a copy of the current object.

In the `main` function, we create two objects `obj1` and `obj2` using the default and parameterized constructors, respectively. We then copy `obj2` into `obj1` using the assignment operator. Finally, we clone `obj1` into `obj3` using the clone method.

Note that when cloning, we are creating a new object on the heap, so we must remember to delete it when we're done to avoid memory leaks.