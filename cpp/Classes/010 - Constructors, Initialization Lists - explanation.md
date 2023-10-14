# Constructors, Initialization Lists
In the above code, we have demonstrated the use of constructors and initialization lists in C++ classes.

1. `SimpleClass` is a class with a default constructor. When an object of `SimpleClass` is created, the constructor is called and it prints a message.

2. `ParameterClass` is a class with a constructor that takes a parameter. The constructor uses an initialization list to initialize the member variable `x` with the passed value. When an object of `ParameterClass` is created with a value, the constructor is called and it prints a message along with the passed value.

3. `MultipleConstructorsClass` is a class with multiple constructors. It has a default constructor, a constructor with one parameter, and a constructor with two parameters. Each constructor uses an initialization list to initialize the member variables `x` and `y`. When an object of `MultipleConstructorsClass` is created, the appropriate constructor is called based on the passed values, and it prints a message along with the passed values.

In the `main` function, we create objects of each class to demonstrate the use of constructors and initialization lists. The expected output is commented at the end of each line.