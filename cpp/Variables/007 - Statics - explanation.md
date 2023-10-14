# Statics
In the above code, we have a class `MyClass` with a static variable `staticVar` and a static function `modifyStaticVar()`. Static variables in C++ are variables that are shared among all instances of a class. They are not tied to any specific object of the class. Instead, they belong to the class itself. This is why we can access `staticVar` directly through the class name, as in `MyClass::staticVar`.

The static function `modifyStaticVar()` is used to modify the value of `staticVar`. Static functions can only access static variables or other static functions. They cannot access non-static members of the class.

In the `main()` function, we create two objects of `MyClass`, `obj1` and `obj2`. We can access `staticVar` through these objects, but it's important to note that `staticVar` is not a separate variable for each object. It's the same variable shared among all instances of `MyClass`. Therefore, when we modify `staticVar` through `obj1`, the change is reflected when we access `staticVar` through `obj2`.

This code demonstrates the basic usage of static variables in C++. It's important to note that static variables have a lifetime that lasts the duration of the program. This means they are created when the program starts and destroyed when the program ends.