# Conversions To/From String

In this code snippet, we demonstrate the conversion of strings to numeric types and vice versa in C++. 

The `std::stoi` function is used to convert a string to an integer, and `std::stod` is used to convert a string to a double. 

The `std::to_string` function is used to convert numeric types (both int and double in this case) to a string.

We also demonstrate the use of `std::stringstream` for conversions. A `std::stringstream` object can be used to convert numeric types to strings and vice versa by inserting the numeric value into the stringstream and then extracting the converted value. 

Note that the `std::stringstream::clear` function is used to clear the stringstream before reusing it for another conversion. This is necessary because the stringstream keeps an internal state that needs to be reset before it can be used again.
