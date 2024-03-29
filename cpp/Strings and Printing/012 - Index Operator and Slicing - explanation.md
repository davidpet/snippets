# Index Operator and Slicing

In C++, strings are objects of the `std::string` class, which provides a lot of useful methods for string manipulation. The index operator `[]` can be used to access or modify individual characters in a string. However, unlike some other languages, C++ does not support string slicing directly with the index operator. Instead, the `substr` function can be used to achieve similar functionality. It's important to note that trying to access an out-of-range index with the index operator will not throw an exception, but it's undefined behavior and should be avoided.
