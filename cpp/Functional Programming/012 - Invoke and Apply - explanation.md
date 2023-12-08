## `std::invoke` and `std::apply` in C++

### `std::invoke`

Introduced in C++17, `std::invoke` is a utility that can call callable objects (like functions, function pointers, and functors), member functions, and data members. It abstracts the syntax required to invoke different types of callables.

### `std::apply`

Also introduced in C++17, `std::apply` is used to call a callable object by unpacking a tuple to use as its arguments.

### Notes:

- `std::invoke` is a generalized function invoker that abstracts away the difference in syntax for calling different types of callable objects and members.  It is similar to `std::bind` except that it calls instead of returning a function wrapper.  It can give you a python-like static function interface where 'this' is the first arg passed in.
  
- `std::apply` is a utility for tuple unpacking. It's particularly useful when combined with functions that return tuples and you want to pass their results directly to other functions.
