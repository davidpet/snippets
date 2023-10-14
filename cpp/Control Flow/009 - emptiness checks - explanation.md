# emptiness checks
In this code snippet, we demonstrate how to perform emptiness checks in C++. We use the `empty()` function, which is a member function of many standard library containers like `std::vector` and `std::string`. This function returns `true` if the container is empty and `false` otherwise.

We first declare an empty `std::vector<int>` and check if it's empty. Since we haven't added any elements to it, `empty()` returns `true` and we print "The vector is empty." We then add an element to the vector and check again. This time, `empty()` returns `false` and we print "The vector is not empty."

We do the same thing with a `std::string`. We declare an empty string, check if it's empty, add a character to it, and check again. The results are the same as with the vector.

This demonstrates the basic usage of the `empty()` function. Note that other standard library containers like `std::list`, `std::deque`, `std::set`, etc. also have this function and it works the same way.