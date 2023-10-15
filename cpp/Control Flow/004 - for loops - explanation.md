# for loops

1. The basic for loop in C++ has three parts: initialization, condition, and increment/decrement. It starts with the initialization, checks the condition, and if true, executes the loop body. After each iteration, the increment/decrement operation is performed.

2. A for loop can have multiple initializations and increments/decrements, separated by commas.

3. The initialization and increment/decrement parts of a for loop are optional. If omitted, you need to provide them elsewhere in the code to prevent an infinite loop.

4. The `break` statement is used to exit the loop prematurely. It is usually used with an if statement to exit the loop based on a condition.

5. The `continue` statement is used to skip the rest of the current loop iteration and move on to the next iteration. It is also usually used with an if statement.

6. The range-based for loop is a feature added in C++11. It allows you to iterate over a range, such as all elements in an array or a container like a vector.

7. The `auto` keyword can be used in a range-based for loop to automatically deduce the type of the elements in the range.

8. If you want to modify the elements in the range while iterating, you can use a reference in the range-based for loop.

Note: range-fors depend on certain conventions like the existence of `begin()` and `end()` methods on the object (or being a built-in array).
