# map, reduce, and filter
In this code snippet, we demonstrate the use of `map`, `reduce`, and `filter` operations in C++. 

- `std::transform` is used to apply a function to each element in a collection, effectively mapping the function over the collection. In this case, we use it to square each number in a vector.

- `std::accumulate` is used to combine all elements in a collection using a binary operation. This is effectively a reduce operation. Here, we use it to sum all the numbers in the vector.

- `std::copy_if` is used to copy elements that satisfy a certain condition from one collection to another. This is effectively a filter operation. In this example, we use it to copy all even numbers to a new vector.

Note that in C++, these operations are not built into the language syntax, but are provided by the Standard Template Library (STL). The STL provides a rich set of algorithms that can be used with any container that provides an iterator interface.