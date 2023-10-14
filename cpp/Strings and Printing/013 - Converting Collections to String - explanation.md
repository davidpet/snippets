# Converting Collections to String
In this code snippet, we first declare a vector of integers. We then declare an `ostringstream` object, which is a type of output stream that operates on strings. We use a range-based for loop to iterate over the vector, and the '<<' operator to append each number to the `ostringstream`. Finally, we use the `str()` member function to get the string from the `ostringstream`, and print it.

This is a basic example of converting a collection to a string in C++. The same principle can be applied to other types of collections, such as lists, sets, and maps, and to collections of other types of elements, such as strings or custom objects. The key is to use an `ostringstream` to build the string, and the '<<' operator to append elements to it.

Note that in this example, there is a trailing space at the end of the string. If you want to remove it, you can use the `substr()` function:

```cpp
numbers_str = numbers_str.substr(0, numbers_str.length() - 1);
```

This will create a new string that consists of all characters in `numbers_str` except the last one.