# Tuple

In this code snippet, we have demonstrated the usage of tuples in C++. We have shown how to declare a tuple, access its elements, modify them, unpack the tuple into individual variables, create tuples using the `std::make_tuple` function, get the number of elements in a tuple using the `std::tuple_size` function, and get the type of a specific element in a tuple using the `std::tuple_element` function.

The reason it's implemnented so differently is so that it can be used as a protocol on other kinds of objects, by specializing the templates for a given type.  Then those things will act like a tuple.  They are specialized for a few different things (eg. std::pair and std::array), but not raw arrays.
