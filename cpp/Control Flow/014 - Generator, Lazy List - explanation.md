# Generator/Lazy List
In this code, we define a `Fibonacci` class that represents a sequence of Fibonacci numbers. The `Fibonacci::iterator` class represents an iterator over this sequence. The `operator*` function returns the current Fibonacci number, the `operator++` function advances to the next Fibonacci number, and the `operator!=` function checks if two iterators are different (i.e., if they are at different positions in the sequence).

The `Fibonacci` class also provides `begin` and `end` functions that return iterators to the beginning and end of the sequence, respectively. This allows us to use a range-based for loop to iterate over the sequence.

In the `main` function, we create a `Fibonacci` object representing the first 10 Fibonacci numbers and print them out. The expected output is the first 10 Fibonacci numbers: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55.

This is a simple example, but the same basic idea can be used to create more complex generators. Note that this is not a true "lazy" generator because the entire sequence is generated up front, but it does demonstrate the basic concept.