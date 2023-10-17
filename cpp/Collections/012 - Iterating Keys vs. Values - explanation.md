# Iterating Keys vs. Values

In the code, we first declare and initialize a map `myMap` with string keys and integer values. 

We then demonstrate three ways of iterating over the map:

1. Iterating over keys: We use a range-based for loop to iterate over the map. In each iteration, `keyValuePair` is a pair consisting of a key and a value from the map. We print the key by accessing `keyValuePair.first`.

2. Iterating over values: Similarly, we use a range-based for loop to iterate over the map. In each iteration, we print the value by accessing `keyValuePair.second`.

3. Iterating over keys and values: We use a range-based for loop to iterate over the map. In each iteration, we print both the key and the value.

Note that the order of iteration is based on the keys, as `std::map` in C++ is an ordered map.
