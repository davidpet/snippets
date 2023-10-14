# Explicitly Creating Generic Class with Type
In the above code, we define a generic class `GenericClass` with a template parameter `T`. This class has a constructor that takes a parameter of type `T` and a method `getValue()` that returns the value of type `T`.

In the `main()` function, we explicitly create objects of `GenericClass` with different types: `int`, `double`, and `std::string`. We then call the `getValue()` method on these objects and print the returned values. The expected outputs are the values we passed to the constructors of these objects.

This demonstrates the basic usage of generics/templates in C++ to create a class that can handle different types. The type is specified at the time of object creation.