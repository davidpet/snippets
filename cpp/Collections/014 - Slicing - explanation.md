# Slicing

In the context of collections (like arrays, vectors, etc.), "slicing" can refer to the operation of extracting a subset of elements from the collection. C++ does not directly support slicing like Python or other high-level languages, but we can achieve similar functionality using iterators or the `std::copy` function from the Standard Template Library (STL).

In the code, we first declare and initialize a vector `vec` with 10 elements. We then define the start and end iterators for the slice we want to extract. In this case, we want to extract the 3rd to 5th elements (0-indexed), so we set `start` to `vec.begin() + 2` and `end` to `vec.begin() + 5`. 

We then create a new vector `slice` to hold the sliced elements. The size of `slice` is set to `end - start`, which is the number of elements in the slice.

The `std::copy` function is then used to copy the elements from the original vector to the slice. The `std::copy` function takes three arguments: the start iterator, the end iterator, and the destination iterator. In this case, the destination iterator is the beginning of the `slice` vector.

Finally, we print the elements of the slice using a range-based for loop. The expected output is `3 4 5`, which are the 3rd to 5th elements of the original vector.

Note: it's also worth mentioning that since __arrays are pointers__ in C++, you can also slice directly by incrementing the pointer and passing in a smaller count.
