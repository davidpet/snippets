#include <iostream>
#include <string>

int main() {
    // Declare two strings
    std::string str1 = "Hello, ";
    std::string str2 = "World!";

    // String concatenation using '+'
    std::string str3 = str1 + str2;
    std::cout << str3 << std::endl; // Expected output: Hello, World!

    // String concatenation using '+='
    str1 += str2;
    std::cout << str1 << std::endl; // Expected output: Hello, World!

    // String comparison using '=='
    bool isEqual = (str1 == str2);
    std::cout << std::boolalpha << isEqual << std::endl; // Expected output: false

    // String comparison using '!='
    isEqual = (str1 != str2);
    std::cout << std::boolalpha << isEqual << std::endl; // Expected output: true

    // String comparison using '<'
    bool isLess = (str1 < str2);
    std::cout << std::boolalpha << isLess << std::endl; // Expected output: false

    // String comparison using '>'
    bool isGreater = (str1 > str2);
    std::cout << std::boolalpha << isGreater << std::endl; // Expected output: true

    // String comparison using '<='
    isLess = (str1 <= str2);
    std::cout << std::boolalpha << isLess << std::endl; // Expected output: false

    // String comparison using '>='
    isGreater = (str1 >= str2);
    std::cout << std::boolalpha << isGreater << std::endl; // Expected output: true

    return 0;
}