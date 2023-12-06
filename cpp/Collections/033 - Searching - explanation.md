# Searching

In this code, we demonstrate how to search for elements in a collection in C++. We use the `std::find` function from the `<algorithm>` library to perform the search. This function takes three arguments: the beginning of the range to search, the end of the range, and the value to search for. It returns an iterator pointing to the first element in the range that equals the search value. If the value is not found, it returns an iterator pointing to the end of the range.

We demonstrate this with two different types of collections: a `std::vector<int>` and a `std::vector<std::string>`. In both cases, we declare the collection and the value we want to search for, perform the search, and then check if the value was found. If the value was found, we print a message indicating its index in the collection. If the value was not found, we print a different message.

This code shows the basic usage of the `std::find` function for searching in collections in C++. There are many other functions in the `<algorithm>` library that can be used for more complex searching tasks, such as `std::find_if` for searching with a predicate, `std::binary_search`, `lower_bound`, and `upper_bound` for searching in sorted collections, and `std::search` for searching for a subsequence in a collection.

Remember that `begin()` and `end()` will be the same iterator for an empty sequence.

Use __reverse iterators__ to search backwards.
