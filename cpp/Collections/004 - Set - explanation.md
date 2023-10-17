# Set

In this code snippet, we demonstrate the usage of the `std::set` collection in C++. A set is a container that stores unique elements following a specific order. 

We first declare a set of integers, then insert elements into the set using the `insert()` function. The elements are automatically sorted in ascending order.

We then print the elements of the set using a range-based for loop. 

Next, we check if an element is in the set using the `find()` function. If the element is not found, `find()` returns an iterator to `set::end`.

We remove an element from the set using the `erase()` function, and then print the elements of the set again to confirm that the element has been removed.

We check the size of the set using the `size()` function, and check if the set is empty using the `empty()` function.

Finally, we clear the set using the `clear()` function, and then check if the set is empty again to confirm that all elements have been removed.
