# std::function

This snippet shows an example of a very __simplified std::function implementation__.  The real thing is much more complex and does a lot of optimizations.

The basic idea of `std::function` is that it is a polymorphic wrapper than can be assigned, and used to call, the following kinds of object:
1. function pointers
1. lambdas
1. method references
1. callable objects

Note: it relies on __duck typing__ and __template specializations__ to make it all work, since there is no common type representing the superset of all of the above.  Essentially, you can treat `std::function` as if it is that common superset in most scenarios even though it's really a wrapper.

Note: since it's not shown in the snippet, here is how you'd actually use `std::function`:
```C++
std::function<int(int)> fn = [](int x) { return x * x;};
std::cout << fn(10) << std::endl;
```

NOTE: `std::function` stores things by copy, not by reference.  For function pointers it doesn't matter, but for lambdas and callable objects, if you expected shared state, you might not get it.  You can either capture by reference in lambdas, or use a shared `std::function` object to overcome that.