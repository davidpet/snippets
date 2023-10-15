# Overloading

In the code, we have demonstrated function overloading in C++. We have defined three functions with the same name "add" but with different parameters. The first function adds two integers, the second function adds two doubles, and the third function concatenates two strings. 

When we call the function "add" in the main function, the compiler automatically chooses the correct function to call based on the arguments provided. This is known as function overloading, and it is a way to achieve polymorphism in C++. 

Function overloading not only allows us to use the same function name for different tasks but also provides a way to handle different data types with the same function name. This makes the code more readable and maintainable. 

Please note that function overloading is determined at compile time. So, it is also known as compile-time polymorphism or static polymorphism. 

Also, remember that functions cannot be overloaded only by their return types. At least one of their parameters must differ.