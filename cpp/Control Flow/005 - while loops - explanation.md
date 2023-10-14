# while loops
The above code demonstrates the usage of while loops in C++. 

The first loop is a basic while loop that prints the numbers 0 to 4. The condition for the loop to continue is `i < 5`, and `i` is incremented at the end of each iteration.

The second loop demonstrates the use of the `break` statement in a while loop. The loop condition is `true`, which means the loop would run indefinitely if not for the `break` statement. When `i` equals 5, the `break` statement is executed and the loop is terminated.

The third loop demonstrates the use of the `continue` statement in a while loop. If `i` is an even number, the `continue` statement is executed and the rest of the loop is skipped for that iteration. This means that only odd numbers are printed.

The fourth loop demonstrates nested while loops. The outer loop runs three times, and for each iteration of the outer loop, the inner loop also runs three times. This results in all pairs of `i` and `j` from 0 to 2 being printed.