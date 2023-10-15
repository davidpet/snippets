# Recursion

The code demonstrates the concept of recursion in C++. Recursion is a method where the solution to a problem depends on solutions to smaller instances of the same problem. The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function.

In the code, we have two recursive functions, `factorial` and `fibonacci`. The `factorial` function calculates the factorial of a number, and the `fibonacci` function calculates the Fibonacci number at a given position.

In both functions, we have a base case that returns a value without any further recursive calls, and a recursive case that involves a call to the same function.

In the `main` function, we call these functions and print the results. The comments next to the print statements indicate the expected output.

Note: __Tail Call Optimization (TCO)__ is possible if the compiler does it and possibly requiring a special flag to be passed in building.
