# try/catch/finally and throwing exceptions

In the code, we demonstrate the use of try/catch blocks and throwing exceptions in C++. 

First, we define a custom exception class `MyException` that inherits from the standard `std::exception` class. The `what()` function is overridden to return a custom error message.

In the `main()` function, we have several try/catch blocks. Each try block contains a `throw` statement that throws an exception of a different type: an integer, a character, a standard exception, and a custom exception. You can __rethrow__ the same exception out of the try/catch with the `throw;` statement.

Each catch block catches the corresponding exception type and prints a message to the console. The message includes the exception's value or the result of calling `what()` on the exception object.

Note that C++ does not support the `finally` keyword. Cleanup or final actions are typically handled using destructors or the RAII (Resource Acquisition Is Initialization) idiom.

You can catch exceptions by __value or reference__ and can use `...` as the default case.  You can also choose to give variable names or not for caught exceptions.
