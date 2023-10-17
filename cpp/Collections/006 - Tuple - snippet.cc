#include <iostream>
#include <tuple> // Include the tuple library

int main() {
    // A tuple is a collection of heterogeneous items. It can store any number of items and each item can be of a different type.
    // Here we declare a tuple with three elements of types int, string, and double.
    std::tuple<int, std::string, double> my_tuple(10, "Hello", 3.14);
    
    // You can access elements of a tuple using std::get. The index is zero-based.
    std::cout << std::get<0>(my_tuple) << std::endl; // Prints: 10
    std::cout << std::get<1>(my_tuple) << std::endl; // Prints: Hello
    std::cout << std::get<2>(my_tuple) << std::endl; // Prints: 3.14

    // You can also modify elements of a tuple.
    std::get<0>(my_tuple) = 20;
    std::cout << std::get<0>(my_tuple) << std::endl; // Prints: 20

    // The std::tie function can be used to unpack a tuple into individual variables.
    int my_int;
    std::string my_string;
    double my_double;
    std::tie(my_int, my_string, my_double) = my_tuple;
    std::cout << my_int << ", " << my_string << ", " << my_double << std::endl; // Prints: 20, Hello, 3.14

    // The std::make_tuple function can be used to easily create tuples.
    auto another_tuple = std::make_tuple(30, "World", 2.71);
    std::cout << std::get<0>(another_tuple) << std::endl; // Prints: 30

    // The std::tuple_size function can be used to get the number of elements in a tuple.
    std::cout << std::tuple_size<decltype(my_tuple)>::value << std::endl; // Prints: 3

    // The std::tuple_element function can be used to get the type of a specific element in a tuple.
    std::tuple_element<0, decltype(my_tuple)>::type first_element = std::get<0>(my_tuple);
    std::cout << first_element << std::endl; // Prints: 20

    return 0;
}
