# Lambdas

In the code, we have demonstrated the use of lambda functions in C++. We started with a basic lambda function that takes two integers and returns their sum. Then we showed how to capture local variables from the surrounding scope, and how to modify these captured variables using the mutable keyword. We also showed how to capture variables by reference, so that changes to the variable inside the lambda function are reflected in the original variable. Finally, we demonstrated how to pass a lambda function as a parameter to another function, in this case to the `std::sort` function as a custom comparator.

Here is a short list of things you can do with lambdas in other languages that you can't do here:
- ommit the types in the parameter list (though you can use `auto`, but that makes a __generic__)
- capture by reference independently of the enclosing scope
- provide a single line lambda returning an expression without return or braces

NOTE: by default, when you assign a lambda to a different variable, that is a __copy__, meaning all the variables captuerd by value will be independent.  If you want them to share state, either:
  - capture by reference so they use the same state
  - make the 2nd variable a reference so it doesn't copy (`auto &fn = otherFn`)
