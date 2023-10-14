# Collection Literals and Inline Initialization/Passing
This code demonstrates the inline initialization of various collection types in C++. 

1. `std::vector<int> vec = {1, 2, 3, 4, 5};` - This line initializes a vector of integers with the values 1 through 5. The values are printed to the console in the order they were initialized.

2. `std::map<std::string, int> map = {{"apple", 1}, {"banana", 2}, {"cherry", 3}};` - This line initializes a map with string keys and integer values. The keys and values are printed to the console in the order they were initialized.

3. `std::set<int> set = {5, 4, 3, 2, 1};` - This line initializes a set of integers with the values 5 through 1. The values are printed to the console in ascending order, as sets in C++ are ordered collections.

4. `std::array<int, 5> arr = {1, 2, 3, 4, 5};` - This line initializes an array of integers with the values 1 through 5. The values are printed to the console in the order they were initialized.

Note that the syntax for inline initialization is the same for all these collection types: the collection is declared with its type, followed by an equals sign and the values to be initialized, enclosed in curly braces.