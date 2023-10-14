# Lambdas
In the above code, we have demonstrated various uses of lambda functions in C++. 

- A lambda function is a function that you can write inline in your source code. The basic syntax of a lambda function is `[]() {}`. The `[]` is the capture list. It defines what from the outside of the lambda should be available inside the function body and how. The `()` is for the parameters, and the `{}` is the function body.

- We started with a basic lambda function with no parameters and no return type. 

- Then we moved on to a lambda function with parameters and an explicit return type. 

- We also demonstrated how to capture local variables by value and by reference. If you capture a variable by value, it's a copy and changes to it inside the lambda do not affect the original variable. If you capture it by reference, changes to it inside the lambda affect the original variable.

- We also showed how to capture all local variables by value or by reference using the `=` and `&` symbols respectively.

- Finally, we demonstrated how to use a lambda function in an algorithm. In this case, we used the `std::for_each` algorithm to print each number in a vector. This is a common use case for lambda functions.