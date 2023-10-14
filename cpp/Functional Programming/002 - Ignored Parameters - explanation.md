# Ignored Parameters
In the above code, we have two functions `printFirst` and `printSecond` that ignore some of their parameters. The ignored parameters are marked with the `[[maybe_unused]]` attribute. This attribute tells the compiler that the parameter might not be used, which can prevent warnings about unused parameters.

In the `main` function, we use these functions in a `std::for_each` loop. The `std::for_each` function applies a function to a range of elements. In this case, we use a lambda function to call `printFirst` and `printSecond` with the elements of the `numbers` vector and some additional parameters. The additional parameters are ignored in the functions.

The `printFirst` function ignores its second parameter, so it only prints the first parameter. The `printSecond` function ignores its first and third parameters, so it only prints the second parameter. As a result, both functions print the elements of the `numbers` vector when used in the `std::for_each` loop.