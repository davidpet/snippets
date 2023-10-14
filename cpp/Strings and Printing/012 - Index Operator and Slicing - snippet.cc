#include <iostream>
#include <string>

int main() {
    // Declare and initialize a string
    std::string str = "Hello, World!";

    // Accessing a character using the index operator
    char ch = str[7]; // Indexing starts from 0
    std::cout << ch << std::endl; // Expected output: W

    // Modifying a character using the index operator
    str[7] = 'w';
    std::cout << str << std::endl; // Expected output: Hello, world!

    // Trying to access an out-of-range index will not throw an exception, but it's undefined behavior
    // char ch_out_of_range = str[100]; // Uncommenting this line is not recommended

    // C++ strings do not support slicing directly. However, substr function can be used to achieve similar functionality
    std::string sliced_str = str.substr(0, 5); // substr(start_index, length)
    std::cout << sliced_str << std::endl; // Expected output: Hello

    // If the second argument is omitted, substr will return all characters from start_index to the end of the string
    std::string sliced_str_2 = str.substr(7);
    std::cout << sliced_str_2 << std::endl; // Expected output: world!

    return 0;
}