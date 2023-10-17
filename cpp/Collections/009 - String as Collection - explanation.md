# String as Collection

In C++, strings can be treated as collections of characters. This means you can access individual characters using array-like syntax or the `.at()` method, and you can iterate over the characters in a string using a range-based for loop or iterators.

The `.front()` and `.back()` methods provide access to the first and last characters of the string, respectively.

The `.begin()` and `.end()` methods return iterators pointing to the start and end of the string, allowing you to iterate over the string in a similar way to other collections. The `.rbegin()` and `.rend()` methods return reverse iterators, which iterate over the string in reverse order.

Note that all these methods and techniques treat the string as a collection of `char` elements. If you need to work with larger units (like words or lines), you'll need to use other techniques or libraries.
