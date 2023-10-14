# Uniformly Initializing Elements (eg. to default or non-default values based on type)
In the above code, we demonstrate the uniform initialization of elements in C++ collections. We use the `std::vector` and `std::array` collections for this demonstration. 

For both `std::vector` and `std::array`, we show how to initialize the collections with default values (in this case, 0 for the type `int`) and with non-default values. 

The uniform initialization syntax `{}` is used to initialize the collections. For `std::vector`, we can also use the constructor that takes a size and a value to initialize all elements to a specific value. 

The `std::array` requires the size to be specified at compile time as part of the type. If fewer elements than the size are provided in the initializer list, the remaining elements are default-initialized (to 0 for `int`). 

The `auto` keyword is used in the range-based for loops to automatically deduce the type of the elements in the collections. 

The `const` keyword is used to prevent modification of the elements in the collections. 

The `&` symbol is used to create references to the elements in the collections, to avoid copying them. 

The `std::endl` manipulator is used to insert a newline and flush the output buffer.