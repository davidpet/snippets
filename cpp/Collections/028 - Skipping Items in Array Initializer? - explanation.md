# Skipping Items in Array Initializer?

In C++, you cannot directly skip items in an array initializer. However, you can initialize an array with default values and then assign specific values to the elements you are interested in at the beginning of the list - then the rest will become zero.

In the code, we first initialize an array of size 5 with all elements as 0. Then, we assign specific values to the elements at index 1 and 3. When we print the array, we can see that the elements at index 0, 2, and 4 are 0 (the default value), and the elements at index 1 and 3 are 10 and 20 respectively, which are the values we assigned.

This is a workaround to "skip" items in an array initializer in C++. The concept of "skipping" items in an array initializer doesn't directly exist in C++, but this method allows you to assign specific values to certain elements while leaving the rest as a default value.
