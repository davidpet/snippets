# Generic Sequence/Iterable Type
In the above code, we have demonstrated the usage of various generic sequence containers provided by C++. These containers are part of the Standard Template Library (STL) and can be used to store any type of data.

1. `std::vector`: This is a dynamic array that can grow and shrink at runtime. It provides fast access to elements using an index.

2. `std::list`: This is a doubly-linked list. It allows fast insertions and deletions at both its beginning and its end.

3. `std::deque`: This is a double-ended queue. It allows fast insertions and deletions at both its beginning and its end, and provides fast access to elements using an index.

4. `std::forward_list`: This is a singly-linked list. It allows fast insertions and deletions at its beginning.

5. `std::array`: This is a static array. Its size is fixed at compile time. It provides fast access to elements using an index.

In each case, we initialize the container with some values, and then use a range-based for loop to iterate over the elements and print them. The `for (int i : container)` syntax is a convenient way to iterate over all elements in a container. It works with all STL containers and any other types that provide a suitable begin() and end() function.