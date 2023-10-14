# if/then/else statements
The above code demonstrates the use of if/then/else statements in C++. 

The `if` statement is a control flow statement that allows code to be executed if a certain condition is true. The `else` statement allows code to be executed if the condition in the `if` statement is not true. The `else if` statement allows for multiple conditions to be checked in sequence.

In the code, we first declare an integer `x` and assign it a value of 10. We then use various if/then/else statements to check the value of `x` and print out different messages based on its value.

The first `if` statement checks if `x` is greater than 5. Since `x` is 10, this condition is true, so the message "x is greater than 5" is printed.

The `if-else` statement checks if `x` is greater than 20. Since `x` is not greater than 20, the condition is false and the `else` block is executed, printing "x is not greater than 20".

The `if-else if-else` statement checks multiple conditions in sequence. Since `x` is not greater than 20 or 15, the `else` block is executed, printing "x is not greater than 15".

The nested `if-else` statement checks if `x` is greater than 5, and if that condition is true, it checks if `x` is greater than 15. Since `x` is greater than 5 but not greater than 15, the message "x is greater than 5 but not greater than 15" is printed.