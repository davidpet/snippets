# File I/O
1. The `ofstream` object is used to write to files, and the `ifstream` object is used to read from files. Both are part of the `<fstream>` library in C++.
2. The `is_open()` function is used to check if the file has been successfully opened. If the file fails to open, the function will return `false`.
3. The `<<` operator is used to write to the file, and the `getline()` function is used to read from the file.
4. Always remember to close the file after you're done with it using the `close()` function. This is important to prevent data corruption and to free up system resources.
5. The `getline()` function reads a line from the file and stores it in the string variable. It stops reading when it encounters a newline character (`\n`), end of file, or some other specified delimiter.
6. The `while (std::getline(inFile, line))` loop continues until there are no more lines to read from the file.