# Console I/O

The code demonstrates the use of console I/O in C++. The `std::cout` object is used for output, and `std::cin` is used for input. The `std::endl` manipulator is used to insert a newline character and flush the output buffer.

The `std::cin >>` operator is used to read input until a whitespace character is encountered. To read a full line of input including spaces, the `std::getline` function is used.

The `std::cerr` object is used to output error messages to the standard error (usually the console), and `std::clog` is used to output log messages to the standard log (also usually the console). These are separate from `std::cout`, so they can be redirected separately if desired.

The `std::cin.ignore()` function is used to ignore or discard characters in the input buffer. This is necessary before calling `std::getline` after `std::cin >>`, because the latter leaves a newline character in the input buffer.
