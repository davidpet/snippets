# Printing

In the code, we have demonstrated various ways of printing in C++. We started with a basic string, then moved on to printing variables of different types (integer, string, boolean, character, and floating point number). We also showed how to print multiple variables in a single line, and how to format the output using `std::setw` for width and `std::setprecision` for precision. The `std::boolalpha` manipulator was used to print boolean values as true/false instead of 1/0.

You can print without a newline by not including `std::endl`, but your output won't show up until the next `std::endl` because it's __line_buffered__.  If that is too long, you can output right away by streaming `std::flush`.
