#include <iostream>
#include <string>

int main() {
    // Declare two strings
    std::string str1 = "Hello, ";
    std::string str2 = "World!";

    // Concatenate the strings using the '+' operator
    std::string str3 = str1 + str2;
    std::cout << str3 << std::endl; // Expected output: "Hello, World!"

    // Concatenate a string with a character array
    std::string str4 = str1 + "C++!";
    std::cout << str4 << std::endl; // Expected output: "Hello, C++!"

    // Concatenate a string with a single character
    std::string str5 = str1 + 'A';
    std::cout << str5 << std::endl; // Expected output: "Hello, A"

    // Concatenate using the '+=' operator
    str1 += str2;
    std::cout << str1 << std::endl; // Expected output: "Hello, World!"

    // Concatenate using the append() function
    std::string str6 = "Hello, ";
    str6.append("C++!");
    std::cout << str6 << std::endl; // Expected output: "Hello, C++!"

    return 0;
}