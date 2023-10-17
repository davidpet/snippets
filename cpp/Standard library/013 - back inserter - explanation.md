## `std::back_inserter`

### Overview

`std::back_inserter` is a convenient function that provides an output iterator which, when dereferenced and written to, appends a new element to the end of the container. It effectively allows you to use push-back operations with algorithms that require output iterators, without the need to pre-size the container.

It's part of the `<iterator>` header.

### Common Use Case

A frequent use case is when you want to insert elements at the end of a container using an algorithm like `std::copy`, but don't know the number of elements in advance.

**Expected Output**:
```
1 2 3 4 5
```

By using `std::back_inserter(dest)`, you're essentially instructing `std::copy` to keep appending elements to the end of the `dest` vector as it goes, without needing to preallocate space in the `dest` vector.
