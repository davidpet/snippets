# Functional zip() method on 2 streams

C++ does not have a built-in zip operation, so a custom implementation is shown here.

In the above code, we define a template function `zip()` that takes two vectors of any type and returns a vector of pairs. The `std::transform()` function is used to iterate over the two input vectors and create pairs of elements, which are then stored in the output vector. The lambda function `[](const T& aa, const U& bb) { return std::make_pair(aa, bb); }` is used to specify how the pairs should be created.

Note that this implementation of `zip()` only works with vectors and will not work with other types of containers. Also, it will stop at the end of the smallest container if the input containers have different sizes. If you want a more generic `zip()` function that works with any type of container and can handle containers of different sizes, you would need to use a more complex implementation involving iterators and possibly the Boost library.
