# Template Declaration vs. Implementation
In the above code, we first declare a template class and a template function. The template class `MyTemplateClass` and the template function `myTemplateFunction` are declared with a template parameter `T`. This `T` can be any data type.

In the implementation of the template class, we define a constructor that takes a parameter of type `T` and a method `display` that prints the value. In the implementation of the template function, we simply print the value passed to the function.

In the `main` function, we demonstrate the usage of the template class and function with different data types. We create objects of `MyTemplateClass` with `int` and `std::string` types and call the `display` method. We also call `myTemplateFunction` with `int` and `std::string` types.

This demonstrates the basic usage of templates in C++, allowing for type-generic programming.