# Ordered vs. Unordered Maps/Dictionaries

In the code, we first include the necessary headers for using ordered (`<map>`) and unordered (`<unordered_map>`) maps. 

In the `main` function, we first declare an ordered map `orderedMap` of type `std::map<int, std::string>`. This map will automatically order its elements based on the key (in this case, an integer). We then insert several elements into the map using the `[]` operator. 

We print the contents of the ordered map, and as expected, the elements are printed in ascending order of the keys.

Next, we declare an unordered map `unorderedMap` of type `std::unordered_map<int, std::string>`. This map does not order its elements. We insert the same elements as in the ordered map. 

When we print the contents of the unordered map, the elements are printed in an arbitrary order, demonstrating that the unordered map does not order its elements.

Note that both ordered and unordered maps allow for efficient lookup, insertion, and removal of elements. However, ordered maps are typically slower than unordered maps for these operations, as they need to maintain the elements in order.
