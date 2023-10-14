# Generic Class
The above code demonstrates the use of generic classes (also known as template classes) in C++. A generic class is a class that can work with any data type. You can pass the data type as a parameter, and the class will work with the given data type.

In the code, we first define a generic class `GenericClass` with a single type parameter `T`. This class has a private member `data` of type `T`, and public methods to get and set this data.

We then define a generic class `MultiGenericClass` with two type parameters `T` and `U`. This class has two private members `data1` and `data2` of types `T` and `U` respectively, and public methods to get and set these data.

In the `main` function, we create instances of these classes with different types (`int` and `std::string`), and use their methods to get and set data. The output of the program confirms that the classes work correctly with the given types.