In C++, there is no built-in support for docstrings like in Python. However, we can use comments to document our code. For variables, we can use comments to describe their purpose, type, and other relevant information. Here is an example:

#include <iostream>

int main() {
    // This is a single line comment describing the variable below
    // Variable: myInt
    // Type: int
    // Description: This variable is used to store an integer value
    int myInt = 10;
    std::cout << myInt << std::endl; // Expected output: 10

    /* This is a multi-line comment describing the variable below
       Variable: myFloat
       Type: float
       Description: This variable is used to store a floating point value */
    float myFloat = 3.14;
    std::cout << myFloat << std::endl; // Expected output: 3.14

    // Variable: myChar
    // Type: char
    // Description: This variable is used to store a character value
    char myChar = 'A';
    std::cout << myChar << std::endl; // Expected output: A

    // Variable: myBool
    // Type: bool
    // Description: This variable is used to store a boolean value
    bool myBool = true;
    std::cout << std::boolalpha << myBool << std::endl; // Expected output: true

    return 0;
}