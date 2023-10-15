# Actual Value Returned by Short-Circuiting

In this code snippet, we are demonstrating the concept of short-circuiting in C++. Short-circuiting is a property of logical AND (&&) and logical OR (||) operators in C++. When the result of the entire expression can be determined by evaluating the first operand itself, the second operand is not evaluated. This is known as short-circuiting.

In the case of logical AND, if the first operand is false, the entire expression will be false regardless of the second operand. So, the second operand is not evaluated. This is demonstrated in the first part of the main function.

In the case of logical OR, if the first operand is true, the entire expression will be true regardless of the second operand. So, the second operand is not evaluated. This is demonstrated in the second part of the main function.

The functions `checkTrue` and `checkFalse` are used to print a message when the conditions are checked. This helps us understand when the conditions are being evaluated and when they are being short-circuited.