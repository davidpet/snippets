C++ does not natively support Observables/Reactive Programming in its standard library. However, there are third-party libraries such as RxCpp (Reactive Extensions for C++) that provide this functionality. Here is an example of how you might use RxCpp to demonstrate Observables/Reactive Programming.

First, you need to include the RxCpp library in your project. You can do this by adding the following line to your CMakeLists.txt file:

find_package(RxCpp REQUIRED)

Then, you can include the necessary headers in your C++ file:

#include <rxcpp/rx.hpp>

Here is a simple example of creating an observable sequence and subscribing to it:

#include <rxcpp/rx.hpp>
#include <iostream>

int main() {
    // Create an observable sequence
    auto values = rxcpp::observable<>::range(1, 5);

    // Subscribe to the sequence
    values.subscribe(
        [](int v){std::cout << v << std::endl;}, // onNext
        [](){std::cout << "Completed" << std::endl;}  // onCompleted
    );

    return 0;
}

This will print:

1
2
3
4
5
Completed

In this example, `rxcpp::observable<>::range(1, 5)` creates an observable sequence of integers from 1 to 5. The `subscribe` function is used to subscribe to this sequence. The first argument to `subscribe` is a lambda function that is called for each value in the sequence (onNext). The second argument is a lambda function that is called when the sequence is completed (onCompleted).

You can also use the `filter` and `map` functions to transform the sequence:

#include <rxcpp/rx.hpp>
#include <iostream>

int main() {
    // Create an observable sequence
    auto values = rxcpp::observable<>::range(1, 5);

    // Filter and transform the sequence
    values.
        filter([](int v){ return v % 2 == 0; }).  // filter out odd numbers
        map([](int v){ return v * v; }).  // square the numbers
        subscribe(
            [](int v){std::cout << v << std::endl;}, // onNext
            [](){std::cout << "Completed" << std::endl;}  // onCompleted
        );

    return 0;
}

This will print:

4
16
Completed

In this example, `filter([](int v){ return v % 2 == 0; })` filters out odd numbers from the sequence, and `map([](int v){ return v * v; })` squares the remaining numbers.