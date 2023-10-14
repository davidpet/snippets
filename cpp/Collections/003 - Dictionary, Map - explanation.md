# Dictionary/Map
The above code demonstrates the usage of a dictionary (or map) in C++. A map is a data structure that stores key-value pairs. In this example, the keys are strings and the values are integers.

The `std::map` declaration is followed by inserting key-value pairs into the map using the `[]` operator. The value associated with a key can be accessed using the same `[]` operator.

The code then demonstrates how to iterate over all key-value pairs in the map using a range-based for loop and the `auto` keyword, which automatically deduces the type of the variable.

The `find` function is used to check if a key exists in the map. It returns an iterator to the key-value pair if found, or an iterator to `map::end` if not.

Finally, the `erase` function is used to remove a key-value pair from the map using the key. After the key-value pair is removed, the `find` function confirms that the key no longer exists in the map.