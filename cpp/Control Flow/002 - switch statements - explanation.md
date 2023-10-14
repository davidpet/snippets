# switch statements
The `switch` statement in C++ is a type of selection control mechanism used to allow the value of a variable or expression to change the control flow of program execution via a multiway branch.

In the first `switch` statement, the `break` keyword is used to exit the switch after a case is matched. If `break` is not used, the program will continue to execute the next case or default, even if the expression does not match the case (this is known as fallthrough).

In the second `switch` statement, we demonstrate this fallthrough behavior by omitting the `break` keyword. After the case for `x = 2` is matched, the program continues to execute the `default` case.

The `default` keyword specifies the code to run if there is no case match. Although it's optional, it's a good practice to include a `default` case in a `switch` statement to handle unexpected inputs.

The expected output of the code is:

```
x is 2
x is 2
x is neither 1 nor 2
```