# Variable Declaration vs. Implementation
In C++, variable declaration and definition are two different concepts. 

Declaration of a variable is for informing to the compiler the following information: name of the variable, type of value it holds and the initial value if any. It doesn't allocate memory. By default, it's value is garbage. 

Definition of a variable says where the variable gets stored. i.e., memory for the variable is allocated during the definition of the variable.

In the above code, `extern` keyword is used for declaration and no memory is allocated. Later in the main function, these variables are defined where memory is allocated.

The `extern` keyword is used to declare a variable that is defined in another file or in the global scope. However, in this example, it's used to demonstrate the difference between declaration and definition. In a real-world application, you would not typically declare and define a variable in the same file like this.

The variables `a` and `b` are initialized and then used to calculate `c`. The variable `f` is used to hold a floating point number, and demonstrates that C++ can handle decimal numbers, not just integers.