# String Splitting

In the code, we first declare a string `str` and then use a string stream `iss` to split the string. The split strings are stored in a vector `results`. We then print each word in the string on a new line.  The reason this works is because `std::istream_iterator` is a type of object that iterates through an `istream` as if using `operator>>` one at a time (letting the # of things input be dynamic), and the default constructed iterator is the end of stream iterator.

In the second part of the code, we demonstrate another way to split a string using the `getline` function. We declare a string `str2` and then use a string stream `tokenStream` to split the string by commas. The split strings are stored in a vector `results2`. We then print each programming language on a new line.  `getline` retrieves the next string until it hits the delim and then skips the delim before the next call. The default delim is `'\n'`.

This code demonstrates two common ways to split a string in C++: using a string stream and using the `getline` function.

There is also a `std::sregex_token_iterator` to iterate through parts of a string that don't match a pattern (such as `\\s+`).

NOTE: there is similarly no `trim` method on strings in C++, but you can do it with methods like `find_first_not_of` and `find_last_not_of`.
