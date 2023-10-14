# Exception Handling with Try and Catch Blocks
In the above code, we demonstrate the use of try-catch blocks in C++. 

The first try-catch block shows the basic usage where an integer is thrown and caught. 

The second try-catch block demonstrates how to catch multiple types of exceptions. Here, a `std::runtime_error` is thrown and caught. If an exception of a different type was thrown, it would be caught by the `std::exception` catch block. 

The third try-catch block shows how to define and use a custom exception. The `MyException` class is defined to inherit from `std::exception` and override the `what` method. This custom exception is then thrown and caught. 

Finally, the catch-all `catch(...)` block is demonstrated, which can catch exceptions of any type.