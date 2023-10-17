# String Methods

In this code snippet, we demonstrate various methods that can be used with strings in C++. We start by declaring and initializing a string, then we print the string and its length. We also show how to access and modify a specific character in the string. 

Next, we demonstrate how to append to a string, find a substring within a string, replace a substring in a string, and insert into a string. We also show how to erase part of a string.

Finally, we compare two strings to see if they are equal. Note that the `compare` method returns 0 if the strings are equal, and a non-zero value otherwise.

At the end we also demonstrat that an `std::string` is a collection of characters, similar to a vector, which means a lot of the concpets from __Collections__ snippets folder applies to strings as well.

Note: strings do a lot of copying (eg. literal copied into `std::string` on init) and no pooling/interning.
