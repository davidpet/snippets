# Equality (all ways)

In the code, we are demonstrating the equality and inequality comparisons in C++. We have used three types of variables: integer, floating point, and string. 

For each type, we first declare and initialize two variables with the same value. Then we use the equality operator (==) to check if the two variables are equal. If they are equal, we print a message saying they are equal. 

Next, we use the inequality operator (!=) to check if the two variables are not equal. If they are not equal, we print a message saying they are not equal. 

In all cases, since the two variables are initialized with the same value, the equality comparison should return true and the inequality comparison should return false. Therefore, the messages printed should always indicate that the variables are equal.

Note: equality in C++ is handled via __operator overloading__ rather than having a reference equality vs. value equality paradigm like in Java and the others. The only way you'd be checking the equivalent of reference equality is if you checked two pointers.
